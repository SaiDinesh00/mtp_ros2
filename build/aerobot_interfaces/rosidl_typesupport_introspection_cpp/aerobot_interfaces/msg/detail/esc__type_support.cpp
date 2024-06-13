// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aerobot_interfaces:msg/Esc.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aerobot_interfaces/msg/detail/esc__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aerobot_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Esc_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aerobot_interfaces::msg::Esc(_init);
}

void Esc_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aerobot_interfaces::msg::Esc *>(message_memory);
  typed_message->~Esc();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Esc_message_member_array[2] = {
  {
    "pin_number",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobot_interfaces::msg::Esc, pin_number),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pulse_width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobot_interfaces::msg::Esc, pulse_width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Esc_message_members = {
  "aerobot_interfaces::msg",  // message namespace
  "Esc",  // message name
  2,  // number of fields
  sizeof(aerobot_interfaces::msg::Esc),
  Esc_message_member_array,  // message members
  Esc_init_function,  // function to initialize message memory (memory has to be allocated)
  Esc_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Esc_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Esc_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace aerobot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aerobot_interfaces::msg::Esc>()
{
  return &::aerobot_interfaces::msg::rosidl_typesupport_introspection_cpp::Esc_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aerobot_interfaces, msg, Esc)() {
  return &::aerobot_interfaces::msg::rosidl_typesupport_introspection_cpp::Esc_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
