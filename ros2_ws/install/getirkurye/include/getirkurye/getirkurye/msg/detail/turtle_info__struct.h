// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from getirkurye:msg/TurtleInfo.idl
// generated code does not contain a copyright notice

#ifndef GETIRKURYE__MSG__DETAIL__TURTLE_INFO__STRUCT_H_
#define GETIRKURYE__MSG__DETAIL__TURTLE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TurtleInfo in the package getirkurye.
typedef struct getirkurye__msg__TurtleInfo
{
  rosidl_runtime_c__String name;
  float x;
  float y;
  float theta;
} getirkurye__msg__TurtleInfo;

// Struct for a sequence of getirkurye__msg__TurtleInfo.
typedef struct getirkurye__msg__TurtleInfo__Sequence
{
  getirkurye__msg__TurtleInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} getirkurye__msg__TurtleInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GETIRKURYE__MSG__DETAIL__TURTLE_INFO__STRUCT_H_
