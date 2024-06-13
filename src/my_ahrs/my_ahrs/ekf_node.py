#!/usr/bin/env python3
import numpy as np
from ahrs.filters import EKF
from ahrs.common.orientation import acc2q, q2euler
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu, MagneticField
from geometry_msgs.msg import Quaternion, Vector3

class EKFNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("ekf_node") # MODIFY NAME
        
        self.imu_subscriber = self.create_subscription(Imu, '/imu/data', self.imu_callback, 10)
        
        self.mag_subscriber = self.create_subscription(MagneticField, '/mag/data', self.mag_callback, 10)
        
        self.orientation_publisher = self.create_publisher(Quaternion, '/orientation_ekf', 10)
        
        self.euler_publisher = self.create_publisher(Vector3, 'euler_ekf', 10)
        
        self.ekf_filter = EKF()
        
        self.orientation_msg = Quaternion()
        
        self.euler_msg = Vector3()

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
            self.q = self.ekf_filter.update(q = self.q ,gyr = gyro, acc = accel, mag = self.mag_data)
            
            
            
            self.orientation_msg.x = self.q[1]
            self.orientation_msg.y = self.q[2]
            self.orientation_msg.z = self.q[3]
            self.orientation_msg.w = self.q[0]
            
            self.euler = q2euler(self.q)
            
            self.euler_msg.x = self.euler[0]
            self.euler_msg.y = self.euler[1]
            self.euler_msg.z = self.euler[2]
            
            self.orientation_publisher.publish(self.orientation_msg)
                        
            self.euler_publisher.publish(self.euler_msg)
            
    def mag_callback(self, msg):
        self.mag_data = np.array([msg.magnetic_field.x,
                                  -msg.magnetic_field.y,
                                  msg.magnetic_field.z])

def main(args = None):
    rclpy.init(args=args)
    node = EKFNode()  # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()