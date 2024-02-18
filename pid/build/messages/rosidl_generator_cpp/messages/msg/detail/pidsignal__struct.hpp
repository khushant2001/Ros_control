// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from messages:msg/Pidsignal.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES__MSG__DETAIL__PIDSIGNAL__STRUCT_HPP_
#define MESSAGES__MSG__DETAIL__PIDSIGNAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__messages__msg__Pidsignal __attribute__((deprecated))
#else
# define DEPRECATED__messages__msg__Pidsignal __declspec(deprecated)
#endif

namespace messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pidsignal_
{
  using Type = Pidsignal_<ContainerAllocator>;

  explicit Pidsignal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actuation = 0.0f;
    }
  }

  explicit Pidsignal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actuation = 0.0f;
    }
  }

  // field types and members
  using _actuation_type =
    float;
  _actuation_type actuation;

  // setters for named parameter idiom
  Type & set__actuation(
    const float & _arg)
  {
    this->actuation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages::msg::Pidsignal_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages::msg::Pidsignal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages::msg::Pidsignal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages::msg::Pidsignal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages::msg::Pidsignal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages::msg::Pidsignal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages::msg::Pidsignal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages::msg::Pidsignal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages::msg::Pidsignal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages::msg::Pidsignal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages__msg__Pidsignal
    std::shared_ptr<messages::msg::Pidsignal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages__msg__Pidsignal
    std::shared_ptr<messages::msg::Pidsignal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pidsignal_ & other) const
  {
    if (this->actuation != other.actuation) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pidsignal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pidsignal_

// alias to use template instance with default allocator
using Pidsignal =
  messages::msg::Pidsignal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace messages

#endif  // MESSAGES__MSG__DETAIL__PIDSIGNAL__STRUCT_HPP_
