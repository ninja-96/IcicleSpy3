// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iciclespy_msg:srv/ImageMsgRequest.idl
// generated code does not contain a copyright notice

#ifndef ICICLESPY_MSG__SRV__IMAGE_MSG_REQUEST__TRAITS_HPP_
#define ICICLESPY_MSG__SRV__IMAGE_MSG_REQUEST__TRAITS_HPP_

#include "iciclespy_msg/srv/image_msg_request__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<iciclespy_msg::srv::ImageMsgRequest_Request>()
{
  return "iciclespy_msg::srv::ImageMsgRequest_Request";
}

template<>
struct has_fixed_size<iciclespy_msg::srv::ImageMsgRequest_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<iciclespy_msg::srv::ImageMsgRequest_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<iciclespy_msg::srv::ImageMsgRequest_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/image__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<iciclespy_msg::srv::ImageMsgRequest_Response>()
{
  return "iciclespy_msg::srv::ImageMsgRequest_Response";
}

template<>
struct has_fixed_size<iciclespy_msg::srv::ImageMsgRequest_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<iciclespy_msg::srv::ImageMsgRequest_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<iciclespy_msg::srv::ImageMsgRequest_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<iciclespy_msg::srv::ImageMsgRequest>()
{
  return "iciclespy_msg::srv::ImageMsgRequest";
}

template<>
struct has_fixed_size<iciclespy_msg::srv::ImageMsgRequest>
  : std::integral_constant<
    bool,
    has_fixed_size<iciclespy_msg::srv::ImageMsgRequest_Request>::value &&
    has_fixed_size<iciclespy_msg::srv::ImageMsgRequest_Response>::value
  >
{
};

template<>
struct has_bounded_size<iciclespy_msg::srv::ImageMsgRequest>
  : std::integral_constant<
    bool,
    has_bounded_size<iciclespy_msg::srv::ImageMsgRequest_Request>::value &&
    has_bounded_size<iciclespy_msg::srv::ImageMsgRequest_Response>::value
  >
{
};

template<>
struct is_service<iciclespy_msg::srv::ImageMsgRequest>
  : std::true_type
{
};

template<>
struct is_service_request<iciclespy_msg::srv::ImageMsgRequest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<iciclespy_msg::srv::ImageMsgRequest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ICICLESPY_MSG__SRV__IMAGE_MSG_REQUEST__TRAITS_HPP_
