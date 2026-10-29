# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ev_08_suction_gripper:msg/SuctionState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SuctionState(type):
    """Metaclass of message 'SuctionState'."""

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
            module = import_type_support('ev_08_suction_gripper')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ev_08_suction_gripper.msg.SuctionState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__suction_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__suction_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__suction_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__suction_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__suction_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SuctionState(metaclass=Metaclass_SuctionState):
    """Message class 'SuctionState'."""

    __slots__ = [
        '_suction_a_on',
        '_suction_b_on',
        '_force_a',
        '_force_b',
        '_status',
    ]

    _fields_and_field_types = {
        'suction_a_on': 'boolean',
        'suction_b_on': 'boolean',
        'force_a': 'float',
        'force_b': 'float',
        'status': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.suction_a_on = kwargs.get('suction_a_on', bool())
        self.suction_b_on = kwargs.get('suction_b_on', bool())
        self.force_a = kwargs.get('force_a', float())
        self.force_b = kwargs.get('force_b', float())
        self.status = kwargs.get('status', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.suction_a_on != other.suction_a_on:
            return False
        if self.suction_b_on != other.suction_b_on:
            return False
        if self.force_a != other.force_a:
            return False
        if self.force_b != other.force_b:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def suction_a_on(self):
        """Message field 'suction_a_on'."""
        return self._suction_a_on

    @suction_a_on.setter
    def suction_a_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'suction_a_on' field must be of type 'bool'"
        self._suction_a_on = value

    @builtins.property
    def suction_b_on(self):
        """Message field 'suction_b_on'."""
        return self._suction_b_on

    @suction_b_on.setter
    def suction_b_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'suction_b_on' field must be of type 'bool'"
        self._suction_b_on = value

    @builtins.property
    def force_a(self):
        """Message field 'force_a'."""
        return self._force_a

    @force_a.setter
    def force_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'force_a' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'force_a' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._force_a = value

    @builtins.property
    def force_b(self):
        """Message field 'force_b'."""
        return self._force_b

    @force_b.setter
    def force_b(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'force_b' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'force_b' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._force_b = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status' field must be of type 'str'"
        self._status = value
