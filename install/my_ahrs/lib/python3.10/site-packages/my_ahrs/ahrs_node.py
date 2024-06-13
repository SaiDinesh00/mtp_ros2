#!/usr/bin/env python3
import numpy as np
from ahrs.filters import EKF
from ahrs.common.orientation import acc2q
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu, MagneticField
from geometry_msgs.msg import Quaternion

class EKFNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("ekf_node") # MODIFY NAME
        
        self.imu_subscriber = self.create_subscription(Imu, '/imu/data', self.imu_callback, 10)
        
        self.mag_subscriber = self.create_subscription(MagneticField, '/mag/data', self.mag_callback, 10)
        
        self.orientation_publisher = self.create_publisher(Quaternion, '/orientation', 10)
        
        self.ekf_filter = EKF()

        self.mag_data = None
        
    def imu_callback(self, msg):
        accel = np.array([msg.linear_acceleration.x,
                          msg.linear_acceleration.y,
                          msg.linear_acceleration.z])
        
        gyro = np.array([msg.angular_velocity.x,
                         msg.angular_velocity.y,
                         msg.angular_velocity.z])
        
        if self.mag_data is not None:
            self.ekf_filter.update(gyr = gyro, acc = accel, mag = self.mag_data)
            
            q = self.ekf_filter.Q
            
            orientation_msg = Quaternion()
            orientation_msg.x = q[1]
            orientation_msg.y = q[2]
            orientation_msg.z = q[3]
            orientation_msg.w = q[0]
            
            self.orientation_publisher.publish(orientation_msg)
            
    def mag_callback(self, msg):
        self.mag_data = np.array([msg.magnetic_field.x,
                                  msg.magnetic_field.y,
                                  msg.magnetic_field.z])

def main(args = None):
    rclpy.init(args=args)
    node = EKFNode()  # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()