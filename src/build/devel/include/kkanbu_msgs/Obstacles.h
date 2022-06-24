// Generated by gencpp from file kkanbu_msgs/Obstacles.msg
// DO NOT EDIT!


#ifndef KKANBU_MSGS_MESSAGE_OBSTACLES_H
#define KKANBU_MSGS_MESSAGE_OBSTACLES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <kkanbu_msgs/SegmentObstacle.h>
#include <kkanbu_msgs/CircleObstacle.h>

namespace kkanbu_msgs
{
template <class ContainerAllocator>
struct Obstacles_
{
  typedef Obstacles_<ContainerAllocator> Type;

  Obstacles_()
    : header()
    , segments()
    , circles()  {
    }
  Obstacles_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , segments(_alloc)
    , circles(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::kkanbu_msgs::SegmentObstacle_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kkanbu_msgs::SegmentObstacle_<ContainerAllocator> >::other >  _segments_type;
  _segments_type segments;

   typedef std::vector< ::kkanbu_msgs::CircleObstacle_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::kkanbu_msgs::CircleObstacle_<ContainerAllocator> >::other >  _circles_type;
  _circles_type circles;





  typedef boost::shared_ptr< ::kkanbu_msgs::Obstacles_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kkanbu_msgs::Obstacles_<ContainerAllocator> const> ConstPtr;

}; // struct Obstacles_

typedef ::kkanbu_msgs::Obstacles_<std::allocator<void> > Obstacles;

typedef boost::shared_ptr< ::kkanbu_msgs::Obstacles > ObstaclesPtr;
typedef boost::shared_ptr< ::kkanbu_msgs::Obstacles const> ObstaclesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kkanbu_msgs::Obstacles_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kkanbu_msgs::Obstacles_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kkanbu_msgs::Obstacles_<ContainerAllocator1> & lhs, const ::kkanbu_msgs::Obstacles_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.segments == rhs.segments &&
    lhs.circles == rhs.circles;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kkanbu_msgs::Obstacles_<ContainerAllocator1> & lhs, const ::kkanbu_msgs::Obstacles_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kkanbu_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kkanbu_msgs::Obstacles_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kkanbu_msgs::Obstacles_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kkanbu_msgs::Obstacles_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kkanbu_msgs::Obstacles_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kkanbu_msgs::Obstacles_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kkanbu_msgs::Obstacles_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kkanbu_msgs::Obstacles_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c1be7cf51834f4235fe0d0cdd6461ad5";
  }

  static const char* value(const ::kkanbu_msgs::Obstacles_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc1be7cf51834f423ULL;
  static const uint64_t static_value2 = 0x5fe0d0cdd6461ad5ULL;
};

template<class ContainerAllocator>
struct DataType< ::kkanbu_msgs::Obstacles_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kkanbu_msgs/Obstacles";
  }

  static const char* value(const ::kkanbu_msgs::Obstacles_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kkanbu_msgs::Obstacles_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"kkanbu_msgs/SegmentObstacle[] segments\n"
"kkanbu_msgs/CircleObstacle[] circles\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: kkanbu_msgs/SegmentObstacle\n"
"geometry_msgs/Point first_point  # First point of the segment [m]\n"
"geometry_msgs/Point last_point   # Last point of the segment [m]\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: kkanbu_msgs/CircleObstacle\n"
"geometry_msgs/Point center      # Central point [m]\n"
"geometry_msgs/Vector3 velocity  # Linear velocity [m/s]\n"
"float64 radius                  # Radius with added margin [m]\n"
"float64 true_radius             # True measured radius [m]\n"
"float64 angle			# Angle of Center [degree]\n"
"float64 c_distance		# Distance from Center [m]\n"
"float64 min_distance		# Min_Distance [m]\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::kkanbu_msgs::Obstacles_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kkanbu_msgs::Obstacles_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.segments);
      stream.next(m.circles);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Obstacles_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kkanbu_msgs::Obstacles_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kkanbu_msgs::Obstacles_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "segments[]" << std::endl;
    for (size_t i = 0; i < v.segments.size(); ++i)
    {
      s << indent << "  segments[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kkanbu_msgs::SegmentObstacle_<ContainerAllocator> >::stream(s, indent + "    ", v.segments[i]);
    }
    s << indent << "circles[]" << std::endl;
    for (size_t i = 0; i < v.circles.size(); ++i)
    {
      s << indent << "  circles[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kkanbu_msgs::CircleObstacle_<ContainerAllocator> >::stream(s, indent + "    ", v.circles[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KKANBU_MSGS_MESSAGE_OBSTACLES_H
