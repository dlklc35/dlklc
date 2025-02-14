// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from getirkurye:srv/SetCoordinates.idl
// generated code does not contain a copyright notice

#ifndef GETIRKURYE__SRV__DETAIL__SET_COORDINATES__BUILDER_HPP_
#define GETIRKURYE__SRV__DETAIL__SET_COORDINATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "getirkurye/srv/detail/set_coordinates__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace getirkurye
{

namespace srv
{

namespace builder
{

class Init_SetCoordinates_Request_y
{
public:
  explicit Init_SetCoordinates_Request_y(::getirkurye::srv::SetCoordinates_Request & msg)
  : msg_(msg)
  {}
  ::getirkurye::srv::SetCoordinates_Request y(::getirkurye::srv::SetCoordinates_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::getirkurye::srv::SetCoordinates_Request msg_;
};

class Init_SetCoordinates_Request_x
{
public:
  Init_SetCoordinates_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCoordinates_Request_y x(::getirkurye::srv::SetCoordinates_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SetCoordinates_Request_y(msg_);
  }

private:
  ::getirkurye::srv::SetCoordinates_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::getirkurye::srv::SetCoordinates_Request>()
{
  return getirkurye::srv::builder::Init_SetCoordinates_Request_x();
}

}  // namespace getirkurye


namespace getirkurye
{

namespace srv
{

namespace builder
{

class Init_SetCoordinates_Response_success
{
public:
  Init_SetCoordinates_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::getirkurye::srv::SetCoordinates_Response success(::getirkurye::srv::SetCoordinates_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::getirkurye::srv::SetCoordinates_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::getirkurye::srv::SetCoordinates_Response>()
{
  return getirkurye::srv::builder::Init_SetCoordinates_Response_success();
}

}  // namespace getirkurye

#endif  // GETIRKURYE__SRV__DETAIL__SET_COORDINATES__BUILDER_HPP_
