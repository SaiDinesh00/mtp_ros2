// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from aerobot_interfaces:srv/Calibrate.idl
// generated code does not contain a copyright notice

#ifndef AEROBOT_INTERFACES__SRV__DETAIL__CALIBRATE__FUNCTIONS_H_
#define AEROBOT_INTERFACES__SRV__DETAIL__CALIBRATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "aerobot_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "aerobot_interfaces/srv/detail/calibrate__struct.h"

/// Initialize srv/Calibrate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aerobot_interfaces__srv__Calibrate_Request
 * )) before or use
 * aerobot_interfaces__srv__Calibrate_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
bool
aerobot_interfaces__srv__Calibrate_Request__init(aerobot_interfaces__srv__Calibrate_Request * msg);

/// Finalize srv/Calibrate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
void
aerobot_interfaces__srv__Calibrate_Request__fini(aerobot_interfaces__srv__Calibrate_Request * msg);

/// Create srv/Calibrate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aerobot_interfaces__srv__Calibrate_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
aerobot_interfaces__srv__Calibrate_Request *
aerobot_interfaces__srv__Calibrate_Request__create();

/// Destroy srv/Calibrate message.
/**
 * It calls
 * aerobot_interfaces__srv__Calibrate_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
void
aerobot_interfaces__srv__Calibrate_Request__destroy(aerobot_interfaces__srv__Calibrate_Request * msg);

/// Check for srv/Calibrate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
bool
aerobot_interfaces__srv__Calibrate_Request__are_equal(const aerobot_interfaces__srv__Calibrate_Request * lhs, const aerobot_interfaces__srv__Calibrate_Request * rhs);

/// Copy a srv/Calibrate message.
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
aerobot_interfaces__srv__Calibrate_Request__copy(
  const aerobot_interfaces__srv__Calibrate_Request * input,
  aerobot_interfaces__srv__Calibrate_Request * output);

/// Initialize array of srv/Calibrate messages.
/**
 * It allocates the memory for the number of elements and calls
 * aerobot_interfaces__srv__Calibrate_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
bool
aerobot_interfaces__srv__Calibrate_Request__Sequence__init(aerobot_interfaces__srv__Calibrate_Request__Sequence * array, size_t size);

/// Finalize array of srv/Calibrate messages.
/**
 * It calls
 * aerobot_interfaces__srv__Calibrate_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
void
aerobot_interfaces__srv__Calibrate_Request__Sequence__fini(aerobot_interfaces__srv__Calibrate_Request__Sequence * array);

/// Create array of srv/Calibrate messages.
/**
 * It allocates the memory for the array and calls
 * aerobot_interfaces__srv__Calibrate_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
aerobot_interfaces__srv__Calibrate_Request__Sequence *
aerobot_interfaces__srv__Calibrate_Request__Sequence__create(size_t size);

/// Destroy array of srv/Calibrate messages.
/**
 * It calls
 * aerobot_interfaces__srv__Calibrate_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
void
aerobot_interfaces__srv__Calibrate_Request__Sequence__destroy(aerobot_interfaces__srv__Calibrate_Request__Sequence * array);

/// Check for srv/Calibrate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
bool
aerobot_interfaces__srv__Calibrate_Request__Sequence__are_equal(const aerobot_interfaces__srv__Calibrate_Request__Sequence * lhs, const aerobot_interfaces__srv__Calibrate_Request__Sequence * rhs);

/// Copy an array of srv/Calibrate messages.
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
aerobot_interfaces__srv__Calibrate_Request__Sequence__copy(
  const aerobot_interfaces__srv__Calibrate_Request__Sequence * input,
  aerobot_interfaces__srv__Calibrate_Request__Sequence * output);

/// Initialize srv/Calibrate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aerobot_interfaces__srv__Calibrate_Response
 * )) before or use
 * aerobot_interfaces__srv__Calibrate_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
bool
aerobot_interfaces__srv__Calibrate_Response__init(aerobot_interfaces__srv__Calibrate_Response * msg);

/// Finalize srv/Calibrate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
void
aerobot_interfaces__srv__Calibrate_Response__fini(aerobot_interfaces__srv__Calibrate_Response * msg);

/// Create srv/Calibrate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aerobot_interfaces__srv__Calibrate_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
aerobot_interfaces__srv__Calibrate_Response *
aerobot_interfaces__srv__Calibrate_Response__create();

/// Destroy srv/Calibrate message.
/**
 * It calls
 * aerobot_interfaces__srv__Calibrate_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
void
aerobot_interfaces__srv__Calibrate_Response__destroy(aerobot_interfaces__srv__Calibrate_Response * msg);

/// Check for srv/Calibrate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
bool
aerobot_interfaces__srv__Calibrate_Response__are_equal(const aerobot_interfaces__srv__Calibrate_Response * lhs, const aerobot_interfaces__srv__Calibrate_Response * rhs);

/// Copy a srv/Calibrate message.
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
aerobot_interfaces__srv__Calibrate_Response__copy(
  const aerobot_interfaces__srv__Calibrate_Response * input,
  aerobot_interfaces__srv__Calibrate_Response * output);

/// Initialize array of srv/Calibrate messages.
/**
 * It allocates the memory for the number of elements and calls
 * aerobot_interfaces__srv__Calibrate_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
bool
aerobot_interfaces__srv__Calibrate_Response__Sequence__init(aerobot_interfaces__srv__Calibrate_Response__Sequence * array, size_t size);

/// Finalize array of srv/Calibrate messages.
/**
 * It calls
 * aerobot_interfaces__srv__Calibrate_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
void
aerobot_interfaces__srv__Calibrate_Response__Sequence__fini(aerobot_interfaces__srv__Calibrate_Response__Sequence * array);

/// Create array of srv/Calibrate messages.
/**
 * It allocates the memory for the array and calls
 * aerobot_interfaces__srv__Calibrate_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
aerobot_interfaces__srv__Calibrate_Response__Sequence *
aerobot_interfaces__srv__Calibrate_Response__Sequence__create(size_t size);

/// Destroy array of srv/Calibrate messages.
/**
 * It calls
 * aerobot_interfaces__srv__Calibrate_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
void
aerobot_interfaces__srv__Calibrate_Response__Sequence__destroy(aerobot_interfaces__srv__Calibrate_Response__Sequence * array);

/// Check for srv/Calibrate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
bool
aerobot_interfaces__srv__Calibrate_Response__Sequence__are_equal(const aerobot_interfaces__srv__Calibrate_Response__Sequence * lhs, const aerobot_interfaces__srv__Calibrate_Response__Sequence * rhs);

/// Copy an array of srv/Calibrate messages.
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
aerobot_interfaces__srv__Calibrate_Response__Sequence__copy(
  const aerobot_interfaces__srv__Calibrate_Response__Sequence * input,
  aerobot_interfaces__srv__Calibrate_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AEROBOT_INTERFACES__SRV__DETAIL__CALIBRATE__FUNCTIONS_H_
