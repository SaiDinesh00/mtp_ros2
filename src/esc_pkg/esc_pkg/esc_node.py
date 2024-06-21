#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from aerobot_interfaces.srv import EscSrv
from std_msgs.msg import Float64
import pigpio
import time
import os

class ESCNode(Node):
    def __init__(self):
        super().__init__('esc')
        try:
            os.system("sudo pigpiod")
            time.sleep(2)
            self.pi = pigpio.pi()
            self.max_value = 2000
            self.min_value = 1000

            self.arm_pitch_service = self.create_service(EscSrv, 'arm_pitch', self.arm_pitch_callback)
            self.arm_yaw_service = self.create_service(EscSrv, 'arm_yaw', self.arm_yaw_callback)

            self.subscriber1 = self.create_subscription(Float64, 'esc_command1', self.esc1_subscriber_callback, 10)
            self.subscriber2 = self.create_subscription(Float64, 'esc_command2', self.esc2_subscriber_callback, 10)

            self.get_logger().info("ESC Node has been successfully set up")
        except Exception as e:
            self.get_logger().error(f"Failed to initialize: {e}")

    def arm_pitch_callback(self, request, response):
        response = EscSrv.Response()  # Initialize response
        try:
            pin = request.pin_number
            if request.state:
                self.pi.set_servo_pulsewidth(pin, 0)
                time.sleep(0.5)
                self.pi.set_servo_pulsewidth(pin, self.max_value)
                time.sleep(0.5)
                self.pi.set_servo_pulsewidth(pin, self.min_value)
                time.sleep(0.5)
                self.pi.set_servo_pulsewidth(pin, 1500)
                time.sleep(0.5)
            else:
                self.pi.set_servo_pulsewidth(pin, 0)

            response.success = True
            self.get_logger().info("Arming pitch done")
        except Exception as e:
            self.get_logger().error(f"Failed to arm pitch: {e}")
            response.success = False

        return response

    def arm_yaw_callback(self, request, response):
        response = EscSrv.Response()  # Initialize response
        try:
            pin = request.pin_number
            if request.state:
                self.pi.set_servo_pulsewidth(pin, 0)
                time.sleep(0.5)
                self.pi.set_servo_pulsewidth(pin, self.max_value)
                time.sleep(0.5)
                self.pi.set_servo_pulsewidth(pin, self.min_value)
                time.sleep(0.5)
                self.pi.set_servo_pulsewidth(pin, 1500)
                time.sleep(0.5)
            else:
                self.pi.set_servo_pulsewidth(pin, 0)

            response.success = True
            self.get_logger().info("Arming yaw done")
        except Exception as e:
            self.get_logger().error(f"Failed to arm yaw: {e}")
            response.success = False

        return response

    def esc1_subscriber_callback(self, msg):
        try:
            self.pi.set_servo_pulsewidth(27, msg.data)
        except Exception as e:
            self.get_logger().error(f"Failed to set ESC 1 pulse width: {e}")

    def esc2_subscriber_callback(self, msg):
        try:
            self.pi.set_servo_pulsewidth(17, msg.data)
        except Exception as e:
            self.get_logger().error(f"Failed to set ESC 2 pulse width: {e}")

def main(args=None):
    rclpy.init(args=args)
    node = ESCNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
