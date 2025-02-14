// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from getirkurye:srv/SetCoordinates.idl
// generated code does not contain a copyright notice

#ifndef GETIRKURYE__SRV__DETAIL__SET_COORDINATES__STRUCT_H_
#define GETIRKURYE__SRV__DETAIL__SET_COORDINATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetCoordinates in the package getirkurye.
typedef struct getirkurye__srv__SetCoordinates_Request
{
  double x;
  double y;
  double theta;
} getirkurye__srv__SetCoordinates_Request;

// Struct for a sequence of getirkurye__srv__SetCoordinates_Request.
typedef struct getirkurye__srv__SetCoordinates_Request__Sequence
{
  getirkurye__srv__SetCoordinates_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} getirkurye__srv__SetCoordinates_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetCoordinates in the package getirkurye.
typedef struct getirkurye__srv__SetCoordinates_Response
{
  bool success;
} getirkurye__srv__SetCoordinates_Response;

// Struct for a sequence of getirkurye__srv__SetCoordinates_Response.
typedef struct getirkurye__srv__SetCoordinates_Response__Sequence
{
  getirkurye__srv__SetCoordinates_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} getirkurye__srv__SetCoordinates_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GETIRKURYE__SRV__DETAIL__SET_COORDINATES__STRUCT_H_
