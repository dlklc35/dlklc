// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from getirkurye:srv/SetCoordinates.idl
// generated code does not contain a copyright notice

#ifndef GETIRKURYE__SRV__DETAIL__SET_COORDINATES__STRUCT_HPP_
#define GETIRKURYE__SRV__DETAIL__SET_COORDINATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__getirkurye__srv__SetCoordinates_Request __attribute__((deprecated))
#else
# define DEPRECATED__getirkurye__srv__SetCoordinates_Request __declspec(deprecated)
#endif

namespace getirkurye
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCoordinates_Request_
{
  using Type = SetCoordinates_Request_<ContainerAllocator>;

  explicit SetCoordinates_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->theta = 0.0;
    }
  }

  explicit SetCoordinates_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->theta = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _theta_type =
    double;
  _theta_type theta;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    getirkurye::srv::SetCoordinates_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const getirkurye::srv::SetCoordinates_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<getirkurye::srv::SetCoordinates_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<getirkurye::srv::SetCoordinates_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      getirkurye::srv::SetCoordinates_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<getirkurye::srv::SetCoordinates_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      getirkurye::srv::SetCoordinates_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<getirkurye::srv::SetCoordinates_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<getirkurye::srv::SetCoordinates_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<getirkurye::srv::SetCoordinates_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__getirkurye__srv__SetCoordinates_Request
    std::shared_ptr<getirkurye::srv::SetCoordinates_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__getirkurye__srv__SetCoordinates_Request
    std::shared_ptr<getirkurye::srv::SetCoordinates_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCoordinates_Request_ & other) const
  {
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
  bool operator!=(const SetCoordinates_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCoordinates_Request_

// alias to use template instance with default allocator
using SetCoordinates_Request =
  getirkurye::srv::SetCoordinates_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace getirkurye


#ifndef _WIN32
# define DEPRECATED__getirkurye__srv__SetCoordinates_Response __attribute__((deprecated))
#else
# define DEPRECATED__getirkurye__srv__SetCoordinates_Response __declspec(deprecated)
#endif

namespace getirkurye
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCoordinates_Response_
{
  using Type = SetCoordinates_Response_<ContainerAllocator>;

  explicit SetCoordinates_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetCoordinates_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    getirkurye::srv::SetCoordinates_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const getirkurye::srv::SetCoordinates_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<getirkurye::srv::SetCoordinates_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<getirkurye::srv::SetCoordinates_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      getirkurye::srv::SetCoordinates_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<getirkurye::srv::SetCoordinates_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      getirkurye::srv::SetCoordinates_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<getirkurye::srv::SetCoordinates_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<getirkurye::srv::SetCoordinates_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<getirkurye::srv::SetCoordinates_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__getirkurye__srv__SetCoordinates_Response
    std::shared_ptr<getirkurye::srv::SetCoordinates_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__getirkurye__srv__SetCoordinates_Response
    std::shared_ptr<getirkurye::srv::SetCoordinates_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCoordinates_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCoordinates_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCoordinates_Response_

// alias to use template instance with default allocator
using SetCoordinates_Response =
  getirkurye::srv::SetCoordinates_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace getirkurye

namespace getirkurye
{

namespace srv
{

struct SetCoordinates
{
  using Request = getirkurye::srv::SetCoordinates_Request;
  using Response = getirkurye::srv::SetCoordinates_Response;
};

}  // namespace srv

}  // namespace getirkurye

#endif  // GETIRKURYE__SRV__DETAIL__SET_COORDINATES__STRUCT_HPP_
