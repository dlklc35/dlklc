// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from getirkurye:srv/SetCoordinates.idl
// generated code does not contain a copyright notice

#ifndef GETIRKURYE__SRV__DETAIL__SET_COORDINATES__TRAITS_HPP_
#define GETIRKURYE__SRV__DETAIL__SET_COORDINATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "getirkurye/srv/detail/set_coordinates__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace getirkurye
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCoordinates_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetCoordinates_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetCoordinates_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace getirkurye

namespace rosidl_generator_traits
{

[[deprecated("use getirkurye::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const getirkurye::srv::SetCoordinates_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  getirkurye::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use getirkurye::srv::to_yaml() instead")]]
inline std::string to_yaml(const getirkurye::srv::SetCoordinates_Request & msg)
{
  return getirkurye::srv::to_yaml(msg);
}

template<>
inline const char * data_type<getirkurye::srv::SetCoordinates_Request>()
{
  return "getirkurye::srv::SetCoordinates_Request";
}

template<>
inline const char * name<getirkurye::srv::SetCoordinates_Request>()
{
  return "getirkurye/srv/SetCoordinates_Request";
}

template<>
struct has_fixed_size<getirkurye::srv::SetCoordinates_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<getirkurye::srv::SetCoordinates_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<getirkurye::srv::SetCoordinates_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace getirkurye
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCoordinates_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetCoordinates_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetCoordinates_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace getirkurye

namespace rosidl_generator_traits
{

[[deprecated("use getirkurye::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const getirkurye::srv::SetCoordinates_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  getirkurye::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use getirkurye::srv::to_yaml() instead")]]
inline std::string to_yaml(const getirkurye::srv::SetCoordinates_Response & msg)
{
  return getirkurye::srv::to_yaml(msg);
}

template<>
inline const char * data_type<getirkurye::srv::SetCoordinates_Response>()
{
  return "getirkurye::srv::SetCoordinates_Response";
}

template<>
inline const char * name<getirkurye::srv::SetCoordinates_Response>()
{
  return "getirkurye/srv/SetCoordinates_Response";
}

template<>
struct has_fixed_size<getirkurye::srv::SetCoordinates_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<getirkurye::srv::SetCoordinates_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<getirkurye::srv::SetCoordinates_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<getirkurye::srv::SetCoordinates>()
{
  return "getirkurye::srv::SetCoordinates";
}

template<>
inline const char * name<getirkurye::srv::SetCoordinates>()
{
  return "getirkurye/srv/SetCoordinates";
}

template<>
struct has_fixed_size<getirkurye::srv::SetCoordinates>
  : std::integral_constant<
    bool,
    has_fixed_size<getirkurye::srv::SetCoordinates_Request>::value &&
    has_fixed_size<getirkurye::srv::SetCoordinates_Response>::value
  >
{
};

template<>
struct has_bounded_size<getirkurye::srv::SetCoordinates>
  : std::integral_constant<
    bool,
    has_bounded_size<getirkurye::srv::SetCoordinates_Request>::value &&
    has_bounded_size<getirkurye::srv::SetCoordinates_Response>::value
  >
{
};

template<>
struct is_service<getirkurye::srv::SetCoordinates>
  : std::true_type
{
};

template<>
struct is_service_request<getirkurye::srv::SetCoordinates_Request>
  : std::true_type
{
};

template<>
struct is_service_response<getirkurye::srv::SetCoordinates_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GETIRKURYE__SRV__DETAIL__SET_COORDINATES__TRAITS_HPP_
