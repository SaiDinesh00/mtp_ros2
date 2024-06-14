// Copyright 2022-2023 The MathWorks, Inc.
// Generated 14-Jun-2024 05:25:54
#ifndef _SLROS2_INITIALIZE_H_
#define _SLROS2_INITIALIZE_H_
#include "ros2_imu_types.h"
// Generic pub-sub header
#include "slros2_generic_pubsub.h"
// Generic service header
#include "slros2_generic_service.h"
extern rclcpp::Node::SharedPtr SLROSNodePtr;
#ifndef SET_QOS_VALUES
#define SET_QOS_VALUES(qosStruct, hist, dep, dur, rel)  \
    {                                                   \
        qosStruct.history = hist;                       \
        qosStruct.depth = dep;                          \
        qosStruct.durability = dur;                     \
        qosStruct.reliability = rel;                    \
    }
#endif
inline rclcpp::QoS getQOSSettingsFromRMW(const rmw_qos_profile_t& qosProfile) {
    rclcpp::QoS qos(rclcpp::QoSInitialization::from_rmw(qosProfile));
    if (RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL == qosProfile.durability) {
        qos.transient_local();
    } else {
        qos.durability_volatile();
    }
    if (RMW_QOS_POLICY_RELIABILITY_RELIABLE == qosProfile.reliability) {
        qos.reliable();
    } else {
        qos.best_effort();
    }
    return qos;
}
// ros2_imu/Chart/controlling1/Publish
extern SimulinkPublisher<std_msgs::msg::Int64,SL_Bus_std_msgs_Int64> Pub_ros2_imu_41__183;
// ros2_imu/Chart1/controlling2/Publish
extern SimulinkPublisher<std_msgs::msg::Int64,SL_Bus_std_msgs_Int64> Pub_ros2_imu_119__185;
// ros2_imu/Sensor/Subscribe
extern SimulinkSubscriber<geometry_msgs::msg::Vector3,SL_Bus_geometry_msgs_Vector3> Sub_ros2_imu_107;
// ros2_imu/Sensor/Subscribe1
extern SimulinkSubscriber<geometry_msgs::msg::Vector3,SL_Bus_geometry_msgs_Vector3> Sub_ros2_imu_135;
// ros2_imu/Chart/killEsc1/Call Service
extern SimulinkServiceCaller<aerobot_interfaces::srv::EscSrv,SL_Bus_aerobot_interfaces_EscSrvRequest,SL_Bus_aerobot_interfaces_EscSrvResponse> ServCall_ros2_imu_41__215;
// ros2_imu/Chart/sendArmSignal1/Call Service
extern SimulinkServiceCaller<aerobot_interfaces::srv::EscSrv,SL_Bus_aerobot_interfaces_EscSrvRequest,SL_Bus_aerobot_interfaces_EscSrvResponse> ServCall_ros2_imu_41__324;
// ros2_imu/Chart1/killEsc2/Call Service
extern SimulinkServiceCaller<aerobot_interfaces::srv::EscSrv,SL_Bus_aerobot_interfaces_EscSrvRequest,SL_Bus_aerobot_interfaces_EscSrvResponse> ServCall_ros2_imu_119__126;
// ros2_imu/Chart1/sendArmSignal2/Call Service1
extern SimulinkServiceCaller<aerobot_interfaces::srv::EscSrv,SL_Bus_aerobot_interfaces_EscSrvRequest,SL_Bus_aerobot_interfaces_EscSrvResponse> ServCall_ros2_imu_119__135;
#endif
