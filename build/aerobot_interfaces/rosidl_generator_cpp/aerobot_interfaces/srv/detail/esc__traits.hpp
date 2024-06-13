// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aerobot_interfaces:srv/Esc.idl
// generated code does not contain a copyright notice

#ifndef AEROBOT_INTERFACES__SRV__DETAIL__ESC__TRAITS_HPP_
#define AEROBOT_INTERFACES__SRV__DETAIL__ESC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aerobot_interfaces/srv/detail/esc__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aerobot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Esc_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: pin_number
  {
    out << "pin_number: ";
    rosidl_generator_traits::value_to_yaml(msg.pin_number, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Esc_Request & msg,
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

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Esc_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace aerobot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use aerobot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aerobot_interfaces::srv::Esc_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aerobot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aerobot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const aerobot_interfaces::srv::Esc_Request & msg)
{
  return aerobot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aerobot_interfaces::srv::Esc_Request>()
{
  return "aerobot_interfaces::srv::Esc_Request";
}

template<>
inline const char * name<aerobot_interfaces::srv::Esc_Request>()
{
  return "aerobot_interfaces/srv/Esc_Request";
}

template<>
struct has_fixed_size<aerobot_interfaces::srv::Esc_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aerobot_interfaces::srv::Esc_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aerobot_interfaces::srv::Esc_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace aerobot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Esc_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Esc_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Esc_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace aerobot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use aerobot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aerobot_interfaces::srv::Esc_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aerobot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aerobot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const aerobot_interfaces::srv::Esc_Response & msg)
{
  return aerobot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aerobot_interfaces::srv::Esc_Response>()
{
  return "aerobot_interfaces::srv::Esc_Response";
}

template<>
inline const char * name<aerobot_interfaces::srv::Esc_Response>()
{
  return "aerobot_interfaces/srv/Esc_Response";
}

template<>
struct has_fixed_size<aerobot_interfaces::srv::Esc_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aerobot_interfaces::srv::Esc_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aerobot_interfaces::srv::Esc_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aerobot_interfaces::srv::Esc>()
{
  return "aerobot_interfaces::srv::Esc";
}

template<>
inline const char * name<aerobot_interfaces::srv::Esc>()
{
  return "aerobot_interfaces/srv/Esc";
}

template<>
struct has_fixed_size<aerobot_interfaces::srv::Esc>
  : std::integral_constant<
    bool,
    has_fixed_size<aerobot_interfaces::srv::Esc_Request>::value &&
    has_fixed_size<aerobot_interfaces::srv::Esc_Response>::value
  >
{
};

template<>
struct has_bounded_size<aerobot_interfaces::srv::Esc>
  : std::integral_constant<
    bool,
    has_bounded_size<aerobot_interfaces::srv::Esc_Request>::value &&
    has_bounded_size<aerobot_interfaces::srv::Esc_Response>::value
  >
{
};

template<>
struct is_service<aerobot_interfaces::srv::Esc>
  : std::true_type
{
};

template<>
struct is_service_request<aerobot_interfaces::srv::Esc_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aerobot_interfaces::srv::Esc_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AEROBOT_INTERFACES__SRV__DETAIL__ESC__TRAITS_HPP_
