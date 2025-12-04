// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ttt_msgs:action/DrawSymbol.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ttt_msgs/action/draw_symbol.hpp"


#ifndef TTT_MSGS__ACTION__DETAIL__DRAW_SYMBOL__STRUCT_HPP_
#define TTT_MSGS__ACTION__DETAIL__DRAW_SYMBOL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ttt_msgs__action__DrawSymbol_Goal __attribute__((deprecated))
#else
# define DEPRECATED__ttt_msgs__action__DrawSymbol_Goal __declspec(deprecated)
#endif

namespace ttt_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DrawSymbol_Goal_
{
  using Type = DrawSymbol_Goal_<ContainerAllocator>;

  explicit DrawSymbol_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cell_index = 0;
      this->symbol = 0;
    }
  }

  explicit DrawSymbol_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cell_index = 0;
      this->symbol = 0;
    }
  }

  // field types and members
  using _cell_index_type =
    uint8_t;
  _cell_index_type cell_index;
  using _symbol_type =
    int8_t;
  _symbol_type symbol;

  // setters for named parameter idiom
  Type & set__cell_index(
    const uint8_t & _arg)
  {
    this->cell_index = _arg;
    return *this;
  }
  Type & set__symbol(
    const int8_t & _arg)
  {
    this->symbol = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ttt_msgs::action::DrawSymbol_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const ttt_msgs::action::DrawSymbol_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ttt_msgs::action::DrawSymbol_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ttt_msgs::action::DrawSymbol_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::action::DrawSymbol_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::action::DrawSymbol_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::action::DrawSymbol_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::action::DrawSymbol_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ttt_msgs::action::DrawSymbol_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ttt_msgs::action::DrawSymbol_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ttt_msgs__action__DrawSymbol_Goal
    std::shared_ptr<ttt_msgs::action::DrawSymbol_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ttt_msgs__action__DrawSymbol_Goal
    std::shared_ptr<ttt_msgs::action::DrawSymbol_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawSymbol_Goal_ & other) const
  {
    if (this->cell_index != other.cell_index) {
      return false;
    }
    if (this->symbol != other.symbol) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawSymbol_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawSymbol_Goal_

// alias to use template instance with default allocator
using DrawSymbol_Goal =
  ttt_msgs::action::DrawSymbol_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ttt_msgs


#ifndef _WIN32
# define DEPRECATED__ttt_msgs__action__DrawSymbol_Result __attribute__((deprecated))
#else
# define DEPRECATED__ttt_msgs__action__DrawSymbol_Result __declspec(deprecated)
#endif

namespace ttt_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DrawSymbol_Result_
{
  using Type = DrawSymbol_Result_<ContainerAllocator>;

  explicit DrawSymbol_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit DrawSymbol_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ttt_msgs::action::DrawSymbol_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const ttt_msgs::action::DrawSymbol_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ttt_msgs::action::DrawSymbol_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ttt_msgs::action::DrawSymbol_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::action::DrawSymbol_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::action::DrawSymbol_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::action::DrawSymbol_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::action::DrawSymbol_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ttt_msgs::action::DrawSymbol_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ttt_msgs::action::DrawSymbol_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ttt_msgs__action__DrawSymbol_Result
    std::shared_ptr<ttt_msgs::action::DrawSymbol_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ttt_msgs__action__DrawSymbol_Result
    std::shared_ptr<ttt_msgs::action::DrawSymbol_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawSymbol_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawSymbol_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawSymbol_Result_

// alias to use template instance with default allocator
using DrawSymbol_Result =
  ttt_msgs::action::DrawSymbol_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ttt_msgs


#ifndef _WIN32
# define DEPRECATED__ttt_msgs__action__DrawSymbol_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__ttt_msgs__action__DrawSymbol_Feedback __declspec(deprecated)
#endif

namespace ttt_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DrawSymbol_Feedback_
{
  using Type = DrawSymbol_Feedback_<ContainerAllocator>;

  explicit DrawSymbol_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress = 0.0f;
    }
  }

  explicit DrawSymbol_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress = 0.0f;
    }
  }

  // field types and members
  using _progress_type =
    float;
  _progress_type progress;

  // setters for named parameter idiom
  Type & set__progress(
    const float & _arg)
  {
    this->progress = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ttt_msgs::action::DrawSymbol_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const ttt_msgs::action::DrawSymbol_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ttt_msgs::action::DrawSymbol_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ttt_msgs::action::DrawSymbol_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::action::DrawSymbol_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::action::DrawSymbol_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::action::DrawSymbol_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::action::DrawSymbol_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ttt_msgs::action::DrawSymbol_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ttt_msgs::action::DrawSymbol_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ttt_msgs__action__DrawSymbol_Feedback
    std::shared_ptr<ttt_msgs::action::DrawSymbol_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ttt_msgs__action__DrawSymbol_Feedback
    std::shared_ptr<ttt_msgs::action::DrawSymbol_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawSymbol_Feedback_ & other) const
  {
    if (this->progress != other.progress) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawSymbol_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawSymbol_Feedback_

// alias to use template instance with default allocator
using DrawSymbol_Feedback =
  ttt_msgs::action::DrawSymbol_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ttt_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "ttt_msgs/action/detail/draw_symbol__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ttt_msgs__action__DrawSymbol_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__ttt_msgs__action__DrawSymbol_SendGoal_Request __declspec(deprecated)
#endif

namespace ttt_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DrawSymbol_SendGoal_Request_
{
  using Type = DrawSymbol_SendGoal_Request_<ContainerAllocator>;

  explicit DrawSymbol_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit DrawSymbol_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    ttt_msgs::action::DrawSymbol_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const ttt_msgs::action::DrawSymbol_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ttt_msgs::action::DrawSymbol_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ttt_msgs::action::DrawSymbol_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::action::DrawSymbol_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::action::DrawSymbol_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ttt_msgs__action__DrawSymbol_SendGoal_Request
    std::shared_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ttt_msgs__action__DrawSymbol_SendGoal_Request
    std::shared_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawSymbol_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawSymbol_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawSymbol_SendGoal_Request_

// alias to use template instance with default allocator
using DrawSymbol_SendGoal_Request =
  ttt_msgs::action::DrawSymbol_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ttt_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ttt_msgs__action__DrawSymbol_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__ttt_msgs__action__DrawSymbol_SendGoal_Response __declspec(deprecated)
#endif

namespace ttt_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DrawSymbol_SendGoal_Response_
{
  using Type = DrawSymbol_SendGoal_Response_<ContainerAllocator>;

  explicit DrawSymbol_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit DrawSymbol_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ttt_msgs::action::DrawSymbol_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ttt_msgs::action::DrawSymbol_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::action::DrawSymbol_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::action::DrawSymbol_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ttt_msgs__action__DrawSymbol_SendGoal_Response
    std::shared_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ttt_msgs__action__DrawSymbol_SendGoal_Response
    std::shared_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawSymbol_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawSymbol_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawSymbol_SendGoal_Response_

// alias to use template instance with default allocator
using DrawSymbol_SendGoal_Response =
  ttt_msgs::action::DrawSymbol_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ttt_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ttt_msgs__action__DrawSymbol_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__ttt_msgs__action__DrawSymbol_SendGoal_Event __declspec(deprecated)
#endif

namespace ttt_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DrawSymbol_SendGoal_Event_
{
  using Type = DrawSymbol_SendGoal_Event_<ContainerAllocator>;

  explicit DrawSymbol_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit DrawSymbol_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<ttt_msgs::action::DrawSymbol_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ttt_msgs::action::DrawSymbol_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<ttt_msgs::action::DrawSymbol_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ttt_msgs::action::DrawSymbol_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<ttt_msgs::action::DrawSymbol_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ttt_msgs::action::DrawSymbol_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<ttt_msgs::action::DrawSymbol_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ttt_msgs::action::DrawSymbol_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ttt_msgs::action::DrawSymbol_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const ttt_msgs::action::DrawSymbol_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::action::DrawSymbol_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::action::DrawSymbol_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ttt_msgs__action__DrawSymbol_SendGoal_Event
    std::shared_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ttt_msgs__action__DrawSymbol_SendGoal_Event
    std::shared_ptr<ttt_msgs::action::DrawSymbol_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawSymbol_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawSymbol_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawSymbol_SendGoal_Event_

// alias to use template instance with default allocator
using DrawSymbol_SendGoal_Event =
  ttt_msgs::action::DrawSymbol_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ttt_msgs

namespace ttt_msgs
{

namespace action
{

struct DrawSymbol_SendGoal
{
  using Request = ttt_msgs::action::DrawSymbol_SendGoal_Request;
  using Response = ttt_msgs::action::DrawSymbol_SendGoal_Response;
  using Event = ttt_msgs::action::DrawSymbol_SendGoal_Event;
};

}  // namespace action

}  // namespace ttt_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ttt_msgs__action__DrawSymbol_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__ttt_msgs__action__DrawSymbol_GetResult_Request __declspec(deprecated)
#endif

namespace ttt_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DrawSymbol_GetResult_Request_
{
  using Type = DrawSymbol_GetResult_Request_<ContainerAllocator>;

  explicit DrawSymbol_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit DrawSymbol_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ttt_msgs::action::DrawSymbol_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ttt_msgs::action::DrawSymbol_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ttt_msgs::action::DrawSymbol_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ttt_msgs::action::DrawSymbol_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::action::DrawSymbol_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::action::DrawSymbol_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::action::DrawSymbol_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::action::DrawSymbol_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ttt_msgs::action::DrawSymbol_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ttt_msgs::action::DrawSymbol_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ttt_msgs__action__DrawSymbol_GetResult_Request
    std::shared_ptr<ttt_msgs::action::DrawSymbol_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ttt_msgs__action__DrawSymbol_GetResult_Request
    std::shared_ptr<ttt_msgs::action::DrawSymbol_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawSymbol_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawSymbol_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawSymbol_GetResult_Request_

// alias to use template instance with default allocator
using DrawSymbol_GetResult_Request =
  ttt_msgs::action::DrawSymbol_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ttt_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "ttt_msgs/action/detail/draw_symbol__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ttt_msgs__action__DrawSymbol_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__ttt_msgs__action__DrawSymbol_GetResult_Response __declspec(deprecated)
#endif

namespace ttt_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DrawSymbol_GetResult_Response_
{
  using Type = DrawSymbol_GetResult_Response_<ContainerAllocator>;

  explicit DrawSymbol_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit DrawSymbol_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    ttt_msgs::action::DrawSymbol_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const ttt_msgs::action::DrawSymbol_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ttt_msgs::action::DrawSymbol_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ttt_msgs::action::DrawSymbol_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ttt_msgs::action::DrawSymbol_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ttt_msgs::action::DrawSymbol_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::action::DrawSymbol_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::action::DrawSymbol_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::action::DrawSymbol_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::action::DrawSymbol_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ttt_msgs::action::DrawSymbol_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ttt_msgs::action::DrawSymbol_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ttt_msgs__action__DrawSymbol_GetResult_Response
    std::shared_ptr<ttt_msgs::action::DrawSymbol_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ttt_msgs__action__DrawSymbol_GetResult_Response
    std::shared_ptr<ttt_msgs::action::DrawSymbol_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawSymbol_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawSymbol_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawSymbol_GetResult_Response_

// alias to use template instance with default allocator
using DrawSymbol_GetResult_Response =
  ttt_msgs::action::DrawSymbol_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ttt_msgs


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ttt_msgs__action__DrawSymbol_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__ttt_msgs__action__DrawSymbol_GetResult_Event __declspec(deprecated)
#endif

namespace ttt_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DrawSymbol_GetResult_Event_
{
  using Type = DrawSymbol_GetResult_Event_<ContainerAllocator>;

  explicit DrawSymbol_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit DrawSymbol_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<ttt_msgs::action::DrawSymbol_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ttt_msgs::action::DrawSymbol_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<ttt_msgs::action::DrawSymbol_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ttt_msgs::action::DrawSymbol_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<ttt_msgs::action::DrawSymbol_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ttt_msgs::action::DrawSymbol_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<ttt_msgs::action::DrawSymbol_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ttt_msgs::action::DrawSymbol_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ttt_msgs::action::DrawSymbol_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const ttt_msgs::action::DrawSymbol_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ttt_msgs::action::DrawSymbol_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ttt_msgs::action::DrawSymbol_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::action::DrawSymbol_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::action::DrawSymbol_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::action::DrawSymbol_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::action::DrawSymbol_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ttt_msgs::action::DrawSymbol_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ttt_msgs::action::DrawSymbol_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ttt_msgs__action__DrawSymbol_GetResult_Event
    std::shared_ptr<ttt_msgs::action::DrawSymbol_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ttt_msgs__action__DrawSymbol_GetResult_Event
    std::shared_ptr<ttt_msgs::action::DrawSymbol_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawSymbol_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawSymbol_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawSymbol_GetResult_Event_

// alias to use template instance with default allocator
using DrawSymbol_GetResult_Event =
  ttt_msgs::action::DrawSymbol_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ttt_msgs

namespace ttt_msgs
{

namespace action
{

struct DrawSymbol_GetResult
{
  using Request = ttt_msgs::action::DrawSymbol_GetResult_Request;
  using Response = ttt_msgs::action::DrawSymbol_GetResult_Response;
  using Event = ttt_msgs::action::DrawSymbol_GetResult_Event;
};

}  // namespace action

}  // namespace ttt_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "ttt_msgs/action/detail/draw_symbol__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ttt_msgs__action__DrawSymbol_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__ttt_msgs__action__DrawSymbol_FeedbackMessage __declspec(deprecated)
#endif

namespace ttt_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DrawSymbol_FeedbackMessage_
{
  using Type = DrawSymbol_FeedbackMessage_<ContainerAllocator>;

  explicit DrawSymbol_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit DrawSymbol_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    ttt_msgs::action::DrawSymbol_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const ttt_msgs::action::DrawSymbol_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ttt_msgs::action::DrawSymbol_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const ttt_msgs::action::DrawSymbol_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ttt_msgs::action::DrawSymbol_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ttt_msgs::action::DrawSymbol_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::action::DrawSymbol_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::action::DrawSymbol_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ttt_msgs::action::DrawSymbol_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ttt_msgs::action::DrawSymbol_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ttt_msgs::action::DrawSymbol_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ttt_msgs::action::DrawSymbol_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ttt_msgs__action__DrawSymbol_FeedbackMessage
    std::shared_ptr<ttt_msgs::action::DrawSymbol_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ttt_msgs__action__DrawSymbol_FeedbackMessage
    std::shared_ptr<ttt_msgs::action::DrawSymbol_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawSymbol_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawSymbol_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawSymbol_FeedbackMessage_

// alias to use template instance with default allocator
using DrawSymbol_FeedbackMessage =
  ttt_msgs::action::DrawSymbol_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ttt_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace ttt_msgs
{

namespace action
{

struct DrawSymbol
{
  /// The goal message defined in the action definition.
  using Goal = ttt_msgs::action::DrawSymbol_Goal;
  /// The result message defined in the action definition.
  using Result = ttt_msgs::action::DrawSymbol_Result;
  /// The feedback message defined in the action definition.
  using Feedback = ttt_msgs::action::DrawSymbol_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = ttt_msgs::action::DrawSymbol_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = ttt_msgs::action::DrawSymbol_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = ttt_msgs::action::DrawSymbol_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct DrawSymbol DrawSymbol;

}  // namespace action

}  // namespace ttt_msgs

#endif  // TTT_MSGS__ACTION__DETAIL__DRAW_SYMBOL__STRUCT_HPP_
