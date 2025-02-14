// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from getirkurye:msg/TurtleInfo.idl
// generated code does not contain a copyright notice

#ifndef GETIRKURYE__MSG__DETAIL__TURTLE_INFO__STRUCT_HPP_
#define GETIRKURYE__MSG__DETAIL__TURTLE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__getirkurye__msg__TurtleInfo __attribute__((deprecated))
#else
# define DEPRECATED__getirkurye__msg__TurtleInfo __declspec(deprecated)
#endif

namespace getirkurye
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TurtleInfo_
{
  using Type = TurtleInfo_<ContainerAllocator>;

  explicit TurtleInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
    }
  }

  explicit TurtleInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _theta_type =
    float;
  _theta_type theta;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__theta(
    const float & _arg)
  {
    this->theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    getirkurye::msg::TurtleInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const getirkurye::msg::TurtleInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<getirkurye::msg::TurtleInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<getirkurye::msg::TurtleInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      getirkurye::msg::TurtleInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<getirkurye::msg::TurtleInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      getirkurye::msg::TurtleInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<getirkurye::msg::TurtleInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<getirkurye::msg::TurtleInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<getirkurye::msg::TurtleInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__getirkurye__msg__TurtleInfo
    std::shared_ptr<getirkurye::msg::TurtleInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__getirkurye__msg__TurtleInfo
    std::shared_ptr<getirkurye::msg::TurtleInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleInfo_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleInfo_

// alias to use template instance with default allocator
using TurtleInfo =
  getirkurye::msg::TurtleInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace getirkurye

#endif  // GETIRKURYE__MSG__DETAIL__TURTLE_INFO__STRUCT_HPP_
