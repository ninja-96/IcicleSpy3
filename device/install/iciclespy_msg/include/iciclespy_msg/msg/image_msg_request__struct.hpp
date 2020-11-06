// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iciclespy_msg:msg/ImageMsgRequest.idl
// generated code does not contain a copyright notice

#ifndef ICICLESPY_MSG__MSG__IMAGE_MSG_REQUEST__STRUCT_HPP_
#define ICICLESPY_MSG__MSG__IMAGE_MSG_REQUEST__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iciclespy_msg__msg__ImageMsgRequest __attribute__((deprecated))
#else
# define DEPRECATED__iciclespy_msg__msg__ImageMsgRequest __declspec(deprecated)
#endif

namespace iciclespy_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImageMsgRequest_
{
  using Type = ImageMsgRequest_<ContainerAllocator>;

  explicit ImageMsgRequest_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    (void)_init;
  }

  explicit ImageMsgRequest_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : image(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;

  // setters for named parameter idiom
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iciclespy_msg::msg::ImageMsgRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const iciclespy_msg::msg::ImageMsgRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iciclespy_msg::msg::ImageMsgRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iciclespy_msg::msg::ImageMsgRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iciclespy_msg::msg::ImageMsgRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iciclespy_msg::msg::ImageMsgRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iciclespy_msg::msg::ImageMsgRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iciclespy_msg::msg::ImageMsgRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iciclespy_msg::msg::ImageMsgRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iciclespy_msg::msg::ImageMsgRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iciclespy_msg__msg__ImageMsgRequest
    std::shared_ptr<iciclespy_msg::msg::ImageMsgRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iciclespy_msg__msg__ImageMsgRequest
    std::shared_ptr<iciclespy_msg::msg::ImageMsgRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageMsgRequest_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageMsgRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageMsgRequest_

// alias to use template instance with default allocator
using ImageMsgRequest =
  iciclespy_msg::msg::ImageMsgRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace iciclespy_msg

#endif  // ICICLESPY_MSG__MSG__IMAGE_MSG_REQUEST__STRUCT_HPP_
