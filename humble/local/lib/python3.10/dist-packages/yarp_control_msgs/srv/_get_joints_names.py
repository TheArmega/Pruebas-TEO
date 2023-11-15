# generated from rosidl_generator_py/resource/_idl.py.em
# with input from yarp_control_msgs:srv/GetJointsNames.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'joint_indexes'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetJointsNames_Request(type):
    """Metaclass of message 'GetJointsNames_Request'."""

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
                'yarp_control_msgs.srv.GetJointsNames_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_joints_names__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_joints_names__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_joints_names__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_joints_names__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_joints_names__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetJointsNames_Request(metaclass=Metaclass_GetJointsNames_Request):
    """Message class 'GetJointsNames_Request'."""

    __slots__ = [
        '_joint_indexes',
    ]

    _fields_and_field_types = {
        'joint_indexes': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joint_indexes = array.array('i', kwargs.get('joint_indexes', []))

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
        if self.joint_indexes != other.joint_indexes:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint_indexes(self):
        """Message field 'joint_indexes'."""
        return self._joint_indexes

    @joint_indexes.setter
    def joint_indexes(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'joint_indexes' array.array() must have the type code of 'i'"
            self._joint_indexes = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'joint_indexes' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._joint_indexes = array.array('i', value)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetJointsNames_Response(type):
    """Metaclass of message 'GetJointsNames_Response'."""

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
                'yarp_control_msgs.srv.GetJointsNames_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_joints_names__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_joints_names__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_joints_names__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_joints_names__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_joints_names__response

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


class GetJointsNames_Response(metaclass=Metaclass_GetJointsNames_Response):
    """Message class 'GetJointsNames_Response'."""

    __slots__ = [
        '_names',
        '_response',
        '_opt_descr',
    ]

    _fields_and_field_types = {
        'names': 'sequence<string>',
        'response': 'string',
        'opt_descr': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.names = kwargs.get('names', [])
        self.response = kwargs.get(
            'response', GetJointsNames_Response.RESPONSE__DEFAULT)
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
        if self.names != other.names:
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


class Metaclass_GetJointsNames(type):
    """Metaclass of service 'GetJointsNames'."""

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
                'yarp_control_msgs.srv.GetJointsNames')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_joints_names

            from yarp_control_msgs.srv import _get_joints_names
            if _get_joints_names.Metaclass_GetJointsNames_Request._TYPE_SUPPORT is None:
                _get_joints_names.Metaclass_GetJointsNames_Request.__import_type_support__()
            if _get_joints_names.Metaclass_GetJointsNames_Response._TYPE_SUPPORT is None:
                _get_joints_names.Metaclass_GetJointsNames_Response.__import_type_support__()


class GetJointsNames(metaclass=Metaclass_GetJointsNames):
    from yarp_control_msgs.srv._get_joints_names import GetJointsNames_Request as Request
    from yarp_control_msgs.srv._get_joints_names import GetJointsNames_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
