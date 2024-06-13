#!/usr/bin/env python3
import smbus2
import time
import numpy as np
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu
from std_srvs.srv import Trigger
from geometry_msgs.msg import Vector3



class LSM6DSO(Node):
# I2C address of the LSM6DSO
    
    def __init__(self, bus_number=1):
        # Initialize I2C bus
        super().__init__('lsm6dso')
        self.bus = smbus2.SMBus(bus_number)  # 1 indicates /dev/i2c-1
        self.sensitivity_gyro = 70.0/1000.0  # 2000 dps full scale, 16-bit resolution
        self.dps_to_rads = np.pi / 180.0  # Conversion factor from degrees per second to radians per second
        self.sensitivity_accel = 0.061 / 1000.0  # 2g full scale, 16-bit resolution
        self.g_to_ms2 = 9.80665  # Conversion factor from g to m/s²
        self.gyro = Vector3()
        self.accel = Vector3()
        
        # self.calibrate_gyro = self.create_service(Trigger, 'calibrate_gyro', self.calibrate_gyroscope)    
        # self.calibrate_accel = self.create_service(Trigger, 'calibrate_accel', self.calibrate_accelerometer)    
        
        self.publisher_ = self.create_publisher(Imu, 'sensor_data', 10)
        self.timer_ = self.create_timer(0.01, self.pub_message)        
        self.LSM6DSO_ADDRESS = 0x6B  # The default I2C address is 0x6A. It might be 0x6B based on the configuration.

        # LSM6DSO Register addresses
        self.WHO_AM_I = 0x0F
        self.CTRL1_XL = 0x10
        self.CTRL2_G = 0x11
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
        
        

    def read_byte(self,register):
        return self.bus.read_byte_data(self.LSM6DSO_ADDRESS, register)

    def write_byte(self,register, value):
        self.bus.write_byte_data(self.LSM6DSO_ADDRESS, register, value)

    def read_word(self, register):
        low = self.read_byte(register)
        high = self.read_byte(register + 1)
        value = (high << 8) + low
        return value

    def read_word_2c(self,register):
        val = self.read_word(register)
        if val >= 0x8000:
            return -((65535 - val) + 1)
        else:
            return val


    

    

    # Read gyroscope raw data
    def read_gyroscope_raw(self):
        x = self.read_word_2c(self.OUTX_L_G)
        y = self.read_word_2c(self.OUTY_L_G)
        z = self.read_word_2c(self.OUTZ_L_G)
        return x, y, z

    # Read accelerometer raw data
    def read_accelerometer_raw(self):
        x = self.read_word_2c(self.OUTX_L_A)
        y = self.read_word_2c(self.OUTY_L_A)
        z = self.read_word_2c(self.OUTZ_L_A)
        return x, y, z

    # Convert gyroscope data to rad/s
    def pub_message(self):
        (gx, gy, gz) = self.read_gyroscope_raw()
        (ax, ay, az) = self.read_accelerometer_raw()
        self.accel.x = ax * self.sensitivity_accel * self.g_to_ms2
        self.accel.y = ay * self.sensitivity_accel * self.g_to_ms2
        self.accel.z = az * self.sensitivity_accel * self.g_to_ms2
        self.gyro.x = gx * self.sensitivity_gyro * self.dps_to_rads
        self.gyro.y = gy * self.sensitivity_gyro * self.dps_to_rads
        self.gyro.z = gz * self.sensitivity_gyro * self.dps_to_rads
        pub_msg = Imu()
        pub_msg.angular_velocity = self.gyro
        pub_msg.linear_acceleration = self.accel
        self.publisher_.publish(pub_msg)
        
    
    
def main():
    rclpy.init()
    node = LSM6DSO()
    try:
        rclpy.spin(node)
    except:
        rclpy.shutdown()
    
if __name__ == '__main__':
    main()