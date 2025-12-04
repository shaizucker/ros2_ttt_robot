// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ttt_msgs:msg/Move.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ttt_msgs/msg/move.h"


#ifndef TTT_MSGS__MSG__DETAIL__MOVE__FUNCTIONS_H_
#define TTT_MSGS__MSG__DETAIL__MOVE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "ttt_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ttt_msgs/msg/detail/move__struct.h"

/// Initialize msg/Move message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ttt_msgs__msg__Move
 * )) before or use
 * ttt_msgs__msg__Move__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ttt_msgs
bool
ttt_msgs__msg__Move__init(ttt_msgs__msg__Move * msg);

/// Finalize msg/Move message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ttt_msgs
void
ttt_msgs__msg__Move__fini(ttt_msgs__msg__Move * msg);

/// Create msg/Move message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ttt_msgs__msg__Move__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ttt_msgs
ttt_msgs__msg__Move *
ttt_msgs__msg__Move__create(void);

/// Destroy msg/Move message.
/**
 * It calls
 * ttt_msgs__msg__Move__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ttt_msgs
void
ttt_msgs__msg__Move__destroy(ttt_msgs__msg__Move * msg);

/// Check for msg/Move message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ttt_msgs
bool
ttt_msgs__msg__Move__are_equal(const ttt_msgs__msg__Move * lhs, const ttt_msgs__msg__Move * rhs);

/// Copy a msg/Move message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ttt_msgs
bool
ttt_msgs__msg__Move__copy(
  const ttt_msgs__msg__Move * input,
  ttt_msgs__msg__Move * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ttt_msgs
const rosidl_type_hash_t *
ttt_msgs__msg__Move__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ttt_msgs
const rosidl_runtime_c__type_description__TypeDescription *
ttt_msgs__msg__Move__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_ttt_msgs
const rosidl_runtime_c__type_description__TypeSource *
ttt_msgs__msg__Move__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ttt_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
ttt_msgs__msg__Move__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/Move messages.
/**
 * It allocates the memory for the number of elements and calls
 * ttt_msgs__msg__Move__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ttt_msgs
bool
ttt_msgs__msg__Move__Sequence__init(ttt_msgs__msg__Move__Sequence * array, size_t size);

/// Finalize array of msg/Move messages.
/**
 * It calls
 * ttt_msgs__msg__Move__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ttt_msgs
void
ttt_msgs__msg__Move__Sequence__fini(ttt_msgs__msg__Move__Sequence * array);

/// Create array of msg/Move messages.
/**
 * It allocates the memory for the array and calls
 * ttt_msgs__msg__Move__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ttt_msgs
ttt_msgs__msg__Move__Sequence *
ttt_msgs__msg__Move__Sequence__create(size_t size);

/// Destroy array of msg/Move messages.
/**
 * It calls
 * ttt_msgs__msg__Move__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ttt_msgs
void
ttt_msgs__msg__Move__Sequence__destroy(ttt_msgs__msg__Move__Sequence * array);

/// Check for msg/Move message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ttt_msgs
bool
ttt_msgs__msg__Move__Sequence__are_equal(const ttt_msgs__msg__Move__Sequence * lhs, const ttt_msgs__msg__Move__Sequence * rhs);

/// Copy an array of msg/Move messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ttt_msgs
bool
ttt_msgs__msg__Move__Sequence__copy(
  const ttt_msgs__msg__Move__Sequence * input,
  ttt_msgs__msg__Move__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TTT_MSGS__MSG__DETAIL__MOVE__FUNCTIONS_H_
