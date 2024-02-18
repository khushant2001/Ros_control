// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from messages:msg/Refsignal.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "messages/msg/detail/refsignal__functions.h"
#include "messages/msg/detail/refsignal__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace messages
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Refsignal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) messages::msg::Refsignal(_init);
}

void Refsignal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<messages::msg::Refsignal *>(message_memory);
  typed_message->~Refsignal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Refsignal_message_member_array[1] = {
  {
    "setpoint",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(messages::msg::Refsignal, setpoint),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Refsignal_message_members = {
  "messages::msg",  // message namespace
  "Refsignal",  // message name
  1,  // number of fields
  sizeof(messages::msg::Refsignal),
  Refsignal_message_member_array,  // message members
  Refsignal_init_function,  // function to initialize message memory (memory has to be allocated)
  Refsignal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Refsignal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Refsignal_message_members,
  get_message_typesupport_handle_function,
  &messages__msg__Refsignal__get_type_hash,
  &messages__msg__Refsignal__get_type_description,
  &messages__msg__Refsignal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace messages


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<messages::msg::Refsignal>()
{
  return &::messages::msg::rosidl_typesupport_introspection_cpp::Refsignal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, messages, msg, Refsignal)() {
  return &::messages::msg::rosidl_typesupport_introspection_cpp::Refsignal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
