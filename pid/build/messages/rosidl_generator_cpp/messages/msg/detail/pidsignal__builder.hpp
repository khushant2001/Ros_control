// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages:msg/Pidsignal.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES__MSG__DETAIL__PIDSIGNAL__BUILDER_HPP_
#define MESSAGES__MSG__DETAIL__PIDSIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "messages/msg/detail/pidsignal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace messages
{

namespace msg
{

namespace builder
{

class Init_Pidsignal_actuation
{
public:
  Init_Pidsignal_actuation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::messages::msg::Pidsignal actuation(::messages::msg::Pidsignal::_actuation_type arg)
  {
    msg_.actuation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages::msg::Pidsignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages::msg::Pidsignal>()
{
  return messages::msg::builder::Init_Pidsignal_actuation();
}

}  // namespace messages

#endif  // MESSAGES__MSG__DETAIL__PIDSIGNAL__BUILDER_HPP_
