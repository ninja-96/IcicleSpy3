// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from iciclespy_msg:srv/ImageMsgRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "iciclespy_msg/srv/image_msg_request__rosidl_typesupport_introspection_c.h"
#include "iciclespy_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "iciclespy_msg/srv/image_msg_request__functions.h"
#include "iciclespy_msg/srv/image_msg_request__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ImageMsgRequest_Request__rosidl_typesupport_introspection_c__ImageMsgRequest_Request_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iciclespy_msg__srv__ImageMsgRequest_Request__init(message_memory);
}

void ImageMsgRequest_Request__rosidl_typesupport_introspection_c__ImageMsgRequest_Request_fini_function(void * message_memory)
{
  iciclespy_msg__srv__ImageMsgRequest_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ImageMsgRequest_Request__rosidl_typesupport_introspection_c__ImageMsgRequest_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iciclespy_msg__srv__ImageMsgRequest_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ImageMsgRequest_Request__rosidl_typesupport_introspection_c__ImageMsgRequest_Request_message_members = {
  "iciclespy_msg__srv",  // message namespace
  "ImageMsgRequest_Request",  // message name
  1,  // number of fields
  sizeof(iciclespy_msg__srv__ImageMsgRequest_Request),
  ImageMsgRequest_Request__rosidl_typesupport_introspection_c__ImageMsgRequest_Request_message_member_array,  // message members
  ImageMsgRequest_Request__rosidl_typesupport_introspection_c__ImageMsgRequest_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ImageMsgRequest_Request__rosidl_typesupport_introspection_c__ImageMsgRequest_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ImageMsgRequest_Request__rosidl_typesupport_introspection_c__ImageMsgRequest_Request_message_type_support_handle = {
  0,
  &ImageMsgRequest_Request__rosidl_typesupport_introspection_c__ImageMsgRequest_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iciclespy_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iciclespy_msg, srv, ImageMsgRequest_Request)() {
  if (!ImageMsgRequest_Request__rosidl_typesupport_introspection_c__ImageMsgRequest_Request_message_type_support_handle.typesupport_identifier) {
    ImageMsgRequest_Request__rosidl_typesupport_introspection_c__ImageMsgRequest_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ImageMsgRequest_Request__rosidl_typesupport_introspection_c__ImageMsgRequest_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "iciclespy_msg/srv/image_msg_request__rosidl_typesupport_introspection_c.h"
// already included above
// #include "iciclespy_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "iciclespy_msg/srv/image_msg_request__functions.h"
// already included above
// #include "iciclespy_msg/srv/image_msg_request__struct.h"


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ImageMsgRequest_Response__rosidl_typesupport_introspection_c__ImageMsgRequest_Response_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  iciclespy_msg__srv__ImageMsgRequest_Response__init(message_memory);
}

void ImageMsgRequest_Response__rosidl_typesupport_introspection_c__ImageMsgRequest_Response_fini_function(void * message_memory)
{
  iciclespy_msg__srv__ImageMsgRequest_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ImageMsgRequest_Response__rosidl_typesupport_introspection_c__ImageMsgRequest_Response_message_member_array[1] = {
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(iciclespy_msg__srv__ImageMsgRequest_Response, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ImageMsgRequest_Response__rosidl_typesupport_introspection_c__ImageMsgRequest_Response_message_members = {
  "iciclespy_msg__srv",  // message namespace
  "ImageMsgRequest_Response",  // message name
  1,  // number of fields
  sizeof(iciclespy_msg__srv__ImageMsgRequest_Response),
  ImageMsgRequest_Response__rosidl_typesupport_introspection_c__ImageMsgRequest_Response_message_member_array,  // message members
  ImageMsgRequest_Response__rosidl_typesupport_introspection_c__ImageMsgRequest_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ImageMsgRequest_Response__rosidl_typesupport_introspection_c__ImageMsgRequest_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ImageMsgRequest_Response__rosidl_typesupport_introspection_c__ImageMsgRequest_Response_message_type_support_handle = {
  0,
  &ImageMsgRequest_Response__rosidl_typesupport_introspection_c__ImageMsgRequest_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iciclespy_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iciclespy_msg, srv, ImageMsgRequest_Response)() {
  ImageMsgRequest_Response__rosidl_typesupport_introspection_c__ImageMsgRequest_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!ImageMsgRequest_Response__rosidl_typesupport_introspection_c__ImageMsgRequest_Response_message_type_support_handle.typesupport_identifier) {
    ImageMsgRequest_Response__rosidl_typesupport_introspection_c__ImageMsgRequest_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ImageMsgRequest_Response__rosidl_typesupport_introspection_c__ImageMsgRequest_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "iciclespy_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "iciclespy_msg/srv/image_msg_request__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers iciclespy_msg__srv__image_msg_request__rosidl_typesupport_introspection_c__ImageMsgRequest_service_members = {
  "iciclespy_msg__srv",  // service namespace
  "ImageMsgRequest",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // iciclespy_msg__srv__image_msg_request__rosidl_typesupport_introspection_c__ImageMsgRequest_Request_message_type_support_handle,
  NULL  // response message
  // iciclespy_msg__srv__image_msg_request__rosidl_typesupport_introspection_c__ImageMsgRequest_Response_message_type_support_handle
};

static rosidl_service_type_support_t iciclespy_msg__srv__image_msg_request__rosidl_typesupport_introspection_c__ImageMsgRequest_service_type_support_handle = {
  0,
  &iciclespy_msg__srv__image_msg_request__rosidl_typesupport_introspection_c__ImageMsgRequest_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iciclespy_msg, srv, ImageMsgRequest_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iciclespy_msg, srv, ImageMsgRequest_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_iciclespy_msg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iciclespy_msg, srv, ImageMsgRequest)() {
  if (!iciclespy_msg__srv__image_msg_request__rosidl_typesupport_introspection_c__ImageMsgRequest_service_type_support_handle.typesupport_identifier) {
    iciclespy_msg__srv__image_msg_request__rosidl_typesupport_introspection_c__ImageMsgRequest_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)iciclespy_msg__srv__image_msg_request__rosidl_typesupport_introspection_c__ImageMsgRequest_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iciclespy_msg, srv, ImageMsgRequest_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, iciclespy_msg, srv, ImageMsgRequest_Response)()->data;
  }

  return &iciclespy_msg__srv__image_msg_request__rosidl_typesupport_introspection_c__ImageMsgRequest_service_type_support_handle;
}
