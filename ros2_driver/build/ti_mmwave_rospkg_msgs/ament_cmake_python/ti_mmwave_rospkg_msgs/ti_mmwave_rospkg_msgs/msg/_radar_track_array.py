# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ti_mmwave_rospkg_msgs:msg/RadarTrackArray.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarTrackArray(type):
    """Metaclass of message 'RadarTrackArray'."""

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
            module = import_type_support('ti_mmwave_rospkg_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ti_mmwave_rospkg_msgs.msg.RadarTrackArray')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_track_array
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_track_array
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_track_array
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_track_array
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_track_array

            from ti_mmwave_rospkg_msgs.msg import RadarTrackContents
            if RadarTrackContents.__class__._TYPE_SUPPORT is None:
                RadarTrackContents.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RadarTrackArray(metaclass=Metaclass_RadarTrackArray):
    """Message class 'RadarTrackArray'."""

    __slots__ = [
        '_frame_id',
        '_stamp',
        '_num_tracks',
        '_track',
    ]

    _fields_and_field_types = {
        'frame_id': 'string',
        'stamp': 'uint32',
        'num_tracks': 'uint32',
        'track': 'sequence<ti_mmwave_rospkg_msgs/RadarTrackContents>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ti_mmwave_rospkg_msgs', 'msg'], 'RadarTrackContents')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.frame_id = kwargs.get('frame_id', str())
        self.stamp = kwargs.get('stamp', int())
        self.num_tracks = kwargs.get('num_tracks', int())
        self.track = kwargs.get('track', [])

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
        if self.frame_id != other.frame_id:
            return False
        if self.stamp != other.stamp:
            return False
        if self.num_tracks != other.num_tracks:
            return False
        if self.track != other.track:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def frame_id(self):
        """Message field 'frame_id'."""
        return self._frame_id

    @frame_id.setter
    def frame_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'frame_id' field must be of type 'str'"
        self._frame_id = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stamp' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'stamp' field must be an unsigned integer in [0, 4294967295]"
        self._stamp = value

    @builtins.property
    def num_tracks(self):
        """Message field 'num_tracks'."""
        return self._num_tracks

    @num_tracks.setter
    def num_tracks(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_tracks' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'num_tracks' field must be an unsigned integer in [0, 4294967295]"
        self._num_tracks = value

    @builtins.property
    def track(self):
        """Message field 'track'."""
        return self._track

    @track.setter
    def track(self, value):
        if __debug__:
            from ti_mmwave_rospkg_msgs.msg import RadarTrackContents
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
                 all(isinstance(v, RadarTrackContents) for v in value) and
                 True), \
                "The 'track' field must be a set or sequence and each value of type 'RadarTrackContents'"
        self._track = value
