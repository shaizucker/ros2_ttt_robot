// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ttt_msgs:msg/GameState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ttt_msgs/msg/game_state.hpp"


#ifndef TTT_MSGS__MSG__DETAIL__GAME_STATE__BUILDER_HPP_
#define TTT_MSGS__MSG__DETAIL__GAME_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ttt_msgs/msg/detail/game_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ttt_msgs
{

namespace msg
{

namespace builder
{

class Init_GameState_status
{
public:
  explicit Init_GameState_status(::ttt_msgs::msg::GameState & msg)
  : msg_(msg)
  {}
  ::ttt_msgs::msg::GameState status(::ttt_msgs::msg::GameState::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ttt_msgs::msg::GameState msg_;
};

class Init_GameState_current_player
{
public:
  explicit Init_GameState_current_player(::ttt_msgs::msg::GameState & msg)
  : msg_(msg)
  {}
  Init_GameState_status current_player(::ttt_msgs::msg::GameState::_current_player_type arg)
  {
    msg_.current_player = std::move(arg);
    return Init_GameState_status(msg_);
  }

private:
  ::ttt_msgs::msg::GameState msg_;
};

class Init_GameState_cells
{
public:
  Init_GameState_cells()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameState_current_player cells(::ttt_msgs::msg::GameState::_cells_type arg)
  {
    msg_.cells = std::move(arg);
    return Init_GameState_current_player(msg_);
  }

private:
  ::ttt_msgs::msg::GameState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ttt_msgs::msg::GameState>()
{
  return ttt_msgs::msg::builder::Init_GameState_cells();
}

}  // namespace ttt_msgs

#endif  // TTT_MSGS__MSG__DETAIL__GAME_STATE__BUILDER_HPP_
