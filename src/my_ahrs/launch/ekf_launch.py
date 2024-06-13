import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument(
            'imu_topic',
            default_value='/imu/data',
            description='Topic name for IMU data'
        ),
        DeclareLaunchArgument(
            'mag_topic',
            default_value='/mag/data',
            description='Topic name for Magnetometer data'
        ),
        Node(
            package='lsm6dso',
            executable='lsm6dso',
            name='imu_node',
            output='screen'
        ),
        Node(
            package='bmm150_sensor',
            executable='bmm150',
            name='mag_node',
            output='screen'
        ),
        Node(
            package='my_ahrs',
            executable='ekf_node',
            name='ekf_node',
            output='screen',
            parameters=[
                {'imu_topic': LaunchConfiguration('imu_topic')},
                {'mag_topic': LaunchConfiguration('mag_topic')}
            ]
        ),
    ])
