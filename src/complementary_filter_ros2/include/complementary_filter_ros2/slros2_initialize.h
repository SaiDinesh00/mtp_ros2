// Copyright 2022-2023 The MathWorks, Inc.
// Generated 17-Jun-2024 12:49:16
#ifndef _SLROS2_INITIALIZE_H_
#define _SLROS2_INITIALIZE_H_
#include "complementary_filter_ros2_types.h"
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
// complementary_filter_ros2/Chart/controlling1/Publish
extern SimulinkPublisher<std_msgs::msg::Int64,SL_Bus_std_msgs_Int64> Pub_complementary_filter_ros2_134__183;
// complementary_filter_ros2/Chart1/controlling2/Publish
extern SimulinkPublisher<std_msgs::msg::Int64,SL_Bus_std_msgs_Int64> Pub_complementary_filter_ros2_135__185;
// complementary_filter_ros2/Subscribe
extern SimulinkSubscriber<sensor_msgs::msg::Imu,SL_Bus_sensor_msgs_Imu> Sub_complementary_filter_ros2_2;
// complementary_filter_ros2/Subscribe1
extern SimulinkSubscriber<sensor_msgs::msg::MagneticField,SL_Bus_sensor_msgs_MagneticField> Sub_complementary_filter_ros2_16;
// complementary_filter_ros2/Chart/killEsc1/Call Service
extern SimulinkServiceCaller<aerobot_interfaces::srv::EscSrv,SL_Bus_aerobot_interfaces_EscSrvRequest,SL_Bus_aerobot_interfaces_EscSrvResponse> ServCall_complementary_filter_ros2_134__215;
// complementary_filter_ros2/Chart/sendArmSignal1/Call Service
extern SimulinkServiceCaller<aerobot_interfaces::srv::EscSrv,SL_Bus_aerobot_interfaces_EscSrvRequest,SL_Bus_aerobot_interfaces_EscSrvResponse> ServCall_complementary_filter_ros2_134__324;
// complementary_filter_ros2/Chart1/killEsc2/Call Service
extern SimulinkServiceCaller<aerobot_interfaces::srv::EscSrv,SL_Bus_aerobot_interfaces_EscSrvRequest,SL_Bus_aerobot_interfaces_EscSrvResponse> ServCall_complementary_filter_ros2_135__126;
// complementary_filter_ros2/Chart1/sendArmSignal2/Call Service1
extern SimulinkServiceCaller<aerobot_interfaces::srv::EscSrv,SL_Bus_aerobot_interfaces_EscSrvRequest,SL_Bus_aerobot_interfaces_EscSrvResponse> ServCall_complementary_filter_ros2_135__135;
#endif
