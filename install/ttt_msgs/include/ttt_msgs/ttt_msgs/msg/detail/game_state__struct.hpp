// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ttt_msgs:msg/GameState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ttt_msgs/msg/game_state.hpp"


#ifndef TTT_MSGS__MSG__DETAIL__GAME_STATE__STRUCT_HPP_
#define TTT_MSGS__MSG__DETAIL__GAME_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ttt_msgs__msg__GameState __attribute__((deprecated))
#else
# define DEPRECATED__ttt_msgs__msg__GameState __declspec(deprecated)
#endif

namespace ttt_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GameState_
{
  using Type = GameState_<ContainerAllocator>;

  explicit GameState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int8_t, 9>::iterator, int8_t>(this->cells.begin(), this->cells.end(), 0);
      this->current_player = 0;
      this->status = 0;
    }
  }

  explicit GameState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cells(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int8_t, 9>::iterator, int8_t>(this->cells.begin(), this->cells.end(), 0);
      this->current_player = 0;
      this->status = 0;
    }
  }

  // field types and members
  using _cells_type =
    std::array<int8_t, 9>;
  _cells_type cells;
  using _current_player_type =
    int8_t;
  _current_player_type current_player;
  using _status_type =
    int8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__cells(
    const std::array<int8_t, 9> & _arg)
  {
    this->cells = _arg;
    return *this;
  }
  Type & set__current_player(
    const int8_t & _arg)
  {
    this->current_player = _arg;
    return *this;
  }
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ttt_msgs::msg::GameState_<ContainerAllocator> *;
  using ConstRawPtr =
    const ttt_msgs::msg::GameState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ttt_msgs::msg::GameState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ttt_msgs::msg::GameState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::msg::GameState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::msg::GameState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::msg::GameState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::msg::GameState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ttt_msgs::msg::GameState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ttt_msgs::msg::GameState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ttt_msgs__msg__GameState
    std::shared_ptr<ttt_msgs::msg::GameState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ttt_msgs__msg__GameState
    std::shared_ptr<ttt_msgs::msg::GameState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GameState_ & other) const
  {
    if (this->cells != other.cells) {
      return false;
    }
    if (this->current_player != other.current_player) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const GameState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GameState_

// alias to use template instance with default allocator
using GameState =
  ttt_msgs::msg::GameState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ttt_msgs

#endif  // TTT_MSGS__MSG__DETAIL__GAME_STATE__STRUCT_HPP_
