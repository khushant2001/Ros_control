// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages:msg/Systemsignal.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES__MSG__DETAIL__SYSTEMSIGNAL__BUILDER_HPP_
#define MESSAGES__MSG__DETAIL__SYSTEMSIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "messages/msg/detail/systemsignal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace messages
{

namespace msg
{

namespace builder
{

class Init_Systemsignal_velocity
{
public:
  explicit Init_Systemsignal_velocity(::messages::msg::Systemsignal & msg)
  : msg_(msg)
  {}
  ::messages::msg::Systemsignal velocity(::messages::msg::Systemsignal::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages::msg::Systemsignal msg_;
};

class Init_Systemsignal_position
{
public:
  Init_Systemsignal_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Systemsignal_velocity position(::messages::msg::Systemsignal::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Systemsignal_velocity(msg_);
  }

private:
  ::messages::msg::Systemsignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages::msg::Systemsignal>()
{
  return messages::msg::builder::Init_Systemsignal_position();
}

}  // namespace messages

#endif  // MESSAGES__MSG__DETAIL__SYSTEMSIGNAL__BUILDER_HPP_
