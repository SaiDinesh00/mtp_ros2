// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from aerobot_interfaces:msg/Esc.idl
// generated code does not contain a copyright notice

#ifndef AEROBOT_INTERFACES__MSG__DETAIL__ESC__FUNCTIONS_H_
#define AEROBOT_INTERFACES__MSG__DETAIL__ESC__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "aerobot_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "aerobot_interfaces/msg/detail/esc__struct.h"

/// Initialize msg/Esc message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aerobot_interfaces__msg__Esc
 * )) before or use
 * aerobot_interfaces__msg__Esc__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
bool
aerobot_interfaces__msg__Esc__init(aerobot_interfaces__msg__Esc * msg);

/// Finalize msg/Esc message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
void
aerobot_interfaces__msg__Esc__fini(aerobot_interfaces__msg__Esc * msg);

/// Create msg/Esc message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aerobot_interfaces__msg__Esc__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
aerobot_interfaces__msg__Esc *
aerobot_interfaces__msg__Esc__create();

/// Destroy msg/Esc message.
/**
 * It calls
 * aerobot_interfaces__msg__Esc__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
void
aerobot_interfaces__msg__Esc__destroy(aerobot_interfaces__msg__Esc * msg);

/// Check for msg/Esc message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
bool
aerobot_interfaces__msg__Esc__are_equal(const aerobot_interfaces__msg__Esc * lhs, const aerobot_interfaces__msg__Esc * rhs);

/// Copy a msg/Esc message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
bool
aerobot_interfaces__msg__Esc__copy(
  const aerobot_interfaces__msg__Esc * input,
  aerobot_interfaces__msg__Esc * output);

/// Initialize array of msg/Esc messages.
/**
 * It allocates the memory for the number of elements and calls
 * aerobot_interfaces__msg__Esc__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
bool
aerobot_interfaces__msg__Esc__Sequence__init(aerobot_interfaces__msg__Esc__Sequence * array, size_t size);

/// Finalize array of msg/Esc messages.
/**
 * It calls
 * aerobot_interfaces__msg__Esc__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
void
aerobot_interfaces__msg__Esc__Sequence__fini(aerobot_interfaces__msg__Esc__Sequence * array);

/// Create array of msg/Esc messages.
/**
 * It allocates the memory for the array and calls
 * aerobot_interfaces__msg__Esc__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
aerobot_interfaces__msg__Esc__Sequence *
aerobot_interfaces__msg__Esc__Sequence__create(size_t size);

/// Destroy array of msg/Esc messages.
/**
 * It calls
 * aerobot_interfaces__msg__Esc__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
void
aerobot_interfaces__msg__Esc__Sequence__destroy(aerobot_interfaces__msg__Esc__Sequence * array);

/// Check for msg/Esc message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
bool
aerobot_interfaces__msg__Esc__Sequence__are_equal(const aerobot_interfaces__msg__Esc__Sequence * lhs, const aerobot_interfaces__msg__Esc__Sequence * rhs);

/// Copy an array of msg/Esc messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
bool
aerobot_interfaces__msg__Esc__Sequence__copy(
  const aerobot_interfaces__msg__Esc__Sequence * input,
  aerobot_interfaces__msg__Esc__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AEROBOT_INTERFACES__MSG__DETAIL__ESC__FUNCTIONS_H_
