// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from getirkurye:msg/TurtleInfo.idl
// generated code does not contain a copyright notice

#ifndef GETIRKURYE__MSG__DETAIL__TURTLE_INFO__BUILDER_HPP_
#define GETIRKURYE__MSG__DETAIL__TURTLE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "getirkurye/msg/detail/turtle_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace getirkurye
{

namespace msg
{

namespace builder
{

class Init_TurtleInfo_theta
{
public:
  explicit Init_TurtleInfo_theta(::getirkurye::msg::TurtleInfo & msg)
  : msg_(msg)
  {}
  ::getirkurye::msg::TurtleInfo theta(::getirkurye::msg::TurtleInfo::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::getirkurye::msg::TurtleInfo msg_;
};

class Init_TurtleInfo_y
{
public:
  explicit Init_TurtleInfo_y(::getirkurye::msg::TurtleInfo & msg)
  : msg_(msg)
  {}
  Init_TurtleInfo_theta y(::getirkurye::msg::TurtleInfo::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_TurtleInfo_theta(msg_);
  }

private:
  ::getirkurye::msg::TurtleInfo msg_;
};

class Init_TurtleInfo_x
{
public:
  explicit Init_TurtleInfo_x(::getirkurye::msg::TurtleInfo & msg)
  : msg_(msg)
  {}
  Init_TurtleInfo_y x(::getirkurye::msg::TurtleInfo::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TurtleInfo_y(msg_);
  }

private:
  ::getirkurye::msg::TurtleInfo msg_;
};

class Init_TurtleInfo_name
{
public:
  Init_TurtleInfo_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleInfo_x name(::getirkurye::msg::TurtleInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_TurtleInfo_x(msg_);
  }

private:
  ::getirkurye::msg::TurtleInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::getirkurye::msg::TurtleInfo>()
{
  return getirkurye::msg::builder::Init_TurtleInfo_name();
}

}  // namespace getirkurye

#endif  // GETIRKURYE__MSG__DETAIL__TURTLE_INFO__BUILDER_HPP_
