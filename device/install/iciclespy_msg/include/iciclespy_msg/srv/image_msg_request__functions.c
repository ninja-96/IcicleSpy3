// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from iciclespy_msg:srv/ImageMsgRequest.idl
// generated code does not contain a copyright notice
#include "iciclespy_msg/srv/image_msg_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
iciclespy_msg__srv__ImageMsgRequest_Request__init(iciclespy_msg__srv__ImageMsgRequest_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
iciclespy_msg__srv__ImageMsgRequest_Request__fini(iciclespy_msg__srv__ImageMsgRequest_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

iciclespy_msg__srv__ImageMsgRequest_Request *
iciclespy_msg__srv__ImageMsgRequest_Request__create()
{
  iciclespy_msg__srv__ImageMsgRequest_Request * msg = (iciclespy_msg__srv__ImageMsgRequest_Request *)malloc(sizeof(iciclespy_msg__srv__ImageMsgRequest_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iciclespy_msg__srv__ImageMsgRequest_Request));
  bool success = iciclespy_msg__srv__ImageMsgRequest_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
iciclespy_msg__srv__ImageMsgRequest_Request__destroy(iciclespy_msg__srv__ImageMsgRequest_Request * msg)
{
  if (msg) {
    iciclespy_msg__srv__ImageMsgRequest_Request__fini(msg);
  }
  free(msg);
}


bool
iciclespy_msg__srv__ImageMsgRequest_Request__Sequence__init(iciclespy_msg__srv__ImageMsgRequest_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  iciclespy_msg__srv__ImageMsgRequest_Request * data = NULL;
  if (size) {
    data = (iciclespy_msg__srv__ImageMsgRequest_Request *)calloc(size, sizeof(iciclespy_msg__srv__ImageMsgRequest_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iciclespy_msg__srv__ImageMsgRequest_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iciclespy_msg__srv__ImageMsgRequest_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
iciclespy_msg__srv__ImageMsgRequest_Request__Sequence__fini(iciclespy_msg__srv__ImageMsgRequest_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      iciclespy_msg__srv__ImageMsgRequest_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

iciclespy_msg__srv__ImageMsgRequest_Request__Sequence *
iciclespy_msg__srv__ImageMsgRequest_Request__Sequence__create(size_t size)
{
  iciclespy_msg__srv__ImageMsgRequest_Request__Sequence * array = (iciclespy_msg__srv__ImageMsgRequest_Request__Sequence *)malloc(sizeof(iciclespy_msg__srv__ImageMsgRequest_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = iciclespy_msg__srv__ImageMsgRequest_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
iciclespy_msg__srv__ImageMsgRequest_Request__Sequence__destroy(iciclespy_msg__srv__ImageMsgRequest_Request__Sequence * array)
{
  if (array) {
    iciclespy_msg__srv__ImageMsgRequest_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/image__functions.h"

bool
iciclespy_msg__srv__ImageMsgRequest_Response__init(iciclespy_msg__srv__ImageMsgRequest_Response * msg)
{
  if (!msg) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    iciclespy_msg__srv__ImageMsgRequest_Response__fini(msg);
    return false;
  }
  return true;
}

void
iciclespy_msg__srv__ImageMsgRequest_Response__fini(iciclespy_msg__srv__ImageMsgRequest_Response * msg)
{
  if (!msg) {
    return;
  }
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
}

iciclespy_msg__srv__ImageMsgRequest_Response *
iciclespy_msg__srv__ImageMsgRequest_Response__create()
{
  iciclespy_msg__srv__ImageMsgRequest_Response * msg = (iciclespy_msg__srv__ImageMsgRequest_Response *)malloc(sizeof(iciclespy_msg__srv__ImageMsgRequest_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(iciclespy_msg__srv__ImageMsgRequest_Response));
  bool success = iciclespy_msg__srv__ImageMsgRequest_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
iciclespy_msg__srv__ImageMsgRequest_Response__destroy(iciclespy_msg__srv__ImageMsgRequest_Response * msg)
{
  if (msg) {
    iciclespy_msg__srv__ImageMsgRequest_Response__fini(msg);
  }
  free(msg);
}


bool
iciclespy_msg__srv__ImageMsgRequest_Response__Sequence__init(iciclespy_msg__srv__ImageMsgRequest_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  iciclespy_msg__srv__ImageMsgRequest_Response * data = NULL;
  if (size) {
    data = (iciclespy_msg__srv__ImageMsgRequest_Response *)calloc(size, sizeof(iciclespy_msg__srv__ImageMsgRequest_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = iciclespy_msg__srv__ImageMsgRequest_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        iciclespy_msg__srv__ImageMsgRequest_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
iciclespy_msg__srv__ImageMsgRequest_Response__Sequence__fini(iciclespy_msg__srv__ImageMsgRequest_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      iciclespy_msg__srv__ImageMsgRequest_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

iciclespy_msg__srv__ImageMsgRequest_Response__Sequence *
iciclespy_msg__srv__ImageMsgRequest_Response__Sequence__create(size_t size)
{
  iciclespy_msg__srv__ImageMsgRequest_Response__Sequence * array = (iciclespy_msg__srv__ImageMsgRequest_Response__Sequence *)malloc(sizeof(iciclespy_msg__srv__ImageMsgRequest_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = iciclespy_msg__srv__ImageMsgRequest_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
iciclespy_msg__srv__ImageMsgRequest_Response__Sequence__destroy(iciclespy_msg__srv__ImageMsgRequest_Response__Sequence * array)
{
  if (array) {
    iciclespy_msg__srv__ImageMsgRequest_Response__Sequence__fini(array);
  }
  free(array);
}
