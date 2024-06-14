#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include "rclcpp/rclcpp.hpp"
#include <aerobot_interfaces/srv/esc_srv.hpp>
#include <aerobot_interfaces/srv/esc_srv.hpp>
#include <geometry_msgs/msg/vector3.hpp>
#include <std_msgs/msg/int64.hpp>
#include "ros2_imu_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(aerobot_interfaces::srv::EscSrv::Request& msgPtr, SL_Bus_aerobot_interfaces_EscSrvRequest const* busPtr);
void convertToBus(SL_Bus_aerobot_interfaces_EscSrvRequest* busPtr, const aerobot_interfaces::srv::EscSrv::Request& msgPtr);

void convertFromBus(aerobot_interfaces::srv::EscSrv::Response& msgPtr, SL_Bus_aerobot_interfaces_EscSrvResponse const* busPtr);
void convertToBus(SL_Bus_aerobot_interfaces_EscSrvResponse* busPtr, const aerobot_interfaces::srv::EscSrv::Response& msgPtr);

void convertFromBus(geometry_msgs::msg::Vector3& msgPtr, SL_Bus_geometry_msgs_Vector3 const* busPtr);
void convertToBus(SL_Bus_geometry_msgs_Vector3* busPtr, const geometry_msgs::msg::Vector3& msgPtr);

void convertFromBus(std_msgs::msg::Int64& msgPtr, SL_Bus_std_msgs_Int64 const* busPtr);
void convertToBus(SL_Bus_std_msgs_Int64* busPtr, const std_msgs::msg::Int64& msgPtr);


#endif
