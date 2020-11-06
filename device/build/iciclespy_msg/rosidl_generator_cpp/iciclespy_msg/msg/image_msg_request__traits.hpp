// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from iciclespy_msg:msg/ImageMsgRequest.idl
// generated code does not contain a copyright notice

#ifndef ICICLESPY_MSG__MSG__IMAGE_MSG_REQUEST__TRAITS_HPP_
#define ICICLESPY_MSG__MSG__IMAGE_MSG_REQUEST__TRAITS_HPP_

#include "iciclespy_msg/msg/image_msg_request__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/image__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<iciclespy_msg::msg::ImageMsgRequest>()
{
  return "iciclespy_msg::msg::ImageMsgRequest";
}

template<>
struct has_fixed_size<iciclespy_msg::msg::ImageMsgRequest>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<iciclespy_msg::msg::ImageMsgRequest>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<iciclespy_msg::msg::ImageMsgRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ICICLESPY_MSG__MSG__IMAGE_MSG_REQUEST__TRAITS_HPP_
