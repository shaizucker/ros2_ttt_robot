// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ttt_msgs:action/DrawSymbol.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ttt_msgs/action/draw_symbol.hpp"


#ifndef TTT_MSGS__ACTION__DETAIL__DRAW_SYMBOL__BUILDER_HPP_
#define TTT_MSGS__ACTION__DETAIL__DRAW_SYMBOL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ttt_msgs/action/detail/draw_symbol__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ttt_msgs
{

namespace action
{

namespace builder
{

class Init_DrawSymbol_Goal_symbol
{
public:
  explicit Init_DrawSymbol_Goal_symbol(::ttt_msgs::action::DrawSymbol_Goal & msg)
  : msg_(msg)
  {}
  ::ttt_msgs::action::DrawSymbol_Goal symbol(::ttt_msgs::action::DrawSymbol_Goal::_symbol_type arg)
  {
    msg_.symbol = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ttt_msgs::action::DrawSymbol_Goal msg_;
};

class Init_DrawSymbol_Goal_cell_index
{
public:
  Init_DrawSymbol_Goal_cell_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrawSymbol_Goal_symbol cell_index(::ttt_msgs::action::DrawSymbol_Goal::_cell_index_type arg)
  {
    msg_.cell_index = std::move(arg);
    return Init_DrawSymbol_Goal_symbol(msg_);
  }

private:
  ::ttt_msgs::action::DrawSymbol_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ttt_msgs::action::DrawSymbol_Goal>()
{
  return ttt_msgs::action::builder::Init_DrawSymbol_Goal_cell_index();
}

}  // namespace ttt_msgs


namespace ttt_msgs
{

namespace action
{

namespace builder
{

class Init_DrawSymbol_Result_message
{
public:
  explicit Init_DrawSymbol_Result_message(::ttt_msgs::action::DrawSymbol_Result & msg)
  : msg_(msg)
  {}
  ::ttt_msgs::action::DrawSymbol_Result message(::ttt_msgs::action::DrawSymbol_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ttt_msgs::action::DrawSymbol_Result msg_;
};

class Init_DrawSymbol_Result_success
{
public:
  Init_DrawSymbol_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrawSymbol_Result_message success(::ttt_msgs::action::DrawSymbol_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DrawSymbol_Result_message(msg_);
  }

private:
  ::ttt_msgs::action::DrawSymbol_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ttt_msgs::action::DrawSymbol_Result>()
{
  return ttt_msgs::action::builder::Init_DrawSymbol_Result_success();
}

}  // namespace ttt_msgs


namespace ttt_msgs
{

namespace action
{

namespace builder
{

class Init_DrawSymbol_Feedback_progress
{
public:
  Init_DrawSymbol_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ttt_msgs::action::DrawSymbol_Feedback progress(::ttt_msgs::action::DrawSymbol_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ttt_msgs::action::DrawSymbol_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ttt_msgs::action::DrawSymbol_Feedback>()
{
  return ttt_msgs::action::builder::Init_DrawSymbol_Feedback_progress();
}

}  // namespace ttt_msgs


namespace ttt_msgs
{

namespace action
{

namespace builder
{

class Init_DrawSymbol_SendGoal_Request_goal
{
public:
  explicit Init_DrawSymbol_SendGoal_Request_goal(::ttt_msgs::action::DrawSymbol_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ttt_msgs::action::DrawSymbol_SendGoal_Request goal(::ttt_msgs::action::DrawSymbol_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ttt_msgs::action::DrawSymbol_SendGoal_Request msg_;
};

class Init_DrawSymbol_SendGoal_Request_goal_id
{
public:
  Init_DrawSymbol_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrawSymbol_SendGoal_Request_goal goal_id(::ttt_msgs::action::DrawSymbol_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DrawSymbol_SendGoal_Request_goal(msg_);
  }

private:
  ::ttt_msgs::action::DrawSymbol_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ttt_msgs::action::DrawSymbol_SendGoal_Request>()
{
  return ttt_msgs::action::builder::Init_DrawSymbol_SendGoal_Request_goal_id();
}

}  // namespace ttt_msgs


namespace ttt_msgs
{

namespace action
{

namespace builder
{

class Init_DrawSymbol_SendGoal_Response_stamp
{
public:
  explicit Init_DrawSymbol_SendGoal_Response_stamp(::ttt_msgs::action::DrawSymbol_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ttt_msgs::action::DrawSymbol_SendGoal_Response stamp(::ttt_msgs::action::DrawSymbol_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ttt_msgs::action::DrawSymbol_SendGoal_Response msg_;
};

class Init_DrawSymbol_SendGoal_Response_accepted
{
public:
  Init_DrawSymbol_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrawSymbol_SendGoal_Response_stamp accepted(::ttt_msgs::action::DrawSymbol_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_DrawSymbol_SendGoal_Response_stamp(msg_);
  }

private:
  ::ttt_msgs::action::DrawSymbol_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ttt_msgs::action::DrawSymbol_SendGoal_Response>()
{
  return ttt_msgs::action::builder::Init_DrawSymbol_SendGoal_Response_accepted();
}

}  // namespace ttt_msgs


namespace ttt_msgs
{

namespace action
{

namespace builder
{

class Init_DrawSymbol_SendGoal_Event_response
{
public:
  explicit Init_DrawSymbol_SendGoal_Event_response(::ttt_msgs::action::DrawSymbol_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::ttt_msgs::action::DrawSymbol_SendGoal_Event response(::ttt_msgs::action::DrawSymbol_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ttt_msgs::action::DrawSymbol_SendGoal_Event msg_;
};

class Init_DrawSymbol_SendGoal_Event_request
{
public:
  explicit Init_DrawSymbol_SendGoal_Event_request(::ttt_msgs::action::DrawSymbol_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_DrawSymbol_SendGoal_Event_response request(::ttt_msgs::action::DrawSymbol_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DrawSymbol_SendGoal_Event_response(msg_);
  }

private:
  ::ttt_msgs::action::DrawSymbol_SendGoal_Event msg_;
};

class Init_DrawSymbol_SendGoal_Event_info
{
public:
  Init_DrawSymbol_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrawSymbol_SendGoal_Event_request info(::ttt_msgs::action::DrawSymbol_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DrawSymbol_SendGoal_Event_request(msg_);
  }

private:
  ::ttt_msgs::action::DrawSymbol_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ttt_msgs::action::DrawSymbol_SendGoal_Event>()
{
  return ttt_msgs::action::builder::Init_DrawSymbol_SendGoal_Event_info();
}

}  // namespace ttt_msgs


namespace ttt_msgs
{

namespace action
{

namespace builder
{

class Init_DrawSymbol_GetResult_Request_goal_id
{
public:
  Init_DrawSymbol_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ttt_msgs::action::DrawSymbol_GetResult_Request goal_id(::ttt_msgs::action::DrawSymbol_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ttt_msgs::action::DrawSymbol_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ttt_msgs::action::DrawSymbol_GetResult_Request>()
{
  return ttt_msgs::action::builder::Init_DrawSymbol_GetResult_Request_goal_id();
}

}  // namespace ttt_msgs


namespace ttt_msgs
{

namespace action
{

namespace builder
{

class Init_DrawSymbol_GetResult_Response_result
{
public:
  explicit Init_DrawSymbol_GetResult_Response_result(::ttt_msgs::action::DrawSymbol_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ttt_msgs::action::DrawSymbol_GetResult_Response result(::ttt_msgs::action::DrawSymbol_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ttt_msgs::action::DrawSymbol_GetResult_Response msg_;
};

class Init_DrawSymbol_GetResult_Response_status
{
public:
  Init_DrawSymbol_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrawSymbol_GetResult_Response_result status(::ttt_msgs::action::DrawSymbol_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DrawSymbol_GetResult_Response_result(msg_);
  }

private:
  ::ttt_msgs::action::DrawSymbol_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ttt_msgs::action::DrawSymbol_GetResult_Response>()
{
  return ttt_msgs::action::builder::Init_DrawSymbol_GetResult_Response_status();
}

}  // namespace ttt_msgs


namespace ttt_msgs
{

namespace action
{

namespace builder
{

class Init_DrawSymbol_GetResult_Event_response
{
public:
  explicit Init_DrawSymbol_GetResult_Event_response(::ttt_msgs::action::DrawSymbol_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::ttt_msgs::action::DrawSymbol_GetResult_Event response(::ttt_msgs::action::DrawSymbol_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ttt_msgs::action::DrawSymbol_GetResult_Event msg_;
};

class Init_DrawSymbol_GetResult_Event_request
{
public:
  explicit Init_DrawSymbol_GetResult_Event_request(::ttt_msgs::action::DrawSymbol_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_DrawSymbol_GetResult_Event_response request(::ttt_msgs::action::DrawSymbol_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DrawSymbol_GetResult_Event_response(msg_);
  }

private:
  ::ttt_msgs::action::DrawSymbol_GetResult_Event msg_;
};

class Init_DrawSymbol_GetResult_Event_info
{
public:
  Init_DrawSymbol_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrawSymbol_GetResult_Event_request info(::ttt_msgs::action::DrawSymbol_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DrawSymbol_GetResult_Event_request(msg_);
  }

private:
  ::ttt_msgs::action::DrawSymbol_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ttt_msgs::action::DrawSymbol_GetResult_Event>()
{
  return ttt_msgs::action::builder::Init_DrawSymbol_GetResult_Event_info();
}

}  // namespace ttt_msgs


namespace ttt_msgs
{

namespace action
{

namespace builder
{

class Init_DrawSymbol_FeedbackMessage_feedback
{
public:
  explicit Init_DrawSymbol_FeedbackMessage_feedback(::ttt_msgs::action::DrawSymbol_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ttt_msgs::action::DrawSymbol_FeedbackMessage feedback(::ttt_msgs::action::DrawSymbol_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ttt_msgs::action::DrawSymbol_FeedbackMessage msg_;
};

class Init_DrawSymbol_FeedbackMessage_goal_id
{
public:
  Init_DrawSymbol_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrawSymbol_FeedbackMessage_feedback goal_id(::ttt_msgs::action::DrawSymbol_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DrawSymbol_FeedbackMessage_feedback(msg_);
  }

private:
  ::ttt_msgs::action::DrawSymbol_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ttt_msgs::action::DrawSymbol_FeedbackMessage>()
{
  return ttt_msgs::action::builder::Init_DrawSymbol_FeedbackMessage_goal_id();
}

}  // namespace ttt_msgs

#endif  // TTT_MSGS__ACTION__DETAIL__DRAW_SYMBOL__BUILDER_HPP_
