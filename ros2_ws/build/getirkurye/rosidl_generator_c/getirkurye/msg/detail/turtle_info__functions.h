// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from getirkurye:msg/TurtleInfo.idl
// generated code does not contain a copyright notice

#ifndef GETIRKURYE__MSG__DETAIL__TURTLE_INFO__FUNCTIONS_H_
#define GETIRKURYE__MSG__DETAIL__TURTLE_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "getirkurye/msg/rosidl_generator_c__visibility_control.h"

#include "getirkurye/msg/detail/turtle_info__struct.h"

/// Initialize msg/TurtleInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * getirkurye__msg__TurtleInfo
 * )) before or use
 * getirkurye__msg__TurtleInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
bool
getirkurye__msg__TurtleInfo__init(getirkurye__msg__TurtleInfo * msg);

/// Finalize msg/TurtleInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
void
getirkurye__msg__TurtleInfo__fini(getirkurye__msg__TurtleInfo * msg);

/// Create msg/TurtleInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * getirkurye__msg__TurtleInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
getirkurye__msg__TurtleInfo *
getirkurye__msg__TurtleInfo__create();

/// Destroy msg/TurtleInfo message.
/**
 * It calls
 * getirkurye__msg__TurtleInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
void
getirkurye__msg__TurtleInfo__destroy(getirkurye__msg__TurtleInfo * msg);

/// Check for msg/TurtleInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
bool
getirkurye__msg__TurtleInfo__are_equal(const getirkurye__msg__TurtleInfo * lhs, const getirkurye__msg__TurtleInfo * rhs);

/// Copy a msg/TurtleInfo message.
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
getirkurye__msg__TurtleInfo__copy(
  const getirkurye__msg__TurtleInfo * input,
  getirkurye__msg__TurtleInfo * output);

/// Initialize array of msg/TurtleInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * getirkurye__msg__TurtleInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
bool
getirkurye__msg__TurtleInfo__Sequence__init(getirkurye__msg__TurtleInfo__Sequence * array, size_t size);

/// Finalize array of msg/TurtleInfo messages.
/**
 * It calls
 * getirkurye__msg__TurtleInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
void
getirkurye__msg__TurtleInfo__Sequence__fini(getirkurye__msg__TurtleInfo__Sequence * array);

/// Create array of msg/TurtleInfo messages.
/**
 * It allocates the memory for the array and calls
 * getirkurye__msg__TurtleInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
getirkurye__msg__TurtleInfo__Sequence *
getirkurye__msg__TurtleInfo__Sequence__create(size_t size);

/// Destroy array of msg/TurtleInfo messages.
/**
 * It calls
 * getirkurye__msg__TurtleInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
void
getirkurye__msg__TurtleInfo__Sequence__destroy(getirkurye__msg__TurtleInfo__Sequence * array);

/// Check for msg/TurtleInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_getirkurye
bool
getirkurye__msg__TurtleInfo__Sequence__are_equal(const getirkurye__msg__TurtleInfo__Sequence * lhs, const getirkurye__msg__TurtleInfo__Sequence * rhs);

/// Copy an array of msg/TurtleInfo messages.
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
getirkurye__msg__TurtleInfo__Sequence__copy(
  const getirkurye__msg__TurtleInfo__Sequence * input,
  getirkurye__msg__TurtleInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GETIRKURYE__MSG__DETAIL__TURTLE_INFO__FUNCTIONS_H_
