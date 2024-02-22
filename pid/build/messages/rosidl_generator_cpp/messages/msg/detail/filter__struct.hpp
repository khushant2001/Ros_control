// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from messages:msg/Filter.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES__MSG__DETAIL__FILTER__STRUCT_HPP_
#define MESSAGES__MSG__DETAIL__FILTER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__messages__msg__Filter __attribute__((deprecated))
#else
# define DEPRECATED__messages__msg__Filter __declspec(deprecated)
#endif

namespace messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Filter_
{
  using Type = Filter_<ContainerAllocator>;

  explicit Filter_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0f;
      this->velocity = 0.0f;
    }
  }

  explicit Filter_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0f;
      this->velocity = 0.0f;
    }
  }

  // field types and members
  using _position_type =
    float;
  _position_type position;
  using _velocity_type =
    float;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__position(
    const float & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages::msg::Filter_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages::msg::Filter_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages::msg::Filter_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages::msg::Filter_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages::msg::Filter_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages::msg::Filter_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages::msg::Filter_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages::msg::Filter_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages::msg::Filter_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages::msg::Filter_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages__msg__Filter
    std::shared_ptr<messages::msg::Filter_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages__msg__Filter
    std::shared_ptr<messages::msg::Filter_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Filter_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const Filter_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Filter_

// alias to use template instance with default allocator
using Filter =
  messages::msg::Filter_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace messages

#endif  // MESSAGES__MSG__DETAIL__FILTER__STRUCT_HPP_
