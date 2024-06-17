#include "slros_busmsg_conversion.h"


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


// Conversions between SL_Bus_builtin_interfaces_Time and builtin_interfaces::msg::Time

void convertFromBus(builtin_interfaces::msg::Time& msgPtr, SL_Bus_builtin_interfaces_Time const* busPtr)
{
  const std::string rosMessageType("builtin_interfaces/Time");

  msgPtr.nanosec =  busPtr->nanosec;
  msgPtr.sec =  busPtr->sec;
}

void convertToBus(SL_Bus_builtin_interfaces_Time* busPtr, const builtin_interfaces::msg::Time& msgPtr)
{
  const std::string rosMessageType("builtin_interfaces/Time");

  busPtr->nanosec =  msgPtr.nanosec;
  busPtr->sec =  msgPtr.sec;
}


// Conversions between SL_Bus_geometry_msgs_Quaternion and geometry_msgs::msg::Quaternion

void convertFromBus(geometry_msgs::msg::Quaternion& msgPtr, SL_Bus_geometry_msgs_Quaternion const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Quaternion");

  msgPtr.w =  busPtr->w;
  msgPtr.x =  busPtr->x;
  msgPtr.y =  busPtr->y;
  msgPtr.z =  busPtr->z;
}

void convertToBus(SL_Bus_geometry_msgs_Quaternion* busPtr, const geometry_msgs::msg::Quaternion& msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Quaternion");

  busPtr->w =  msgPtr.w;
  busPtr->x =  msgPtr.x;
  busPtr->y =  msgPtr.y;
  busPtr->z =  msgPtr.z;
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


// Conversions between SL_Bus_sensor_msgs_Imu and sensor_msgs::msg::Imu

void convertFromBus(sensor_msgs::msg::Imu& msgPtr, SL_Bus_sensor_msgs_Imu const* busPtr)
{
  const std::string rosMessageType("sensor_msgs/Imu");

  convertFromBus(msgPtr.angular_velocity, &busPtr->angular_velocity);
  convertFromBusFixedPrimitiveArray(msgPtr.angular_velocity_covariance, busPtr->angular_velocity_covariance);
  convertFromBus(msgPtr.header, &busPtr->header);
  convertFromBus(msgPtr.linear_acceleration, &busPtr->linear_acceleration);
  convertFromBusFixedPrimitiveArray(msgPtr.linear_acceleration_covariance, busPtr->linear_acceleration_covariance);
  convertFromBus(msgPtr.orientation, &busPtr->orientation);
  convertFromBusFixedPrimitiveArray(msgPtr.orientation_covariance, busPtr->orientation_covariance);
}

void convertToBus(SL_Bus_sensor_msgs_Imu* busPtr, const sensor_msgs::msg::Imu& msgPtr)
{
  const std::string rosMessageType("sensor_msgs/Imu");

  convertToBus(&busPtr->angular_velocity, msgPtr.angular_velocity);
  convertToBusFixedPrimitiveArray(busPtr->angular_velocity_covariance, msgPtr.angular_velocity_covariance, slros::NoopWarning());
  convertToBus(&busPtr->header, msgPtr.header);
  convertToBus(&busPtr->linear_acceleration, msgPtr.linear_acceleration);
  convertToBusFixedPrimitiveArray(busPtr->linear_acceleration_covariance, msgPtr.linear_acceleration_covariance, slros::NoopWarning());
  convertToBus(&busPtr->orientation, msgPtr.orientation);
  convertToBusFixedPrimitiveArray(busPtr->orientation_covariance, msgPtr.orientation_covariance, slros::NoopWarning());
}


// Conversions between SL_Bus_sensor_msgs_MagneticField and sensor_msgs::msg::MagneticField

void convertFromBus(sensor_msgs::msg::MagneticField& msgPtr, SL_Bus_sensor_msgs_MagneticField const* busPtr)
{
  const std::string rosMessageType("sensor_msgs/MagneticField");

  convertFromBus(msgPtr.header, &busPtr->header);
  convertFromBus(msgPtr.magnetic_field, &busPtr->magnetic_field);
  convertFromBusFixedPrimitiveArray(msgPtr.magnetic_field_covariance, busPtr->magnetic_field_covariance);
}

void convertToBus(SL_Bus_sensor_msgs_MagneticField* busPtr, const sensor_msgs::msg::MagneticField& msgPtr)
{
  const std::string rosMessageType("sensor_msgs/MagneticField");

  convertToBus(&busPtr->header, msgPtr.header);
  convertToBus(&busPtr->magnetic_field, msgPtr.magnetic_field);
  convertToBusFixedPrimitiveArray(busPtr->magnetic_field_covariance, msgPtr.magnetic_field_covariance, slros::NoopWarning());
}


// Conversions between SL_Bus_std_msgs_Header and std_msgs::msg::Header

void convertFromBus(std_msgs::msg::Header& msgPtr, SL_Bus_std_msgs_Header const* busPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertFromBusVariablePrimitiveArray(msgPtr.frame_id, busPtr->frame_id, busPtr->frame_id_SL_Info);
  convertFromBus(msgPtr.stamp, &busPtr->stamp);
}

void convertToBus(SL_Bus_std_msgs_Header* busPtr, const std_msgs::msg::Header& msgPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertToBusVariablePrimitiveArray(busPtr->frame_id, busPtr->frame_id_SL_Info, msgPtr.frame_id, slros::EnabledWarning(rosMessageType, "frame_id"));
  convertToBus(&busPtr->stamp, msgPtr.stamp);
}


// Conversions between SL_Bus_std_msgs_Int64 and std_msgs::msg::Int64

void convertFromBus(std_msgs::msg::Int64& msgPtr, SL_Bus_std_msgs_Int64 const* busPtr)
{
  const std::string rosMessageType("std_msgs/Int64");

  msgPtr.data = (int64_t) busPtr->data;
}

void convertToBus(SL_Bus_std_msgs_Int64* busPtr, const std_msgs::msg::Int64& msgPtr)
{
  const std::string rosMessageType("std_msgs/Int64");

  busPtr->data = (real_T) msgPtr.data;
}

