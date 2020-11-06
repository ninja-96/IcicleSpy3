// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iciclespy_msg:srv/ImageMsgRequest.idl
// generated code does not contain a copyright notice

#ifndef ICICLESPY_MSG__SRV__IMAGE_MSG_REQUEST__STRUCT_H_
#define ICICLESPY_MSG__SRV__IMAGE_MSG_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ImageMsgRequest in the package iciclespy_msg.
typedef struct iciclespy_msg__srv__ImageMsgRequest_Request
{
  uint8_t structure_needs_at_least_one_member;
} iciclespy_msg__srv__ImageMsgRequest_Request;

// Struct for a sequence of iciclespy_msg__srv__ImageMsgRequest_Request.
typedef struct iciclespy_msg__srv__ImageMsgRequest_Request__Sequence
{
  iciclespy_msg__srv__ImageMsgRequest_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iciclespy_msg__srv__ImageMsgRequest_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/image__struct.h"

// Struct defined in srv/ImageMsgRequest in the package iciclespy_msg.
typedef struct iciclespy_msg__srv__ImageMsgRequest_Response
{
  sensor_msgs__msg__Image image;
} iciclespy_msg__srv__ImageMsgRequest_Response;

// Struct for a sequence of iciclespy_msg__srv__ImageMsgRequest_Response.
typedef struct iciclespy_msg__srv__ImageMsgRequest_Response__Sequence
{
  iciclespy_msg__srv__ImageMsgRequest_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} iciclespy_msg__srv__ImageMsgRequest_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ICICLESPY_MSG__SRV__IMAGE_MSG_REQUEST__STRUCT_H_
