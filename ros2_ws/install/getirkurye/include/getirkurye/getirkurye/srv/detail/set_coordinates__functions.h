// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from getirkurye:srv/SetCoordinates.idl
// generated code does not contain a copyright notice

#ifndef GETIRKURYE__SRV__DETAIL__SET_COORDINATES__FUNCTIONS_H_
#define GETIRKURYE__SRV__DETAIL__SET_COORDINATES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "getirkurye/msg/rosidl_generator_c__visibility_control.h"

#include "getirkurye/srv/detail/set_coordinates__struct.h"

/// Initialize srv/SetCoordinates message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * getirkurye__srv__SetCoordinates_Request
 * )) before or use
 * getirkurye__srv__SetCoordinates_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
bool
getirkurye__srv__SetCoordinates_Request__init(getirkurye__srv__SetCoordinates_Request * msg);

/// Finalize srv/SetCoordinates message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
void
getirkurye__srv__SetCoordinates_Request__fini(getirkurye__srv__SetCoordinates_Request * msg);

/// Create srv/SetCoordinates message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * getirkurye__srv__SetCoordinates_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
getirkurye__srv__SetCoordinates_Request *
getirkurye__srv__SetCoordinates_Request__create();

/// Destroy srv/SetCoordinates message.
/**
 * It calls
 * getirkurye__srv__SetCoordinates_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
void
getirkurye__srv__SetCoordinates_Request__destroy(getirkurye__srv__SetCoordinates_Request * msg);

/// Check for srv/SetCoordinates message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
bool
getirkurye__srv__SetCoordinates_Request__are_equal(const getirkurye__srv__SetCoordinates_Request * lhs, const getirkurye__srv__SetCoordinates_Request * rhs);

/// Copy a srv/SetCoordinates message.
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
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
bool
getirkurye__srv__SetCoordinates_Request__copy(
  const getirkurye__srv__SetCoordinates_Request * input,
  getirkurye__srv__SetCoordinates_Request * output);

/// Initialize array of srv/SetCoordinates messages.
/**
 * It allocates the memory for the number of elements and calls
 * getirkurye__srv__SetCoordinates_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
bool
getirkurye__srv__SetCoordinates_Request__Sequence__init(getirkurye__srv__SetCoordinates_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetCoordinates messages.
/**
 * It calls
 * getirkurye__srv__SetCoordinates_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
void
getirkurye__srv__SetCoordinates_Request__Sequence__fini(getirkurye__srv__SetCoordinates_Request__Sequence * array);

/// Create array of srv/SetCoordinates messages.
/**
 * It allocates the memory for the array and calls
 * getirkurye__srv__SetCoordinates_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
getirkurye__srv__SetCoordinates_Request__Sequence *
getirkurye__srv__SetCoordinates_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetCoordinates messages.
/**
 * It calls
 * getirkurye__srv__SetCoordinates_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
void
getirkurye__srv__SetCoordinates_Request__Sequence__destroy(getirkurye__srv__SetCoordinates_Request__Sequence * array);

/// Check for srv/SetCoordinates message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
bool
getirkurye__srv__SetCoordinates_Request__Sequence__are_equal(const getirkurye__srv__SetCoordinates_Request__Sequence * lhs, const getirkurye__srv__SetCoordinates_Request__Sequence * rhs);

/// Copy an array of srv/SetCoordinates messages.
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
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
bool
getirkurye__srv__SetCoordinates_Request__Sequence__copy(
  const getirkurye__srv__SetCoordinates_Request__Sequence * input,
  getirkurye__srv__SetCoordinates_Request__Sequence * output);

/// Initialize srv/SetCoordinates message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * getirkurye__srv__SetCoordinates_Response
 * )) before or use
 * getirkurye__srv__SetCoordinates_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
bool
getirkurye__srv__SetCoordinates_Response__init(getirkurye__srv__SetCoordinates_Response * msg);

/// Finalize srv/SetCoordinates message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
void
getirkurye__srv__SetCoordinates_Response__fini(getirkurye__srv__SetCoordinates_Response * msg);

/// Create srv/SetCoordinates message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * getirkurye__srv__SetCoordinates_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
getirkurye__srv__SetCoordinates_Response *
getirkurye__srv__SetCoordinates_Response__create();

/// Destroy srv/SetCoordinates message.
/**
 * It calls
 * getirkurye__srv__SetCoordinates_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
void
getirkurye__srv__SetCoordinates_Response__destroy(getirkurye__srv__SetCoordinates_Response * msg);

/// Check for srv/SetCoordinates message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
bool
getirkurye__srv__SetCoordinates_Response__are_equal(const getirkurye__srv__SetCoordinates_Response * lhs, const getirkurye__srv__SetCoordinates_Response * rhs);

/// Copy a srv/SetCoordinates message.
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
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
bool
getirkurye__srv__SetCoordinates_Response__copy(
  const getirkurye__srv__SetCoordinates_Response * input,
  getirkurye__srv__SetCoordinates_Response * output);

/// Initialize array of srv/SetCoordinates messages.
/**
 * It allocates the memory for the number of elements and calls
 * getirkurye__srv__SetCoordinates_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
bool
getirkurye__srv__SetCoordinates_Response__Sequence__init(getirkurye__srv__SetCoordinates_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetCoordinates messages.
/**
 * It calls
 * getirkurye__srv__SetCoordinates_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
void
getirkurye__srv__SetCoordinates_Response__Sequence__fini(getirkurye__srv__SetCoordinates_Response__Sequence * array);

/// Create array of srv/SetCoordinates messages.
/**
 * It allocates the memory for the array and calls
 * getirkurye__srv__SetCoordinates_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
getirkurye__srv__SetCoordinates_Response__Sequence *
getirkurye__srv__SetCoordinates_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetCoordinates messages.
/**
 * It calls
 * getirkurye__srv__SetCoordinates_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
void
getirkurye__srv__SetCoordinates_Response__Sequence__destroy(getirkurye__srv__SetCoordinates_Response__Sequence * array);

/// Check for srv/SetCoordinates message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
bool
getirkurye__srv__SetCoordinates_Response__Sequence__are_equal(const getirkurye__srv__SetCoordinates_Response__Sequence * lhs, const getirkurye__srv__SetCoordinates_Response__Sequence * rhs);

/// Copy an array of srv/SetCoordinates messages.
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
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
bool
getirkurye__srv__SetCoordinates_Response__Sequence__copy(
  const getirkurye__srv__SetCoordinates_Response__Sequence * input,
  getirkurye__srv__SetCoordinates_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GETIRKURYE__SRV__DETAIL__SET_COORDINATES__FUNCTIONS_H_
