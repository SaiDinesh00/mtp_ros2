// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aerobot_interfaces:srv/EscSrv.idl
// generated code does not contain a copyright notice

#ifndef AEROBOT_INTERFACES__SRV__DETAIL__ESC_SRV__BUILDER_HPP_
#define AEROBOT_INTERFACES__SRV__DETAIL__ESC_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aerobot_interfaces/srv/detail/esc_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aerobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_EscSrv_Request_state
{
public:
  explicit Init_EscSrv_Request_state(::aerobot_interfaces::srv::EscSrv_Request & msg)
  : msg_(msg)
  {}
  ::aerobot_interfaces::srv::EscSrv_Request state(::aerobot_interfaces::srv::EscSrv_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aerobot_interfaces::srv::EscSrv_Request msg_;
};

class Init_EscSrv_Request_pin_number
{
public:
  Init_EscSrv_Request_pin_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EscSrv_Request_state pin_number(::aerobot_interfaces::srv::EscSrv_Request::_pin_number_type arg)
  {
    msg_.pin_number = std::move(arg);
    return Init_EscSrv_Request_state(msg_);
  }

private:
  ::aerobot_interfaces::srv::EscSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aerobot_interfaces::srv::EscSrv_Request>()
{
  return aerobot_interfaces::srv::builder::Init_EscSrv_Request_pin_number();
}

}  // namespace aerobot_interfaces


namespace aerobot_interfaces
{

namespace srv
{

namespace builder
{

class Init_EscSrv_Response_success
{
public:
  Init_EscSrv_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aerobot_interfaces::srv::EscSrv_Response success(::aerobot_interfaces::srv::EscSrv_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aerobot_interfaces::srv::EscSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::aerobot_interfaces::srv::EscSrv_Response>()
{
  return aerobot_interfaces::srv::builder::Init_EscSrv_Response_success();
}

}  // namespace aerobot_interfaces

#endif  // AEROBOT_INTERFACES__SRV__DETAIL__ESC_SRV__BUILDER_HPP_
