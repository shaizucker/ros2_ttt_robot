// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ttt_msgs:msg/GameState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ttt_msgs/msg/game_state.hpp"


#ifndef TTT_MSGS__MSG__DETAIL__GAME_STATE__TRAITS_HPP_
#define TTT_MSGS__MSG__DETAIL__GAME_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ttt_msgs/msg/detail/game_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ttt_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GameState & msg,
  std::ostream & out)
{
  out << "{";
  // member: cells
  {
    if (msg.cells.size() == 0) {
      out << "cells: []";
    } else {
      out << "cells: [";
      size_t pending_items = msg.cells.size();
      for (auto item : msg.cells) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_player
  {
    out << "current_player: ";
    rosidl_generator_traits::value_to_yaml(msg.current_player, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GameState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cells
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cells.size() == 0) {
      out << "cells: []\n";
    } else {
      out << "cells:\n";
      for (auto item : msg.cells) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current_player
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_player: ";
    rosidl_generator_traits::value_to_yaml(msg.current_player, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GameState & msg, bool use_flow_style = false)
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
  const ttt_msgs::msg::GameState & msg,
  std::ostream & out, size_t indentation = 0)
{
  ttt_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ttt_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ttt_msgs::msg::GameState & msg)
{
  return ttt_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ttt_msgs::msg::GameState>()
{
  return "ttt_msgs::msg::GameState";
}

template<>
inline const char * name<ttt_msgs::msg::GameState>()
{
  return "ttt_msgs/msg/GameState";
}

template<>
struct has_fixed_size<ttt_msgs::msg::GameState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ttt_msgs::msg::GameState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ttt_msgs::msg::GameState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TTT_MSGS__MSG__DETAIL__GAME_STATE__TRAITS_HPP_
