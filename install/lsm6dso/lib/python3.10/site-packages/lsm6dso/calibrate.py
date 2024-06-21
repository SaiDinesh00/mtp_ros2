import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu
from aerobot_interfaces.srv import Calibrate  # Adjust the import to match your package name
import threading

class GyroCalibrationNode(Node):
    def __init__(self):
        super().__init__('gyro_calibration_node')
        self.subscription = self.create_subscription(
            Imu,
            '/imu/data',
            self.imu_callback,
            10
        )
        self.srv = self.create_service(Calibrate, 'get_gyro_calibration', self.calibrate_callback)
        
        self.gyro_values_x = []
        self.gyro_values_y = []
        self.gyro_values_z = []
        self.sample_size = 2000
        self.calibration_ready = False
        self.lock = threading.Lock()
        self.calibration_event = threading.Event()

    def imu_callback(self, msg):
        with self.lock:
            if not self.calibration_ready:
                self.gyro_values_x.append(msg.angular_velocity.x)
                self.gyro_values_y.append(msg.angular_velocity.y)
                self.gyro_values_z.append(msg.angular_velocity.z)
                if len(self.gyro_values_x) >= self.sample_size:
                    self.calibration_ready = True
                    self.calibration_event.set()
                    self.get_logger().info('Gyro calibration data collection complete.')

    def calibrate_callback(self, request, response):
        self.calibration_event.wait()  # Wait until the calibration is ready

        with self.lock:
            avg_x = sum(self.gyro_values_x) / self.sample_size
            avg_y = sum(self.gyro_values_y) / self.sample_size
            avg_z = sum(self.gyro_values_z) / self.sample_size

            response.x = avg_x
            response.y = avg_y
            response.z = avg_z

            self.get_logger().info(f'Gyro calibration values: x={avg_x}, y={avg_y}, z={avg_z}')

            # Clear the collected values for the next calibration cycle
            self.gyro_values_x.clear()
            self.gyro_values_y.clear()
            self.gyro_values_z.clear()
            self.calibration_ready = False
            self.calibration_event.clear()

        return response

def main(args=None):
    rclpy.init(args=args)
    node = GyroCalibrationNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()