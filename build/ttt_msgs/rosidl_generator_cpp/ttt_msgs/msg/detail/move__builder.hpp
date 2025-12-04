// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ttt_msgs:msg/Move.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ttt_msgs/msg/move.hpp"


#ifndef TTT_MSGS__MSG__DETAIL__MOVE__BUILDER_HPP_
#define TTT_MSGS__MSG__DETAIL__MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ttt_msgs/msg/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ttt_msgs
{

namespace msg
{

namespace builder
{

class Init_Move_player
{
public:
  explicit Init_Move_player(::ttt_msgs::msg::Move & msg)
  : msg_(msg)
  {}
  ::ttt_msgs::msg::Move player(::ttt_msgs::msg::Move::_player_type arg)
  {
    msg_.player = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ttt_msgs::msg::Move msg_;
};

class Init_Move_cell_index
{
public:
  Init_Move_cell_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_player cell_index(::ttt_msgs::msg::Move::_cell_index_type arg)
  {
    msg_.cell_index = std::move(arg);
    return Init_Move_player(msg_);
  }

private:
  ::ttt_msgs::msg::Move msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ttt_msgs::msg::Move>()
{
  return ttt_msgs::msg::builder::Init_Move_cell_index();
}

}  // namespace ttt_msgs

#endif  // TTT_MSGS__MSG__DETAIL__MOVE__BUILDER_HPP_
