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
        os.system("sudo pigpiod")
        time.sleep(2)
        
        self.pi = pigpio.pi()
        self.max_value = 2000
        self.min_value = 1000
        
        super().__init__("esc")
        
        self.arm_pitch = self.create_service(EscSrv, 'arm_pitch', self.arm_pitch)
        self.arm_yaw = self.create_service(EscSrv, 'arm_yaw', self.arm_yaw)
        
        self.subscriber1 = self.create_subscription(Float64, 'esc_command1', self.esc1_subscriber_callback, 10)
        self.subscriber2 = self.create_subscription(Float64, 'esc_command2', self.esc2_subscriber_callback, 10)
        self.get_logger().info("Motor Node Has been Sucessfully set")
        
    def arm_pitch(self, request, response):
        
        self.pin = request.pin_number
        if request.state == True:
            
            self.pulse_width = 0
            self.pi.set_servo_pulsewidth(self.pin, self.pulse_width)
            time.sleep(0.5)
            self.pi.set_servo_pulsewidth(self.pin, self.max_value)
            time.sleep(0.5)
            self.pi.set_servo_pulsewidth(self.pin, self.min_value)
            time.sleep(0.5)
            self.pi.set_servo_pulsewidth(self.pin, 1500)
            time.sleep(0.5)
            
        elif request.state == False:
            self.pi.set_servo_pulsewidth(self.pin, 0)   
            
        else:
            pass
            
        response.success = True
        
        self.get_logger().info("arming done")
        return response
    
    def arm_yaw(self, request, response):
        
        self.pin = request.pin_number
        if request.state == True:
            
            self.pulse_width = 0
            self.pi.set_servo_pulsewidth(self.pin, self.pulse_width)
            time.sleep(0.5)
            self.pi.set_servo_pulsewidth(self.pin, self.max_value)
            time.sleep(0.5)
            self.pi.set_servo_pulsewidth(self.pin, self.min_value)
            time.sleep(0.5)
            self.pi.set_servo_pulsewidth(self.pin, 1500)
            time.sleep(0.5)
            
        elif request.state == False:
            self.pi.set_servo_pulsewidth(self.pin, 0) 
            
        else:
            pass
            
        response.success = True
        
        self.get_logger().info("arming done")
        return response
    
    def esc1_subscriber_callback(self, msg):
        self.pi.set_servo_pulsewidth(27, msg.data)
        
    def esc2_subscriber_callback(self, msg):
        self.pi.set_servo_pulsewidth(17, msg.data)
        

def main(args = None):
    rclpy.init(args=args)
    node = ESCNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()