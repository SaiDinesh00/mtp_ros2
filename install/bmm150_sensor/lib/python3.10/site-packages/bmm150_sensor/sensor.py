#!/usr/bin/env python3
import bmm150
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import MagneticField
from geometry_msgs.msg import Vector3

class BMM150(Node): 
    def __init__(self):
        super().__init__("bmm150")
        self.device = bmm150.BMM150(presetmode=bmm150.PresetMode.HIGHACCURACY)
        self.mag_msg = MagneticField()
        self.mag_field = Vector3()
        self.publisher_ = self.create_publisher(MagneticField, 'mag/data', 10)
        self.timer_ = self.create_timer(1/20, self.publish_mag)
        
    def publish_mag(self):
        x, y, z = self.device.read_mag_data()
        self.mag_field.x = x
        self.mag_field.y = y
        self.mag_field.z = z
        self.mag_msg.magnetic_field = self.mag_field
        self.publisher_.publish(self.mag_msg)
        
def main(args = None):
    rclpy.init(args=args)
    node = BMM150()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()