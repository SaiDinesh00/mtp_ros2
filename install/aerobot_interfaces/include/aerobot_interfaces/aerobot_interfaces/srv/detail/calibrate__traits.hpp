// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aerobot_interfaces:srv/Calibrate.idl
// generated code does not contain a copyright notice

#ifndef AEROBOT_INTERFACES__SRV__DETAIL__CALIBRATE__TRAITS_HPP_
#define AEROBOT_INTERFACES__SRV__DETAIL__CALIBRATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aerobot_interfaces/srv/detail/calibrate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace aerobot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Calibrate_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: get_calibration_parameters
  {
    out << "get_calibration_parameters: ";
    rosidl_generator_traits::value_to_yaml(msg.get_calibration_parameters, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Calibrate_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: get_calibration_parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "get_calibration_parameters: ";
    rosidl_generator_traits::value_to_yaml(msg.get_calibration_parameters, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Calibrate_Request & msg, bool use_flow_style = false)
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
  const aerobot_interfaces::srv::Calibrate_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  aerobot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aerobot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const aerobot_interfaces::srv::Calibrate_Request & msg)
{
  return aerobot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aerobot_interfaces::srv::Calibrate_Request>()
{
  return "aerobot_interfaces::srv::Calibrate_Request";
}

template<>
inline const char * name<aerobot_interfaces::srv::Calibrate_Request>()
{
  return "aerobot_interfaces/srv/Calibrate_Request";
}

template<>
struct has_fixed_size<aerobot_interfaces::srv::Calibrate_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aerobot_interfaces::srv::Calibrate_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aerobot_interfaces::srv::Calibrate_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace aerobot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Calibrate_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Calibrate_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Calibrate_Response & msg, bool use_flow_style = false)
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
  const aerobot_interfaces::srv::Calibrate_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  aerobot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aerobot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const aerobot_interfaces::srv::Calibrate_Response & msg)
{
  return aerobot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<aerobot_interfaces::srv::Calibrate_Response>()
{
  return "aerobot_interfaces::srv::Calibrate_Response";
}

template<>
inline const char * name<aerobot_interfaces::srv::Calibrate_Response>()
{
  return "aerobot_interfaces/srv/Calibrate_Response";
}

template<>
struct has_fixed_size<aerobot_interfaces::srv::Calibrate_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<aerobot_interfaces::srv::Calibrate_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<aerobot_interfaces::srv::Calibrate_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<aerobot_interfaces::srv::Calibrate>()
{
  return "aerobot_interfaces::srv::Calibrate";
}

template<>
inline const char * name<aerobot_interfaces::srv::Calibrate>()
{
  return "aerobot_interfaces/srv/Calibrate";
}

template<>
struct has_fixed_size<aerobot_interfaces::srv::Calibrate>
  : std::integral_constant<
    bool,
    has_fixed_size<aerobot_interfaces::srv::Calibrate_Request>::value &&
    has_fixed_size<aerobot_interfaces::srv::Calibrate_Response>::value
  >
{
};

template<>
struct has_bounded_size<aerobot_interfaces::srv::Calibrate>
  : std::integral_constant<
    bool,
    has_bounded_size<aerobot_interfaces::srv::Calibrate_Request>::value &&
    has_bounded_size<aerobot_interfaces::srv::Calibrate_Response>::value
  >
{
};

template<>
struct is_service<aerobot_interfaces::srv::Calibrate>
  : std::true_type
{
};

template<>
struct is_service_request<aerobot_interfaces::srv::Calibrate_Request>
  : std::true_type
{
};

template<>
struct is_service_response<aerobot_interfaces::srv::Calibrate_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AEROBOT_INTERFACES__SRV__DETAIL__CALIBRATE__TRAITS_HPP_
