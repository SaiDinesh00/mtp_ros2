#!/usr/bin/env python3
import numpy as np
from ahrs.filters import Madgwick
from ahrs.common.orientation import acc2q, q2euler
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu
from geometry_msgs.msg import Quaternion, Vector3

class MadgwickNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("madgwick_node") # MODIFY NAME
        
        self.imu_subscriber = self.create_subscription(Imu, '/imu/data', self.imu_callback, 10)
        
        self.orientation_publisher = self.create_publisher(Quaternion, '/orientation', 10)
        
        self.madgwick_filter = Madgwick()

        self.euler_msg = Vector3()
        
        orientation_msg = Quaternion()
        
        
        
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
        
        self.q = acc2q(accel)
        
        self.q = self.madgwick_filter.updateIMU(self.q, gyro, accel)
        
        
        self.orientation_msg.x = self.q[1]
        self.orientation_msg.y = self.q[2]
        self.orientation_msg.z = self.q[3]
        self.orientation_msg.w = self.q[0]
        
        euler = q2euler(self.q)
        self.euler_msg.x = euler[0]
        self.euler_msg.y = euler[1]
        self.euler_msg.z = euler[2]
        
        self.orientation_publisher.publish(self.orientation_msg)
            
    def mag_callback(self, msg):
        self.mag_data = np.array([msg.magnetic_field.x,
                                  -msg.magnetic_field.y,
                                  msg.magnetic_field.z])

def main(args = None):
    rclpy.init(args=args)
    node = MadgwickNode()  # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()