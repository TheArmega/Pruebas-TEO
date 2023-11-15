# generated from rosidl_generator_py/resource/_idl.py.em
# with input from yarp_control_msgs:srv/GetVelocity.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetVelocity_Request(type):
    """Metaclass of message 'GetVelocity_Request'."""

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
            module = import_type_support('yarp_control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'yarp_control_msgs.srv.GetVelocity_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_velocity__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_velocity__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_velocity__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_velocity__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_velocity__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetVelocity_Request(metaclass=Metaclass_GetVelocity_Request):
    """Message class 'GetVelocity_Request'."""

    __slots__ = [
        '_names',
    ]

    _fields_and_field_types = {
        'names': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.names = kwargs.get('names', [])

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
        if self.names != other.names:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def names(self):
        """Message field 'names'."""
        return self._names

    @names.setter
    def names(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'names' field must be a set or sequence and each value of type 'str'"
        self._names = value


# Import statements for member types

# Member 'velocities'
import array  # noqa: E402, I100

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetVelocity_Response(type):
    """Metaclass of message 'GetVelocity_Response'."""

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
            module = import_type_support('yarp_control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'yarp_control_msgs.srv.GetVelocity_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_velocity__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_velocity__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_velocity__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_velocity__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_velocity__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RESPONSE__DEFAULT': 'NOT_SPECIFIED',
        }

    @property
    def RESPONSE__DEFAULT(cls):
        """Return default value for message field 'response'."""
        return 'NOT_SPECIFIED'


class GetVelocity_Response(metaclass=Metaclass_GetVelocity_Response):
    """Message class 'GetVelocity_Response'."""

    __slots__ = [
        '_velocities',
        '_response',
        '_opt_descr',
    ]

    _fields_and_field_types = {
        'velocities': 'sequence<double>',
        'response': 'string',
        'opt_descr': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.velocities = array.array('d', kwargs.get('velocities', []))
        self.response = kwargs.get(
            'response', GetVelocity_Response.RESPONSE__DEFAULT)
        self.opt_descr = kwargs.get('opt_descr', str())

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
        if self.velocities != other.velocities:
            return False
        if self.response != other.response:
            return False
        if self.opt_descr != other.opt_descr:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def velocities(self):
        """Message field 'velocities'."""
        return self._velocities

    @velocities.setter
    def velocities(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'velocities' array.array() must have the type code of 'd'"
            self._velocities = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'velocities' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._velocities = array.array('d', value)

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'response' field must be of type 'str'"
        self._response = value

    @builtins.property
    def opt_descr(self):
        """Message field 'opt_descr'."""
        return self._opt_descr

    @opt_descr.setter
    def opt_descr(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'opt_descr' field must be of type 'str'"
        self._opt_descr = value


class Metaclass_GetVelocity(type):
    """Metaclass of service 'GetVelocity'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('yarp_control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'yarp_control_msgs.srv.GetVelocity')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_velocity

            from yarp_control_msgs.srv import _get_velocity
            if _get_velocity.Metaclass_GetVelocity_Request._TYPE_SUPPORT is None:
                _get_velocity.Metaclass_GetVelocity_Request.__import_type_support__()
            if _get_velocity.Metaclass_GetVelocity_Response._TYPE_SUPPORT is None:
                _get_velocity.Metaclass_GetVelocity_Response.__import_type_support__()


class GetVelocity(metaclass=Metaclass_GetVelocity):
    from yarp_control_msgs.srv._get_velocity import GetVelocity_Request as Request
    from yarp_control_msgs.srv._get_velocity import GetVelocity_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
