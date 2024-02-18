// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from messages:msg/Refsignal.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES__MSG__DETAIL__REFSIGNAL__TRAITS_HPP_
#define MESSAGES__MSG__DETAIL__REFSIGNAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "messages/msg/detail/refsignal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const Refsignal & msg,
  std::ostream & out)
{
  out << "{";
  // member: setpoint
  {
    out << "setpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.setpoint, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Refsignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "setpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.setpoint, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Refsignal & msg, bool use_flow_style = false)
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
  const messages::msg::Refsignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const messages::msg::Refsignal & msg)
{
  return messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<messages::msg::Refsignal>()
{
  return "messages::msg::Refsignal";
}

template<>
inline const char * name<messages::msg::Refsignal>()
{
  return "messages/msg/Refsignal";
}

template<>
struct has_fixed_size<messages::msg::Refsignal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<messages::msg::Refsignal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<messages::msg::Refsignal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGES__MSG__DETAIL__REFSIGNAL__TRAITS_HPP_
