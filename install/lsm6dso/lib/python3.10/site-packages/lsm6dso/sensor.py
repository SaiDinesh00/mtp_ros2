#!/usr/bin/env python3
import smbus2
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu
from geometry_msgs.msg import Vector3
import numpy as np

class LSM6DSO(Node): 
    def __init__(self):
        super().__init__("lsm6dso") 
        self.LSM6DSO_ADDRESS = 0x6B  # The default I2C address is 0x6A. It might be 0x6B based on the configuration.
        # LSM6DSO Register addresses
        self.WHO_AM_I = 0x0F
        self.CTRL1_XL = 0x10
        self.CTRL2_G  = 0x4C
        self.OUTX_L_G = 0x22
        self.OUTX_H_G = 0x23
        self.OUTY_L_G = 0x24
        self.OUTY_H_G = 0x25
        self.OUTZ_L_G = 0x26
        self.OUTZ_H_G = 0x27
        self.OUTX_L_A = 0x28
        self.OUTX_H_A = 0x29
        self.OUTY_L_A = 0x2A
        self.OUTY_H_A = 0x2B
        self.OUTZ_L_A = 0x2C
        self.OUTZ_H_A = 0x2D
        
        self.bus = smbus2.SMBus(1)  # 1 indicates /dev/i2c-1
        self.sensitivity_gyro = 70.0 / 1000 # (dps / LSB)
        self.sensitivity_acc = 0.061 / 1000 # (milligravity / LSB)
        self.gyr_conv = (np.pi/180) # (mdps 2 rad/s)
        self.acc_conv = 9.81 # (g 2 mps2)
        
        self.acc_msg = Vector3()
        self.imu_msg = Imu()
        self.gyro_msg = Vector3()
        
        # Initialize accelerometer (CTRL1_XL) and gyroscope (CTRL2_G)
        self.write_byte(self.CTRL1_XL, 0x60)  # Accelerometer: 104 Hz, 2g, 400 Hz filter
        self.write_byte(self.CTRL2_G, 0x60)   # Gyroscope: 104 Hz, 2000 dps
        
        self.timer_ = self.create_timer(1/104, self.read_gyroscope)
        self.publisher_ = self.create_publisher(Imu, 'imu/data', 10)
        
        
    def read_byte(self, register):
        return self.bus.read_byte_data(self.LSM6DSO_ADDRESS, register)
    
    def write_byte(self, register, value):
        self.bus.write_byte_data(self.LSM6DSO_ADDRESS, register, value)
        
    def read_word(self, register):
        low = self.read_byte(register)
        high = self.read_byte(register + 1)
        value = (high << 8) + low
        return value
    
    def read_word_2c(self, register):
        val = self.read_word(register)
        if val >= 0x8000:
            return -((65535 - val) + 1)
        else:
            return val
        
    # Read gyroscope data
    def read_gyroscope(self):
        gyro_x = self.read_word_2c(self.OUTX_L_G)
        gyro_y = self.read_word_2c(self.OUTY_L_G)
        gyro_z = self.read_word_2c(self.OUTZ_L_G)
        
        gyro_raw = [gyro_x, gyro_y, gyro_z]
        gyro_conv = [a*self.sensitivity_gyro*self.gyr_conv for a in gyro_raw]
        self.gyro_msg.x = gyro_conv[0] 
        self.gyro_msg.y = gyro_conv[1]
        self.gyro_msg.z = gyro_conv[2]
        
        
        acc_x = self.read_word_2c(self.OUTX_L_A)
        acc_y = self.read_word_2c(self.OUTY_L_A)
        acc_z = self.read_word_2c(self.OUTZ_L_A)
        
        acc_raw = [acc_x, acc_y, acc_z]
        acc_conv = [a*self.sensitivity_acc*self.acc_conv for a in acc_raw]
        acc_conv = acc_conv 
        self.acc_msg.x = acc_conv[0]
        self.acc_msg.y = acc_conv[1]
        self.acc_msg.z = acc_conv[2]   
        
        
        self.imu_msg.angular_velocity = self.gyro_msg
        self.imu_msg.linear_acceleration = self.acc_msg
        self.publisher_.publish(self.imu_msg)
        


def main(args = None):
    rclpy.init(args=args)
    node = LSM6DSO() 
    try:                        
        rclpy.spin(node)
    except KeyboardInterrupt:
        # Close the I2C bus
        node.bus.close()
        rclpy.shutdown()

if __name__ == '__main__':
    main()