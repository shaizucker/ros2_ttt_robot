// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ttt_msgs:msg/Move.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ttt_msgs/msg/move.hpp"


#ifndef TTT_MSGS__MSG__DETAIL__MOVE__TRAITS_HPP_
#define TTT_MSGS__MSG__DETAIL__MOVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ttt_msgs/msg/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ttt_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Move & msg,
  std::ostream & out)
{
  out << "{";
  // member: cell_index
  {
    out << "cell_index: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_index, out);
    out << ", ";
  }

  // member: player
  {
    out << "player: ";
    rosidl_generator_traits::value_to_yaml(msg.player, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cell_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_index: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_index, out);
    out << "\n";
  }

  // member: player
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "player: ";
    rosidl_generator_traits::value_to_yaml(msg.player, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ttt_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ttt_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ttt_msgs::msg::Move & msg,
  std::ostream & out, size_t indentation = 0)
{
  ttt_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ttt_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ttt_msgs::msg::Move & msg)
{
  return ttt_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ttt_msgs::msg::Move>()
{
  return "ttt_msgs::msg::Move";
}

template<>
inline const char * name<ttt_msgs::msg::Move>()
{
  return "ttt_msgs/msg/Move";
}

template<>
struct has_fixed_size<ttt_msgs::msg::Move>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ttt_msgs::msg::Move>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ttt_msgs::msg::Move>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TTT_MSGS__MSG__DETAIL__MOVE__TRAITS_HPP_
