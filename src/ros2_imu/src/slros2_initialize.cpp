// Copyright 2022-2023 The MathWorks, Inc.
// Generated 16-Jun-2024 23:12:07
#include "slros2_initialize.h"
// ros2_imu/Chart/controlling1/Publish
SimulinkPublisher<std_msgs::msg::Int64,SL_Bus_std_msgs_Int64> Pub_ros2_imu_41__183;
// ros2_imu/Chart1/controlling2/Publish
SimulinkPublisher<std_msgs::msg::Int64,SL_Bus_std_msgs_Int64> Pub_ros2_imu_119__185;
// ros2_imu/Sensor/Subscribe
SimulinkSubscriber<sensor_msgs::msg::Imu,SL_Bus_sensor_msgs_Imu> Sub_ros2_imu_162;
// ros2_imu/Sensor/Subscribe1
SimulinkSubscriber<sensor_msgs::msg::MagneticField,SL_Bus_sensor_msgs_MagneticField> Sub_ros2_imu_163;
// ros2_imu/Chart/killEsc1/Call Service
SimulinkServiceCaller<aerobot_interfaces::srv::EscSrv,SL_Bus_aerobot_interfaces_EscSrvRequest,SL_Bus_aerobot_interfaces_EscSrvResponse> ServCall_ros2_imu_41__215;
// ros2_imu/Chart/sendArmSignal1/Call Service
SimulinkServiceCaller<aerobot_interfaces::srv::EscSrv,SL_Bus_aerobot_interfaces_EscSrvRequest,SL_Bus_aerobot_interfaces_EscSrvResponse> ServCall_ros2_imu_41__324;
// ros2_imu/Chart1/killEsc2/Call Service
SimulinkServiceCaller<aerobot_interfaces::srv::EscSrv,SL_Bus_aerobot_interfaces_EscSrvRequest,SL_Bus_aerobot_interfaces_EscSrvResponse> ServCall_ros2_imu_119__126;
// ros2_imu/Chart1/sendArmSignal2/Call Service1
SimulinkServiceCaller<aerobot_interfaces::srv::EscSrv,SL_Bus_aerobot_interfaces_EscSrvRequest,SL_Bus_aerobot_interfaces_EscSrvResponse> ServCall_ros2_imu_119__135;
