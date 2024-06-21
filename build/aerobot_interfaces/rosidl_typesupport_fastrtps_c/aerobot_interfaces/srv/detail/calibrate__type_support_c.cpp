// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from aerobot_interfaces:srv/Calibrate.idl
// generated code does not contain a copyright notice
#include "aerobot_interfaces/srv/detail/calibrate__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "aerobot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aerobot_interfaces/srv/detail/calibrate__struct.h"
#include "aerobot_interfaces/srv/detail/calibrate__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Calibrate_Request__ros_msg_type = aerobot_interfaces__srv__Calibrate_Request;

static bool _Calibrate_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Calibrate_Request__ros_msg_type * ros_message = static_cast<const _Calibrate_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: get_calibration_parameters
  {
    cdr << (ros_message->get_calibration_parameters ? true : false);
  }

  return true;
}

static bool _Calibrate_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Calibrate_Request__ros_msg_type * ros_message = static_cast<_Calibrate_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: get_calibration_parameters
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->get_calibration_parameters = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aerobot_interfaces
size_t get_serialized_size_aerobot_interfaces__srv__Calibrate_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Calibrate_Request__ros_msg_type * ros_message = static_cast<const _Calibrate_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name get_calibration_parameters
  {
    size_t item_size = sizeof(ros_message->get_calibration_parameters);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Calibrate_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aerobot_interfaces__srv__Calibrate_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aerobot_interfaces
size_t max_serialized_size_aerobot_interfaces__srv__Calibrate_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: get_calibration_parameters
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = aerobot_interfaces__srv__Calibrate_Request;
    is_plain =
      (
      offsetof(DataType, get_calibration_parameters) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Calibrate_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_aerobot_interfaces__srv__Calibrate_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Calibrate_Request = {
  "aerobot_interfaces::srv",
  "Calibrate_Request",
  _Calibrate_Request__cdr_serialize,
  _Calibrate_Request__cdr_deserialize,
  _Calibrate_Request__get_serialized_size,
  _Calibrate_Request__max_serialized_size
};

static rosidl_message_type_support_t _Calibrate_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Calibrate_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aerobot_interfaces, srv, Calibrate_Request)() {
  return &_Calibrate_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "aerobot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "aerobot_interfaces/srv/detail/calibrate__struct.h"
// already included above
// #include "aerobot_interfaces/srv/detail/calibrate__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Calibrate_Response__ros_msg_type = aerobot_interfaces__srv__Calibrate_Response;

static bool _Calibrate_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Calibrate_Response__ros_msg_type * ros_message = static_cast<const _Calibrate_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: z
  {
    cdr << ros_message->z;
  }

  return true;
}

static bool _Calibrate_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Calibrate_Response__ros_msg_type * ros_message = static_cast<_Calibrate_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  // Field name: z
  {
    cdr >> ros_message->z;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aerobot_interfaces
size_t get_serialized_size_aerobot_interfaces__srv__Calibrate_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Calibrate_Response__ros_msg_type * ros_message = static_cast<const _Calibrate_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z
  {
    size_t item_size = sizeof(ros_message->z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Calibrate_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_aerobot_interfaces__srv__Calibrate_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_aerobot_interfaces
size_t max_serialized_size_aerobot_interfaces__srv__Calibrate_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = aerobot_interfaces__srv__Calibrate_Response;
    is_plain =
      (
      offsetof(DataType, z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Calibrate_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_aerobot_interfaces__srv__Calibrate_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Calibrate_Response = {
  "aerobot_interfaces::srv",
  "Calibrate_Response",
  _Calibrate_Response__cdr_serialize,
  _Calibrate_Response__cdr_deserialize,
  _Calibrate_Response__get_serialized_size,
  _Calibrate_Response__max_serialized_size
};

static rosidl_message_type_support_t _Calibrate_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Calibrate_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aerobot_interfaces, srv, Calibrate_Response)() {
  return &_Calibrate_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "aerobot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "aerobot_interfaces/srv/calibrate.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Calibrate__callbacks = {
  "aerobot_interfaces::srv",
  "Calibrate",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aerobot_interfaces, srv, Calibrate_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aerobot_interfaces, srv, Calibrate_Response)(),
};

static rosidl_service_type_support_t Calibrate__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Calibrate__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, aerobot_interfaces, srv, Calibrate)() {
  return &Calibrate__handle;
}

#if defined(__cplusplus)
}
#endif
