// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages:msg/Refsignal.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES__MSG__DETAIL__REFSIGNAL__BUILDER_HPP_
#define MESSAGES__MSG__DETAIL__REFSIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "messages/msg/detail/refsignal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace messages
{

namespace msg
{

namespace builder
{

class Init_Refsignal_setpoint
{
public:
  Init_Refsignal_setpoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::messages::msg::Refsignal setpoint(::messages::msg::Refsignal::_setpoint_type arg)
  {
    msg_.setpoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages::msg::Refsignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages::msg::Refsignal>()
{
  return messages::msg::builder::Init_Refsignal_setpoint();
}

}  // namespace messages

#endif  // MESSAGES__MSG__DETAIL__REFSIGNAL__BUILDER_HPP_
