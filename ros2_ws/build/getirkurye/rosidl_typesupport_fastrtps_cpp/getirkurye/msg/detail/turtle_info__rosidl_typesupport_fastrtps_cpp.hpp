// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from getirkurye:msg/TurtleInfo.idl
// generated code does not contain a copyright notice

#ifndef GETIRKURYE__MSG__DETAIL__TURTLE_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define GETIRKURYE__MSG__DETAIL__TURTLE_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "getirkurye/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "getirkurye/msg/detail/turtle_info__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace getirkurye
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_getirkurye
cdr_serialize(
  const getirkurye::msg::TurtleInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_getirkurye
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  getirkurye::msg::TurtleInfo & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_getirkurye
get_serialized_size(
  const getirkurye::msg::TurtleInfo & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_getirkurye
max_serialized_size_TurtleInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace getirkurye

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_getirkurye
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, getirkurye, msg, TurtleInfo)();

#ifdef __cplusplus
}
#endif

#endif  // GETIRKURYE__MSG__DETAIL__TURTLE_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
