// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from iciclespy_msg:srv/ImageMsgRequest.idl
// generated code does not contain a copyright notice

#ifndef ICICLESPY_MSG__SRV__IMAGE_MSG_REQUEST__STRUCT_HPP_
#define ICICLESPY_MSG__SRV__IMAGE_MSG_REQUEST__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__iciclespy_msg__srv__ImageMsgRequest_Request __attribute__((deprecated))
#else
# define DEPRECATED__iciclespy_msg__srv__ImageMsgRequest_Request __declspec(deprecated)
#endif

namespace iciclespy_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ImageMsgRequest_Request_
{
  using Type = ImageMsgRequest_Request_<ContainerAllocator>;

  explicit ImageMsgRequest_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ImageMsgRequest_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;

  // setters for named parameter idiom
  Type & set__structure_needs_at_least_one_member(
    const uint8_t & _arg)
  {
    this->structure_needs_at_least_one_member = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    iciclespy_msg::srv::ImageMsgRequest_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const iciclespy_msg::srv::ImageMsgRequest_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iciclespy_msg::srv::ImageMsgRequest_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iciclespy_msg::srv::ImageMsgRequest_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iciclespy_msg::srv::ImageMsgRequest_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iciclespy_msg::srv::ImageMsgRequest_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iciclespy_msg::srv::ImageMsgRequest_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iciclespy_msg::srv::ImageMsgRequest_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iciclespy_msg::srv::ImageMsgRequest_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iciclespy_msg::srv::ImageMsgRequest_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iciclespy_msg__srv__ImageMsgRequest_Request
    std::shared_ptr<iciclespy_msg::srv::ImageMsgRequest_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iciclespy_msg__srv__ImageMsgRequest_Request
    std::shared_ptr<iciclespy_msg::srv::ImageMsgRequest_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageMsgRequest_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageMsgRequest_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageMsgRequest_Request_

// alias to use template instance with default allocator
using ImageMsgRequest_Request =
  iciclespy_msg::srv::ImageMsgRequest_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace iciclespy_msg


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__iciclespy_msg__srv__ImageMsgRequest_Response __attribute__((deprecated))
#else
# define DEPRECATED__iciclespy_msg__srv__ImageMsgRequest_Response __declspec(deprecated)
#endif

namespace iciclespy_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ImageMsgRequest_Response_
{
  using Type = ImageMsgRequest_Response_<ContainerAllocator>;

  explicit ImageMsgRequest_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    (void)_init;
  }

  explicit ImageMsgRequest_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
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
    iciclespy_msg::srv::ImageMsgRequest_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const iciclespy_msg::srv::ImageMsgRequest_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<iciclespy_msg::srv::ImageMsgRequest_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<iciclespy_msg::srv::ImageMsgRequest_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      iciclespy_msg::srv::ImageMsgRequest_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<iciclespy_msg::srv::ImageMsgRequest_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      iciclespy_msg::srv::ImageMsgRequest_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<iciclespy_msg::srv::ImageMsgRequest_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<iciclespy_msg::srv::ImageMsgRequest_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<iciclespy_msg::srv::ImageMsgRequest_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__iciclespy_msg__srv__ImageMsgRequest_Response
    std::shared_ptr<iciclespy_msg::srv::ImageMsgRequest_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__iciclespy_msg__srv__ImageMsgRequest_Response
    std::shared_ptr<iciclespy_msg::srv::ImageMsgRequest_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageMsgRequest_Response_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageMsgRequest_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageMsgRequest_Response_

// alias to use template instance with default allocator
using ImageMsgRequest_Response =
  iciclespy_msg::srv::ImageMsgRequest_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace iciclespy_msg

namespace iciclespy_msg
{

namespace srv
{

struct ImageMsgRequest
{
  using Request = iciclespy_msg::srv::ImageMsgRequest_Request;
  using Response = iciclespy_msg::srv::ImageMsgRequest_Response;
};

}  // namespace srv

}  // namespace iciclespy_msg

#endif  // ICICLESPY_MSG__SRV__IMAGE_MSG_REQUEST__STRUCT_HPP_
