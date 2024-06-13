// Copyright 2022-2023 The MathWorks, Inc.
// Generated 13-Jun-2024 16:25:16
#include "slros2_initialize.h"
// ros2_imu/Chart/controlling1/Publish
SimulinkPublisher<aerobot_interfaces::msg::EscMsg,SL_Bus_aerobot_interfaces_EscMsg> Pub_ros2_imu_41__183;
// ros2_imu/Chart1/controlling2/Publish1
SimulinkPublisher<aerobot_interfaces::msg::EscMsg,SL_Bus_aerobot_interfaces_EscMsg> Pub_ros2_imu_119__120;
// ros2_imu/Sensor/Subscribe
SimulinkSubscriber<geometry_msgs::msg::Vector3,SL_Bus_geometry_msgs_Vector3> Sub_ros2_imu_107;
// ros2_imu/Chart/killEsc1/Call Service
SimulinkServiceCaller<aerobot_interfaces::srv::EscSrv,SL_Bus_aerobot_interfaces_EscSrvRequest,SL_Bus_aerobot_interfaces_EscSrvResponse> ServCall_ros2_imu_41__215;
// ros2_imu/Chart/sendArmSignal1/Call Service
SimulinkServiceCaller<aerobot_interfaces::srv::EscSrv,SL_Bus_aerobot_interfaces_EscSrvRequest,SL_Bus_aerobot_interfaces_EscSrvResponse> ServCall_ros2_imu_41__324;
// ros2_imu/Chart1/killEsc2/Call Service
SimulinkServiceCaller<aerobot_interfaces::srv::EscSrv,SL_Bus_aerobot_interfaces_EscSrvRequest,SL_Bus_aerobot_interfaces_EscSrvResponse> ServCall_ros2_imu_119__126;
// ros2_imu/Chart1/sendArmSignal2/Call Service1
SimulinkServiceCaller<aerobot_interfaces::srv::EscSrv,SL_Bus_aerobot_interfaces_EscSrvRequest,SL_Bus_aerobot_interfaces_EscSrvResponse> ServCall_ros2_imu_119__135;
