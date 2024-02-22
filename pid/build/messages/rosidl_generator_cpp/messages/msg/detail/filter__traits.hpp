// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from messages:msg/Filter.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES__MSG__DETAIL__FILTER__TRAITS_HPP_
#define MESSAGES__MSG__DETAIL__FILTER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "messages/msg/detail/filter__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const Filter & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Filter & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Filter & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace messages

namespace rosidl_generator_traits
{

[[deprecated("use messages::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const messages::msg::Filter & msg,
  std::ostream & out, size_t indentation = 0)
{
  messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const messages::msg::Filter & msg)
{
  return messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<messages::msg::Filter>()
{
  return "messages::msg::Filter";
}

template<>
inline const char * name<messages::msg::Filter>()
{
  return "messages/msg/Filter";
}

template<>
struct has_fixed_size<messages::msg::Filter>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<messages::msg::Filter>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<messages::msg::Filter>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGES__MSG__DETAIL__FILTER__TRAITS_HPP_
