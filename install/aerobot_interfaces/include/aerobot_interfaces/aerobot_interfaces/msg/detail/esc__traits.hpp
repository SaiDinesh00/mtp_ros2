// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aerobot_interfaces:msg/Esc.idl
// generated code does not contain a copyright notice

#ifndef AEROBOT_INTERFACES__MSG__DETAIL__ESC__TRAITS_HPP_
#define AEROBOT_INTERFACES__MSG__DETAIL__ESC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aerobot_interfaces/msg/detail/esc__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aerobot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Esc & msg,
  std::ostream & out)
{
  out << "{";
  // member: pin_number
  {
    out << "pin_number: ";
    rosidl_generator_traits::value_to_yaml(msg.pin_number, out);
    out << ", ";
  }

  // member: pulse_width
  {
    out << "pulse_width: ";
    rosidl_generator_traits::value_to_yaml(msg.pulse_width, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Esc & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pin_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pin_number: ";
    rosidl_generator_traits::value_to_yaml(msg.pin_number, out);
    out << "\n";
  }

  // member: pulse_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pulse_width: ";
    rosidl_generator_traits::value_to_yaml(msg.pulse_width, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Esc & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace aerobot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use aerobot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aerobot_interfaces::msg::Esc & msg,
  std::ostream & out, size_t indentation = 0)
{
  aerobot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aerobot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const aerobot_interfaces::msg::Esc & msg)
{
  return aerobot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aerobot_interfaces::msg::Esc>()
{
  return "aerobot_interfaces::msg::Esc";
}

template<>
inline const char * name<aerobot_interfaces::msg::Esc>()
{
  return "aerobot_interfaces/msg/Esc";
}

template<>
struct has_fixed_size<aerobot_interfaces::msg::Esc>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aerobot_interfaces::msg::Esc>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aerobot_interfaces::msg::Esc>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AEROBOT_INTERFACES__MSG__DETAIL__ESC__TRAITS_HPP_
