// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from messages:msg/Noise.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES__MSG__DETAIL__NOISE__STRUCT_HPP_
#define MESSAGES__MSG__DETAIL__NOISE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__messages__msg__Noise __attribute__((deprecated))
#else
# define DEPRECATED__messages__msg__Noise __declspec(deprecated)
#endif

namespace messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Noise_
{
  using Type = Noise_<ContainerAllocator>;

  explicit Noise_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->noise = 0.0f;
    }
  }

  explicit Noise_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->noise = 0.0f;
    }
  }

  // field types and members
  using _noise_type =
    float;
  _noise_type noise;

  // setters for named parameter idiom
  Type & set__noise(
    const float & _arg)
  {
    this->noise = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    messages::msg::Noise_<ContainerAllocator> *;
  using ConstRawPtr =
    const messages::msg::Noise_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<messages::msg::Noise_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<messages::msg::Noise_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      messages::msg::Noise_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<messages::msg::Noise_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      messages::msg::Noise_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<messages::msg::Noise_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<messages::msg::Noise_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<messages::msg::Noise_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__messages__msg__Noise
    std::shared_ptr<messages::msg::Noise_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__messages__msg__Noise
    std::shared_ptr<messages::msg::Noise_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Noise_ & other) const
  {
    if (this->noise != other.noise) {
      return false;
    }
    return true;
  }
  bool operator!=(const Noise_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Noise_

// alias to use template instance with default allocator
using Noise =
  messages::msg::Noise_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace messages

#endif  // MESSAGES__MSG__DETAIL__NOISE__STRUCT_HPP_
