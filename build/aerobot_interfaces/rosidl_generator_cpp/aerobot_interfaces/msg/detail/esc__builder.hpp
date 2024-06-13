// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aerobot_interfaces:msg/Esc.idl
// generated code does not contain a copyright notice

#ifndef AEROBOT_INTERFACES__MSG__DETAIL__ESC__BUILDER_HPP_
#define AEROBOT_INTERFACES__MSG__DETAIL__ESC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aerobot_interfaces/msg/detail/esc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aerobot_interfaces
{

namespace msg
{

namespace builder
{

class Init_Esc_pulse_width
{
public:
  explicit Init_Esc_pulse_width(::aerobot_interfaces::msg::Esc & msg)
  : msg_(msg)
  {}
  ::aerobot_interfaces::msg::Esc pulse_width(::aerobot_interfaces::msg::Esc::_pulse_width_type arg)
  {
    msg_.pulse_width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aerobot_interfaces::msg::Esc msg_;
};

class Init_Esc_pin_number
{
public:
  Init_Esc_pin_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Esc_pulse_width pin_number(::aerobot_interfaces::msg::Esc::_pin_number_type arg)
  {
    msg_.pin_number = std::move(arg);
    return Init_Esc_pulse_width(msg_);
  }

private:
  ::aerobot_interfaces::msg::Esc msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aerobot_interfaces::msg::Esc>()
{
  return aerobot_interfaces::msg::builder::Init_Esc_pin_number();
}

}  // namespace aerobot_interfaces

#endif  // AEROBOT_INTERFACES__MSG__DETAIL__ESC__BUILDER_HPP_
