// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aerobot_interfaces:srv/EscSrv.idl
// generated code does not contain a copyright notice

#ifndef AEROBOT_INTERFACES__SRV__DETAIL__ESC_SRV__STRUCT_H_
#define AEROBOT_INTERFACES__SRV__DETAIL__ESC_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/EscSrv in the package aerobot_interfaces.
typedef struct aerobot_interfaces__srv__EscSrv_Request
{
  int8_t pin_number;
  bool state;
} aerobot_interfaces__srv__EscSrv_Request;

// Struct for a sequence of aerobot_interfaces__srv__EscSrv_Request.
typedef struct aerobot_interfaces__srv__EscSrv_Request__Sequence
{
  aerobot_interfaces__srv__EscSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobot_interfaces__srv__EscSrv_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/EscSrv in the package aerobot_interfaces.
typedef struct aerobot_interfaces__srv__EscSrv_Response
{
  bool success;
} aerobot_interfaces__srv__EscSrv_Response;

// Struct for a sequence of aerobot_interfaces__srv__EscSrv_Response.
typedef struct aerobot_interfaces__srv__EscSrv_Response__Sequence
{
  aerobot_interfaces__srv__EscSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobot_interfaces__srv__EscSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AEROBOT_INTERFACES__SRV__DETAIL__ESC_SRV__STRUCT_H_
