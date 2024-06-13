#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_aerobot_interfaces_EscMsg and aerobot_interfaces::msg::EscMsg

void convertFromBus(aerobot_interfaces::msg::EscMsg& msgPtr, SL_Bus_aerobot_interfaces_EscMsg const* busPtr)
{
  const std::string rosMessageType("aerobot_interfaces/EscMsg");

  msgPtr.pin_number =  busPtr->pin_number;
  msgPtr.pulse_width = (int64_t) busPtr->pulse_width;
}

void convertToBus(SL_Bus_aerobot_interfaces_EscMsg* busPtr, const aerobot_interfaces::msg::EscMsg& msgPtr)
{
  const std::string rosMessageType("aerobot_interfaces/EscMsg");

  busPtr->pin_number =  msgPtr.pin_number;
  busPtr->pulse_width = (real_T) msgPtr.pulse_width;
}


// Conversions between SL_Bus_aerobot_interfaces_EscSrvRequest and aerobot_interfaces::srv::EscSrv::Request

void convertFromBus(aerobot_interfaces::srv::EscSrv::Request& msgPtr, SL_Bus_aerobot_interfaces_EscSrvRequest const* busPtr)
{
  const std::string rosMessageType("aerobot_interfaces/EscSrvRequest");

  msgPtr.pin_number =  busPtr->pin_number;
  msgPtr.state =  busPtr->state;
}

void convertToBus(SL_Bus_aerobot_interfaces_EscSrvRequest* busPtr, const aerobot_interfaces::srv::EscSrv::Request& msgPtr)
{
  const std::string rosMessageType("aerobot_interfaces/EscSrvRequest");

  busPtr->pin_number =  msgPtr.pin_number;
  busPtr->state =  msgPtr.state;
}


// Conversions between SL_Bus_aerobot_interfaces_EscSrvResponse and aerobot_interfaces::srv::EscSrv::Response

void convertFromBus(aerobot_interfaces::srv::EscSrv::Response& msgPtr, SL_Bus_aerobot_interfaces_EscSrvResponse const* busPtr)
{
  const std::string rosMessageType("aerobot_interfaces/EscSrvResponse");

  msgPtr.success =  busPtr->success;
}

void convertToBus(SL_Bus_aerobot_interfaces_EscSrvResponse* busPtr, const aerobot_interfaces::srv::EscSrv::Response& msgPtr)
{
  const std::string rosMessageType("aerobot_interfaces/EscSrvResponse");

  busPtr->success =  msgPtr.success;
}


// Conversions between SL_Bus_geometry_msgs_Vector3 and geometry_msgs::msg::Vector3

void convertFromBus(geometry_msgs::msg::Vector3& msgPtr, SL_Bus_geometry_msgs_Vector3 const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Vector3");

  msgPtr.x =  busPtr->x;
  msgPtr.y =  busPtr->y;
  msgPtr.z =  busPtr->z;
}

void convertToBus(SL_Bus_geometry_msgs_Vector3* busPtr, const geometry_msgs::msg::Vector3& msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Vector3");

  busPtr->x =  msgPtr.x;
  busPtr->y =  msgPtr.y;
  busPtr->z =  msgPtr.z;
}

