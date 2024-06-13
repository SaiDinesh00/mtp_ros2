// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aerobot_interfaces:srv/Esc.idl
// generated code does not contain a copyright notice

#ifndef AEROBOT_INTERFACES__SRV__DETAIL__ESC__STRUCT_H_
#define AEROBOT_INTERFACES__SRV__DETAIL__ESC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Esc in the package aerobot_interfaces.
typedef struct aerobot_interfaces__srv__Esc_Request
{
  int8_t pin_number;
  bool state;
} aerobot_interfaces__srv__Esc_Request;

// Struct for a sequence of aerobot_interfaces__srv__Esc_Request.
typedef struct aerobot_interfaces__srv__Esc_Request__Sequence
{
  aerobot_interfaces__srv__Esc_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobot_interfaces__srv__Esc_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Esc in the package aerobot_interfaces.
typedef struct aerobot_interfaces__srv__Esc_Response
{
  bool success;
} aerobot_interfaces__srv__Esc_Response;

// Struct for a sequence of aerobot_interfaces__srv__Esc_Response.
typedef struct aerobot_interfaces__srv__Esc_Response__Sequence
{
  aerobot_interfaces__srv__Esc_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aerobot_interfaces__srv__Esc_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AEROBOT_INTERFACES__SRV__DETAIL__ESC__STRUCT_H_
