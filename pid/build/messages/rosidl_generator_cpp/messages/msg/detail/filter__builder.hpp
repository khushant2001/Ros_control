// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from messages:msg/Filter.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES__MSG__DETAIL__FILTER__BUILDER_HPP_
#define MESSAGES__MSG__DETAIL__FILTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "messages/msg/detail/filter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace messages
{

namespace msg
{

namespace builder
{

class Init_Filter_velocity
{
public:
  explicit Init_Filter_velocity(::messages::msg::Filter & msg)
  : msg_(msg)
  {}
  ::messages::msg::Filter velocity(::messages::msg::Filter::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::messages::msg::Filter msg_;
};

class Init_Filter_position
{
public:
  Init_Filter_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Filter_velocity position(::messages::msg::Filter::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Filter_velocity(msg_);
  }

private:
  ::messages::msg::Filter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::messages::msg::Filter>()
{
  return messages::msg::builder::Init_Filter_position();
}

}  // namespace messages

#endif  // MESSAGES__MSG__DETAIL__FILTER__BUILDER_HPP_
