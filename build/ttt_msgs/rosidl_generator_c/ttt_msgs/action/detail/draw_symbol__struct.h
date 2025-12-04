// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ttt_msgs:action/DrawSymbol.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ttt_msgs/action/draw_symbol.h"


#ifndef TTT_MSGS__ACTION__DETAIL__DRAW_SYMBOL__STRUCT_H_
#define TTT_MSGS__ACTION__DETAIL__DRAW_SYMBOL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/DrawSymbol in the package ttt_msgs.
typedef struct ttt_msgs__action__DrawSymbol_Goal
{
  uint8_t cell_index;
  /// 1 = X, 2 = O
  int8_t symbol;
} ttt_msgs__action__DrawSymbol_Goal;

// Struct for a sequence of ttt_msgs__action__DrawSymbol_Goal.
typedef struct ttt_msgs__action__DrawSymbol_Goal__Sequence
{
  ttt_msgs__action__DrawSymbol_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ttt_msgs__action__DrawSymbol_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/DrawSymbol in the package ttt_msgs.
typedef struct ttt_msgs__action__DrawSymbol_Result
{
  bool success;
  rosidl_runtime_c__String message;
} ttt_msgs__action__DrawSymbol_Result;

// Struct for a sequence of ttt_msgs__action__DrawSymbol_Result.
typedef struct ttt_msgs__action__DrawSymbol_Result__Sequence
{
  ttt_msgs__action__DrawSymbol_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ttt_msgs__action__DrawSymbol_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/DrawSymbol in the package ttt_msgs.
typedef struct ttt_msgs__action__DrawSymbol_Feedback
{
  /// 0.0 .. 1.0
  float progress;
} ttt_msgs__action__DrawSymbol_Feedback;

// Struct for a sequence of ttt_msgs__action__DrawSymbol_Feedback.
typedef struct ttt_msgs__action__DrawSymbol_Feedback__Sequence
{
  ttt_msgs__action__DrawSymbol_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ttt_msgs__action__DrawSymbol_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ttt_msgs/action/detail/draw_symbol__struct.h"

/// Struct defined in action/DrawSymbol in the package ttt_msgs.
typedef struct ttt_msgs__action__DrawSymbol_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ttt_msgs__action__DrawSymbol_Goal goal;
} ttt_msgs__action__DrawSymbol_SendGoal_Request;

// Struct for a sequence of ttt_msgs__action__DrawSymbol_SendGoal_Request.
typedef struct ttt_msgs__action__DrawSymbol_SendGoal_Request__Sequence
{
  ttt_msgs__action__DrawSymbol_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ttt_msgs__action__DrawSymbol_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/DrawSymbol in the package ttt_msgs.
typedef struct ttt_msgs__action__DrawSymbol_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ttt_msgs__action__DrawSymbol_SendGoal_Response;

// Struct for a sequence of ttt_msgs__action__DrawSymbol_SendGoal_Response.
typedef struct ttt_msgs__action__DrawSymbol_SendGoal_Response__Sequence
{
  ttt_msgs__action__DrawSymbol_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ttt_msgs__action__DrawSymbol_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ttt_msgs__action__DrawSymbol_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ttt_msgs__action__DrawSymbol_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/DrawSymbol in the package ttt_msgs.
typedef struct ttt_msgs__action__DrawSymbol_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ttt_msgs__action__DrawSymbol_SendGoal_Request__Sequence request;
  ttt_msgs__action__DrawSymbol_SendGoal_Response__Sequence response;
} ttt_msgs__action__DrawSymbol_SendGoal_Event;

// Struct for a sequence of ttt_msgs__action__DrawSymbol_SendGoal_Event.
typedef struct ttt_msgs__action__DrawSymbol_SendGoal_Event__Sequence
{
  ttt_msgs__action__DrawSymbol_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ttt_msgs__action__DrawSymbol_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/DrawSymbol in the package ttt_msgs.
typedef struct ttt_msgs__action__DrawSymbol_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ttt_msgs__action__DrawSymbol_GetResult_Request;

// Struct for a sequence of ttt_msgs__action__DrawSymbol_GetResult_Request.
typedef struct ttt_msgs__action__DrawSymbol_GetResult_Request__Sequence
{
  ttt_msgs__action__DrawSymbol_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ttt_msgs__action__DrawSymbol_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ttt_msgs/action/detail/draw_symbol__struct.h"

/// Struct defined in action/DrawSymbol in the package ttt_msgs.
typedef struct ttt_msgs__action__DrawSymbol_GetResult_Response
{
  int8_t status;
  ttt_msgs__action__DrawSymbol_Result result;
} ttt_msgs__action__DrawSymbol_GetResult_Response;

// Struct for a sequence of ttt_msgs__action__DrawSymbol_GetResult_Response.
typedef struct ttt_msgs__action__DrawSymbol_GetResult_Response__Sequence
{
  ttt_msgs__action__DrawSymbol_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ttt_msgs__action__DrawSymbol_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ttt_msgs__action__DrawSymbol_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ttt_msgs__action__DrawSymbol_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/DrawSymbol in the package ttt_msgs.
typedef struct ttt_msgs__action__DrawSymbol_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ttt_msgs__action__DrawSymbol_GetResult_Request__Sequence request;
  ttt_msgs__action__DrawSymbol_GetResult_Response__Sequence response;
} ttt_msgs__action__DrawSymbol_GetResult_Event;

// Struct for a sequence of ttt_msgs__action__DrawSymbol_GetResult_Event.
typedef struct ttt_msgs__action__DrawSymbol_GetResult_Event__Sequence
{
  ttt_msgs__action__DrawSymbol_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ttt_msgs__action__DrawSymbol_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ttt_msgs/action/detail/draw_symbol__struct.h"

/// Struct defined in action/DrawSymbol in the package ttt_msgs.
typedef struct ttt_msgs__action__DrawSymbol_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ttt_msgs__action__DrawSymbol_Feedback feedback;
} ttt_msgs__action__DrawSymbol_FeedbackMessage;

// Struct for a sequence of ttt_msgs__action__DrawSymbol_FeedbackMessage.
typedef struct ttt_msgs__action__DrawSymbol_FeedbackMessage__Sequence
{
  ttt_msgs__action__DrawSymbol_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ttt_msgs__action__DrawSymbol_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TTT_MSGS__ACTION__DETAIL__DRAW_SYMBOL__STRUCT_H_
