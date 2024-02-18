// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from messages:msg/Noise.idl
// generated code does not contain a copyright notice

#ifndef MESSAGES__MSG__DETAIL__NOISE__TRAITS_HPP_
#define MESSAGES__MSG__DETAIL__NOISE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "messages/msg/detail/noise__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const Noise & msg,
  std::ostream & out)
{
  out << "{";
  // member: noise
  {
    out << "noise: ";
    rosidl_generator_traits::value_to_yaml(msg.noise, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Noise & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: noise
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "noise: ";
    rosidl_generator_traits::value_to_yaml(msg.noise, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Noise & msg, bool use_flow_style = false)
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
  const messages::msg::Noise & msg,
  std::ostream & out, size_t indentation = 0)
{
  messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const messages::msg::Noise & msg)
{
  return messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<messages::msg::Noise>()
{
  return "messages::msg::Noise";
}

template<>
inline const char * name<messages::msg::Noise>()
{
  return "messages/msg/Noise";
}

template<>
struct has_fixed_size<messages::msg::Noise>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<messages::msg::Noise>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<messages::msg::Noise>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGES__MSG__DETAIL__NOISE__TRAITS_HPP_
