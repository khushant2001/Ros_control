// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages:msg/Noise.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES__MSG__DETAIL__NOISE__BUILDER_HPP_
#define MESSAGES__MSG__DETAIL__NOISE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "messages/msg/detail/noise__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace messages
{

namespace msg
{

namespace builder
{

class Init_Noise_noise
{
public:
  Init_Noise_noise()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::messages::msg::Noise noise(::messages::msg::Noise::_noise_type arg)
  {
    msg_.noise = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages::msg::Noise msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages::msg::Noise>()
{
  return messages::msg::builder::Init_Noise_noise();
}

}  // namespace messages

#endif  // MESSAGES__MSG__DETAIL__NOISE__BUILDER_HPP_
