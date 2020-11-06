// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from iciclespy_msg:msg/ImageMsgRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "iciclespy_msg/msg/image_msg_request__rosidl_typesupport_introspection_c.h"
#include "iciclespy_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "iciclespy_msg/msg/image_msg_request__functions.h"
#include "iciclespy_msg/msg/image_msg_request__struct.h"


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ImageMsgRequest__rosidl_typesupport_introspection_c__ImageMsgRequest_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iciclespy_msg__msg__ImageMsgRequest__init(message_memory);
}

void ImageMsgRequest__rosidl_typesupport_introspection_c__ImageMsgRequest_fini_function(void * message_memory)
{
  iciclespy_msg__msg__ImageMsgRequest__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ImageMsgRequest__rosidl_typesupport_introspection_c__ImageMsgRequest_message_member_array[1] = {
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iciclespy_msg__msg__ImageMsgRequest, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ImageMsgRequest__rosidl_typesupport_introspection_c__ImageMsgRequest_message_members = {
  "iciclespy_msg__msg",  // message namespace
  "ImageMsgRequest",  // message name
  1,  // number of fields
  sizeof(iciclespy_msg__msg__ImageMsgRequest),
  ImageMsgRequest__rosidl_typesupport_introspection_c__ImageMsgRequest_message_member_array,  // message members
  ImageMsgRequest__rosidl_typesupport_introspection_c__ImageMsgRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  ImageMsgRequest__rosidl_typesupport_introspection_c__ImageMsgRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ImageMsgRequest__rosidl_typesupport_introspection_c__ImageMsgRequest_message_type_support_handle = {
  0,
  &ImageMsgRequest__rosidl_typesupport_introspection_c__ImageMsgRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iciclespy_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iciclespy_msg, msg, ImageMsgRequest)() {
  ImageMsgRequest__rosidl_typesupport_introspection_c__ImageMsgRequest_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!ImageMsgRequest__rosidl_typesupport_introspection_c__ImageMsgRequest_message_type_support_handle.typesupport_identifier) {
    ImageMsgRequest__rosidl_typesupport_introspection_c__ImageMsgRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ImageMsgRequest__rosidl_typesupport_introspection_c__ImageMsgRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
