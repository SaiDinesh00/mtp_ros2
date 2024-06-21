// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aerobot_interfaces:srv/Calibrate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aerobot_interfaces/srv/detail/calibrate__rosidl_typesupport_introspection_c.h"
#include "aerobot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aerobot_interfaces/srv/detail/calibrate__functions.h"
#include "aerobot_interfaces/srv/detail/calibrate__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void aerobot_interfaces__srv__Calibrate_Request__rosidl_typesupport_introspection_c__Calibrate_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aerobot_interfaces__srv__Calibrate_Request__init(message_memory);
}

void aerobot_interfaces__srv__Calibrate_Request__rosidl_typesupport_introspection_c__Calibrate_Request_fini_function(void * message_memory)
{
  aerobot_interfaces__srv__Calibrate_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aerobot_interfaces__srv__Calibrate_Request__rosidl_typesupport_introspection_c__Calibrate_Request_message_member_array[1] = {
  {
    "get_calibration_parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobot_interfaces__srv__Calibrate_Request, get_calibration_parameters),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aerobot_interfaces__srv__Calibrate_Request__rosidl_typesupport_introspection_c__Calibrate_Request_message_members = {
  "aerobot_interfaces__srv",  // message namespace
  "Calibrate_Request",  // message name
  1,  // number of fields
  sizeof(aerobot_interfaces__srv__Calibrate_Request),
  aerobot_interfaces__srv__Calibrate_Request__rosidl_typesupport_introspection_c__Calibrate_Request_message_member_array,  // message members
  aerobot_interfaces__srv__Calibrate_Request__rosidl_typesupport_introspection_c__Calibrate_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  aerobot_interfaces__srv__Calibrate_Request__rosidl_typesupport_introspection_c__Calibrate_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aerobot_interfaces__srv__Calibrate_Request__rosidl_typesupport_introspection_c__Calibrate_Request_message_type_support_handle = {
  0,
  &aerobot_interfaces__srv__Calibrate_Request__rosidl_typesupport_introspection_c__Calibrate_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aerobot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobot_interfaces, srv, Calibrate_Request)() {
  if (!aerobot_interfaces__srv__Calibrate_Request__rosidl_typesupport_introspection_c__Calibrate_Request_message_type_support_handle.typesupport_identifier) {
    aerobot_interfaces__srv__Calibrate_Request__rosidl_typesupport_introspection_c__Calibrate_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aerobot_interfaces__srv__Calibrate_Request__rosidl_typesupport_introspection_c__Calibrate_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "aerobot_interfaces/srv/detail/calibrate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "aerobot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "aerobot_interfaces/srv/detail/calibrate__functions.h"
// already included above
// #include "aerobot_interfaces/srv/detail/calibrate__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void aerobot_interfaces__srv__Calibrate_Response__rosidl_typesupport_introspection_c__Calibrate_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aerobot_interfaces__srv__Calibrate_Response__init(message_memory);
}

void aerobot_interfaces__srv__Calibrate_Response__rosidl_typesupport_introspection_c__Calibrate_Response_fini_function(void * message_memory)
{
  aerobot_interfaces__srv__Calibrate_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aerobot_interfaces__srv__Calibrate_Response__rosidl_typesupport_introspection_c__Calibrate_Response_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobot_interfaces__srv__Calibrate_Response, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobot_interfaces__srv__Calibrate_Response, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aerobot_interfaces__srv__Calibrate_Response, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aerobot_interfaces__srv__Calibrate_Response__rosidl_typesupport_introspection_c__Calibrate_Response_message_members = {
  "aerobot_interfaces__srv",  // message namespace
  "Calibrate_Response",  // message name
  3,  // number of fields
  sizeof(aerobot_interfaces__srv__Calibrate_Response),
  aerobot_interfaces__srv__Calibrate_Response__rosidl_typesupport_introspection_c__Calibrate_Response_message_member_array,  // message members
  aerobot_interfaces__srv__Calibrate_Response__rosidl_typesupport_introspection_c__Calibrate_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  aerobot_interfaces__srv__Calibrate_Response__rosidl_typesupport_introspection_c__Calibrate_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aerobot_interfaces__srv__Calibrate_Response__rosidl_typesupport_introspection_c__Calibrate_Response_message_type_support_handle = {
  0,
  &aerobot_interfaces__srv__Calibrate_Response__rosidl_typesupport_introspection_c__Calibrate_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aerobot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobot_interfaces, srv, Calibrate_Response)() {
  if (!aerobot_interfaces__srv__Calibrate_Response__rosidl_typesupport_introspection_c__Calibrate_Response_message_type_support_handle.typesupport_identifier) {
    aerobot_interfaces__srv__Calibrate_Response__rosidl_typesupport_introspection_c__Calibrate_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aerobot_interfaces__srv__Calibrate_Response__rosidl_typesupport_introspection_c__Calibrate_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "aerobot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "aerobot_interfaces/srv/detail/calibrate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers aerobot_interfaces__srv__detail__calibrate__rosidl_typesupport_introspection_c__Calibrate_service_members = {
  "aerobot_interfaces__srv",  // service namespace
  "Calibrate",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // aerobot_interfaces__srv__detail__calibrate__rosidl_typesupport_introspection_c__Calibrate_Request_message_type_support_handle,
  NULL  // response message
  // aerobot_interfaces__srv__detail__calibrate__rosidl_typesupport_introspection_c__Calibrate_Response_message_type_support_handle
};

static rosidl_service_type_support_t aerobot_interfaces__srv__detail__calibrate__rosidl_typesupport_introspection_c__Calibrate_service_type_support_handle = {
  0,
  &aerobot_interfaces__srv__detail__calibrate__rosidl_typesupport_introspection_c__Calibrate_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobot_interfaces, srv, Calibrate_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobot_interfaces, srv, Calibrate_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aerobot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobot_interfaces, srv, Calibrate)() {
  if (!aerobot_interfaces__srv__detail__calibrate__rosidl_typesupport_introspection_c__Calibrate_service_type_support_handle.typesupport_identifier) {
    aerobot_interfaces__srv__detail__calibrate__rosidl_typesupport_introspection_c__Calibrate_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)aerobot_interfaces__srv__detail__calibrate__rosidl_typesupport_introspection_c__Calibrate_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobot_interfaces, srv, Calibrate_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aerobot_interfaces, srv, Calibrate_Response)()->data;
  }

  return &aerobot_interfaces__srv__detail__calibrate__rosidl_typesupport_introspection_c__Calibrate_service_type_support_handle;
}
