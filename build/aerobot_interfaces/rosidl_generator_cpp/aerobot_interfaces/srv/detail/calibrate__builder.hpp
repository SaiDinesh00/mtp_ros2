// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aerobot_interfaces:srv/Calibrate.idl
// generated code does not contain a copyright notice

#ifndef AEROBOT_INTERFACES__SRV__DETAIL__CALIBRATE__BUILDER_HPP_
#define AEROBOT_INTERFACES__SRV__DETAIL__CALIBRATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aerobot_interfaces/srv/detail/calibrate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aerobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_Calibrate_Request_get_calibration_parameters
{
public:
  Init_Calibrate_Request_get_calibration_parameters()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aerobot_interfaces::srv::Calibrate_Request get_calibration_parameters(::aerobot_interfaces::srv::Calibrate_Request::_get_calibration_parameters_type arg)
  {
    msg_.get_calibration_parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aerobot_interfaces::srv::Calibrate_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aerobot_interfaces::srv::Calibrate_Request>()
{
  return aerobot_interfaces::srv::builder::Init_Calibrate_Request_get_calibration_parameters();
}

}  // namespace aerobot_interfaces


namespace aerobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_Calibrate_Response_z
{
public:
  explicit Init_Calibrate_Response_z(::aerobot_interfaces::srv::Calibrate_Response & msg)
  : msg_(msg)
  {}
  ::aerobot_interfaces::srv::Calibrate_Response z(::aerobot_interfaces::srv::Calibrate_Response::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aerobot_interfaces::srv::Calibrate_Response msg_;
};

class Init_Calibrate_Response_y
{
public:
  explicit Init_Calibrate_Response_y(::aerobot_interfaces::srv::Calibrate_Response & msg)
  : msg_(msg)
  {}
  Init_Calibrate_Response_z y(::aerobot_interfaces::srv::Calibrate_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Calibrate_Response_z(msg_);
  }

private:
  ::aerobot_interfaces::srv::Calibrate_Response msg_;
};

class Init_Calibrate_Response_x
{
public:
  Init_Calibrate_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Calibrate_Response_y x(::aerobot_interfaces::srv::Calibrate_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Calibrate_Response_y(msg_);
  }

private:
  ::aerobot_interfaces::srv::Calibrate_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aerobot_interfaces::srv::Calibrate_Response>()
{
  return aerobot_interfaces::srv::builder::Init_Calibrate_Response_x();
}

}  // namespace aerobot_interfaces

#endif  // AEROBOT_INTERFACES__SRV__DETAIL__CALIBRATE__BUILDER_HPP_
