// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from iciclespy_msg:msg/ImageMsgRequest.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "iciclespy_msg/msg/image_msg_request__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace iciclespy_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ImageMsgRequest_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) iciclespy_msg::msg::ImageMsgRequest(_init);
}

void ImageMsgRequest_fini_function(void * message_memory)
{
  auto typed_message = static_cast<iciclespy_msg::msg::ImageMsgRequest *>(message_memory);
  typed_message->~ImageMsgRequest();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ImageMsgRequest_message_member_array[1] = {
  {
    "image",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iciclespy_msg::msg::ImageMsgRequest, image),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ImageMsgRequest_message_members = {
  "iciclespy_msg::msg",  // message namespace
  "ImageMsgRequest",  // message name
  1,  // number of fields
  sizeof(iciclespy_msg::msg::ImageMsgRequest),
  ImageMsgRequest_message_member_array,  // message members
  ImageMsgRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  ImageMsgRequest_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ImageMsgRequest_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ImageMsgRequest_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace iciclespy_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<iciclespy_msg::msg::ImageMsgRequest>()
{
  return &::iciclespy_msg::msg::rosidl_typesupport_introspection_cpp::ImageMsgRequest_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, iciclespy_msg, msg, ImageMsgRequest)() {
  return &::iciclespy_msg::msg::rosidl_typesupport_introspection_cpp::ImageMsgRequest_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
