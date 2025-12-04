# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ttt_msgs:msg/GameState.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'cells'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GameState(type):
    """Metaclass of message 'GameState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ttt_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ttt_msgs.msg.GameState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__game_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__game_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__game_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__game_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__game_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GameState(metaclass=Metaclass_GameState):
    """Message class 'GameState'."""

    __slots__ = [
        '_cells',
        '_current_player',
        '_status',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'cells': 'int8[9]',
        'current_player': 'int8',
        'status': 'int8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int8'), 9),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'cells' not in kwargs:
            self.cells = numpy.zeros(9, dtype=numpy.int8)
        else:
            self.cells = kwargs.get('cells')
        self.current_player = kwargs.get('current_player', int())
        self.status = kwargs.get('status', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if any(self.cells != other.cells):
            return False
        if self.current_player != other.current_player:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cells(self):
        """Message field 'cells'."""
        return self._cells

    @cells.setter
    def cells(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.int8, \
                    "The 'cells' numpy.ndarray() must have the dtype of 'numpy.int8'"
                assert value.size == 9, \
                    "The 'cells' numpy.ndarray() must have a size of 9"
                self._cells = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 9 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'cells' field must be a set or sequence with length 9 and each value of type 'int' and each integer in [-128, 127]"
        self._cells = numpy.array(value, dtype=numpy.int8)

    @builtins.property
    def current_player(self):
        """Message field 'current_player'."""
        return self._current_player

    @current_player.setter
    def current_player(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'current_player' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'current_player' field must be an integer in [-128, 127]"
        self._current_player = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value
