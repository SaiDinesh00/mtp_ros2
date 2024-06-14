#!/usr/bin/env python3
import numpy as np
from ahrs.filters import Madgwick
from ahrs.common.orientation import acc2q, q2euler
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu, MagneticField
from geometry_msgs.msg import Quaternion, Vector3

class MadgwickFilter(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("mf_node") # MODIFY NAME
        
        self.imu_subscriber = self.create_subscription(Imu, '/imu/data', self.imu_callback, 10)
        
        self.mag_subscriber = self.create_subscription(MagneticField, '/mag/data', self.mag_callback, 10)
        
        self.orientation_publisher = self.create_publisher(Quaternion, '/orientation_mad', 10)
        
        self.euler_publisher = self.create_publisher(Vector3, '/euler_mad', 10)
        
        self.madg_filter = Madgwick()

        self.mag_data = None
        
        
        
    def imu_callback(self, msg):
        mdps_to_rps = np.pi / 180000
        g2mps2 = 9.80665
        accel = np.array([msg.linear_acceleration.x * g2mps2,
                          -msg.linear_acceleration.y * g2mps2,
                          -msg.linear_acceleration.z * g2mps2])
        
        self.q = acc2q(accel)
        
        gyro = np.array([msg.angular_velocity.x * mdps_to_rps,
                         -msg.angular_velocity.y * mdps_to_rps,
                         -msg.angular_velocity.z * mdps_to_rps])
        
        if self.mag_data is not None:
            self.q = self.madg_filter.updateMARG(self.q, gyro, accel, self.mag_data)
            
            orientation_msg = Quaternion()
            euler_msg = Vector3()
            orientation_msg.x = self.q[1]
            orientation_msg.y = self.q[2]
            orientation_msg.z = self.q[3]
            orientation_msg.w = self.q[0]
            
            euler = q2euler(self.q)
            euler_msg.x = euler[0]
            euler_msg.y = euler[1]
            euler_msg.z = euler[2]
            
            self.orientation_publisher.publish(orientation_msg)
            self.euler_publisher.publish(euler_msg)
            
            
    def mag_callback(self, msg):
        self.mag_data = np.array([msg.magnetic_field.x*1e3,
                                  -msg.magnetic_field.y*1e3,
                                  msg.magnetic_field.z*1e3])

def main(args = None):
    rclpy.init(args=args)
    node = MadgwickFilter()  # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()