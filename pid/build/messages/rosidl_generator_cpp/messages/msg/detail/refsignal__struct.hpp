// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from messages:msg/Refsignal.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES__MSG__DETAIL__REFSIGNAL__STRUCT_HPP_
#define MESSAGES__MSG__DETAIL__REFSIGNAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__messages__msg__Refsignal __attribute__((deprecated))
#else
# define DEPRECATED__messages__msg__Refsignal __declspec(deprecated)
#endif

namespace messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Refsignal_
{
  using Type = Refsignal_<ContainerAllocator>;

  explicit Refsignal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->setpoint = 0ll;
    }
  }

  explicit Refsignal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->setpoint = 0ll;
    }
  }

  // field types and members
  using _setpoint_type =
    int64_t;
  _setpoint_type setpoint;

  // setters for named parameter idiom
  Type & set__setpoint(
    const int64_t & _arg)
  {
    this->setpoint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages::msg::Refsignal_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages::msg::Refsignal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages::msg::Refsignal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages::msg::Refsignal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages::msg::Refsignal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages::msg::Refsignal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages::msg::Refsignal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages::msg::Refsignal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages::msg::Refsignal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages::msg::Refsignal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages__msg__Refsignal
    std::shared_ptr<messages::msg::Refsignal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages__msg__Refsignal
    std::shared_ptr<messages::msg::Refsignal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Refsignal_ & other) const
  {
    if (this->setpoint != other.setpoint) {
      return false;
    }
    return true;
  }
  bool operator!=(const Refsignal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Refsignal_

// alias to use template instance with default allocator
using Refsignal =
  messages::msg::Refsignal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace messages

#endif  // MESSAGES__MSG__DETAIL__REFSIGNAL__STRUCT_HPP_
