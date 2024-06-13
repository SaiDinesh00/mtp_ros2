#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from aerobot_interfaces.srv import EscSrv
from aerobot_interfaces.msg import EscMsg
import pigpio
import time
import os


class ESCNode(Node):
    def __init__(self):
        os.system("sudo pigpiod")
        time.sleep(2)
        
        self.pi = pigpio.pi()
        self.max_value = 2000
        self.min_value = 1000
        
        super().__init__("esc")
        
        self.arm = self.create_service(EscSrv, 'arm', self.arm)
        
        self.subscriber_ = self.create_subscription(EscMsg, 'esc_command', self.esc_subscriber_callback, 10)
        self.get_logger().info("Motor Node Has been Sucessfully set")
        
    def arm(self, request, response):
        
        self.pin = request.pin_number
        if request.state == True:
            
            self.pulse_width = 0
            self.pi.set_servo_pulsewidth(self.pin, self.pulse_width)
            time.sleep(0.5)
            self.pi.set_servo_pulsewidth(self.pin, self.max_value)
            time.sleep(0.5)
            self.pi.set_servo_pulsewidth(self.pin, self.min_value)
            time.sleep(0.5)
            
        else:
            self.pi.set_servo_pulsewidth(self.pin, 0)            
            
        response = True
        
        return response
    
    def esc_subscriber_callback(self, msg):
        
        self.pin = msg.pin_number
        
        self.pi.set_servo_pulsewidth(self.pin, msg.pulse_width)
        

def main(args = None):
    rclpy.init(args=args)
    node = ESCNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()