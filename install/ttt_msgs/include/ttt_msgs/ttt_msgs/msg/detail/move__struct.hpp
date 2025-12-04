// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ttt_msgs:msg/Move.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ttt_msgs/msg/move.hpp"


#ifndef TTT_MSGS__MSG__DETAIL__MOVE__STRUCT_HPP_
#define TTT_MSGS__MSG__DETAIL__MOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ttt_msgs__msg__Move __attribute__((deprecated))
#else
# define DEPRECATED__ttt_msgs__msg__Move __declspec(deprecated)
#endif

namespace ttt_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Move_
{
  using Type = Move_<ContainerAllocator>;

  explicit Move_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cell_index = 0;
      this->player = 0;
    }
  }

  explicit Move_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cell_index = 0;
      this->player = 0;
    }
  }

  // field types and members
  using _cell_index_type =
    uint8_t;
  _cell_index_type cell_index;
  using _player_type =
    int8_t;
  _player_type player;

  // setters for named parameter idiom
  Type & set__cell_index(
    const uint8_t & _arg)
  {
    this->cell_index = _arg;
    return *this;
  }
  Type & set__player(
    const int8_t & _arg)
  {
    this->player = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ttt_msgs::msg::Move_<ContainerAllocator> *;
  using ConstRawPtr =
    const ttt_msgs::msg::Move_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ttt_msgs::msg::Move_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ttt_msgs::msg::Move_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::msg::Move_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::msg::Move_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::msg::Move_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::msg::Move_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ttt_msgs::msg::Move_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ttt_msgs::msg::Move_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ttt_msgs__msg__Move
    std::shared_ptr<ttt_msgs::msg::Move_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ttt_msgs__msg__Move
    std::shared_ptr<ttt_msgs::msg::Move_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_ & other) const
  {
    if (this->cell_index != other.cell_index) {
      return false;
    }
    if (this->player != other.player) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_

// alias to use template instance with default allocator
using Move =
  ttt_msgs::msg::Move_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ttt_msgs

#endif  // TTT_MSGS__MSG__DETAIL__MOVE__STRUCT_HPP_
