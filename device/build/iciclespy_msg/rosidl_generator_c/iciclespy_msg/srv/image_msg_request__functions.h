// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from iciclespy_msg:srv/ImageMsgRequest.idl
// generated code does not contain a copyright notice

#ifndef ICICLESPY_MSG__SRV__IMAGE_MSG_REQUEST__FUNCTIONS_H_
#define ICICLESPY_MSG__SRV__IMAGE_MSG_REQUEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "iciclespy_msg/msg/rosidl_generator_c__visibility_control.h"

#include "iciclespy_msg/srv/image_msg_request__struct.h"

/// Initialize srv/ImageMsgRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iciclespy_msg__srv__ImageMsgRequest_Request
 * )) before or use
 * iciclespy_msg__srv__ImageMsgRequest_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iciclespy_msg
bool
iciclespy_msg__srv__ImageMsgRequest_Request__init(iciclespy_msg__srv__ImageMsgRequest_Request * msg);

/// Finalize srv/ImageMsgRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iciclespy_msg
void
iciclespy_msg__srv__ImageMsgRequest_Request__fini(iciclespy_msg__srv__ImageMsgRequest_Request * msg);

/// Create srv/ImageMsgRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iciclespy_msg__srv__ImageMsgRequest_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iciclespy_msg
iciclespy_msg__srv__ImageMsgRequest_Request *
iciclespy_msg__srv__ImageMsgRequest_Request__create();

/// Destroy srv/ImageMsgRequest message.
/**
 * It calls
 * iciclespy_msg__srv__ImageMsgRequest_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iciclespy_msg
void
iciclespy_msg__srv__ImageMsgRequest_Request__destroy(iciclespy_msg__srv__ImageMsgRequest_Request * msg);


/// Initialize array of srv/ImageMsgRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * iciclespy_msg__srv__ImageMsgRequest_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iciclespy_msg
bool
iciclespy_msg__srv__ImageMsgRequest_Request__Sequence__init(iciclespy_msg__srv__ImageMsgRequest_Request__Sequence * array, size_t size);

/// Finalize array of srv/ImageMsgRequest messages.
/**
 * It calls
 * iciclespy_msg__srv__ImageMsgRequest_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iciclespy_msg
void
iciclespy_msg__srv__ImageMsgRequest_Request__Sequence__fini(iciclespy_msg__srv__ImageMsgRequest_Request__Sequence * array);

/// Create array of srv/ImageMsgRequest messages.
/**
 * It allocates the memory for the array and calls
 * iciclespy_msg__srv__ImageMsgRequest_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iciclespy_msg
iciclespy_msg__srv__ImageMsgRequest_Request__Sequence *
iciclespy_msg__srv__ImageMsgRequest_Request__Sequence__create(size_t size);

/// Destroy array of srv/ImageMsgRequest messages.
/**
 * It calls
 * iciclespy_msg__srv__ImageMsgRequest_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iciclespy_msg
void
iciclespy_msg__srv__ImageMsgRequest_Request__Sequence__destroy(iciclespy_msg__srv__ImageMsgRequest_Request__Sequence * array);

/// Initialize srv/ImageMsgRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * iciclespy_msg__srv__ImageMsgRequest_Response
 * )) before or use
 * iciclespy_msg__srv__ImageMsgRequest_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_iciclespy_msg
bool
iciclespy_msg__srv__ImageMsgRequest_Response__init(iciclespy_msg__srv__ImageMsgRequest_Response * msg);

/// Finalize srv/ImageMsgRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iciclespy_msg
void
iciclespy_msg__srv__ImageMsgRequest_Response__fini(iciclespy_msg__srv__ImageMsgRequest_Response * msg);

/// Create srv/ImageMsgRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * iciclespy_msg__srv__ImageMsgRequest_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iciclespy_msg
iciclespy_msg__srv__ImageMsgRequest_Response *
iciclespy_msg__srv__ImageMsgRequest_Response__create();

/// Destroy srv/ImageMsgRequest message.
/**
 * It calls
 * iciclespy_msg__srv__ImageMsgRequest_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iciclespy_msg
void
iciclespy_msg__srv__ImageMsgRequest_Response__destroy(iciclespy_msg__srv__ImageMsgRequest_Response * msg);


/// Initialize array of srv/ImageMsgRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * iciclespy_msg__srv__ImageMsgRequest_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_iciclespy_msg
bool
iciclespy_msg__srv__ImageMsgRequest_Response__Sequence__init(iciclespy_msg__srv__ImageMsgRequest_Response__Sequence * array, size_t size);

/// Finalize array of srv/ImageMsgRequest messages.
/**
 * It calls
 * iciclespy_msg__srv__ImageMsgRequest_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iciclespy_msg
void
iciclespy_msg__srv__ImageMsgRequest_Response__Sequence__fini(iciclespy_msg__srv__ImageMsgRequest_Response__Sequence * array);

/// Create array of srv/ImageMsgRequest messages.
/**
 * It allocates the memory for the array and calls
 * iciclespy_msg__srv__ImageMsgRequest_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_iciclespy_msg
iciclespy_msg__srv__ImageMsgRequest_Response__Sequence *
iciclespy_msg__srv__ImageMsgRequest_Response__Sequence__create(size_t size);

/// Destroy array of srv/ImageMsgRequest messages.
/**
 * It calls
 * iciclespy_msg__srv__ImageMsgRequest_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_iciclespy_msg
void
iciclespy_msg__srv__ImageMsgRequest_Response__Sequence__destroy(iciclespy_msg__srv__ImageMsgRequest_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ICICLESPY_MSG__SRV__IMAGE_MSG_REQUEST__FUNCTIONS_H_
