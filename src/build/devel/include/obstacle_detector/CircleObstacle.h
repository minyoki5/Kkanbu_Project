// Generated by gencpp from file obstacle_detector/CircleObstacle.msg
// DO NOT EDIT!


#ifndef OBSTACLE_DETECTOR_MESSAGE_CIRCLEOBSTACLE_H
#define OBSTACLE_DETECTOR_MESSAGE_CIRCLEOBSTACLE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>
#include <geometry_msgs/Vector3.h>

namespace obstacle_detector
{
template <class ContainerAllocator>
struct CircleObstacle_
{
  typedef CircleObstacle_<ContainerAllocator> Type;

  CircleObstacle_()
    : center()
    , velocity()
    , radius(0.0)
    , true_radius(0.0)
    , angle(0.0)
    , c_distance(0.0)
    , min_distance(0.0)  {
    }
  CircleObstacle_(const ContainerAllocator& _alloc)
    : center(_alloc)
    , velocity(_alloc)
    , radius(0.0)
    , true_radius(0.0)
    , angle(0.0)
    , c_distance(0.0)
    , min_distance(0.0)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _center_type;
  _center_type center;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _velocity_type;
  _velocity_type velocity;

   typedef double _radius_type;
  _radius_type radius;

   typedef double _true_radius_type;
  _true_radius_type true_radius;

   typedef double _angle_type;
  _angle_type angle;

   typedef double _c_distance_type;
  _c_distance_type c_distance;

   typedef double _min_distance_type;
  _min_distance_type min_distance;





  typedef boost::shared_ptr< ::obstacle_detector::CircleObstacle_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::obstacle_detector::CircleObstacle_<ContainerAllocator> const> ConstPtr;

}; // struct CircleObstacle_

typedef ::obstacle_detector::CircleObstacle_<std::allocator<void> > CircleObstacle;

typedef boost::shared_ptr< ::obstacle_detector::CircleObstacle > CircleObstaclePtr;
typedef boost::shared_ptr< ::obstacle_detector::CircleObstacle const> CircleObstacleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::obstacle_detector::CircleObstacle_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::obstacle_detector::CircleObstacle_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::obstacle_detector::CircleObstacle_<ContainerAllocator1> & lhs, const ::obstacle_detector::CircleObstacle_<ContainerAllocator2> & rhs)
{
  return lhs.center == rhs.center &&
    lhs.velocity == rhs.velocity &&
    lhs.radius == rhs.radius &&
    lhs.true_radius == rhs.true_radius &&
    lhs.angle == rhs.angle &&
    lhs.c_distance == rhs.c_distance &&
    lhs.min_distance == rhs.min_distance;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::obstacle_detector::CircleObstacle_<ContainerAllocator1> & lhs, const ::obstacle_detector::CircleObstacle_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace obstacle_detector

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::obstacle_detector::CircleObstacle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::obstacle_detector::CircleObstacle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::obstacle_detector::CircleObstacle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::obstacle_detector::CircleObstacle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::obstacle_detector::CircleObstacle_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::obstacle_detector::CircleObstacle_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::obstacle_detector::CircleObstacle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "05bb128df3c5085b6180e623f9261236";
  }

  static const char* value(const ::obstacle_detector::CircleObstacle_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x05bb128df3c5085bULL;
  static const uint64_t static_value2 = 0x6180e623f9261236ULL;
};

template<class ContainerAllocator>
struct DataType< ::obstacle_detector::CircleObstacle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "obstacle_detector/CircleObstacle";
  }

  static const char* value(const ::obstacle_detector::CircleObstacle_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::obstacle_detector::CircleObstacle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Point center      # Central point [m]\n"
"geometry_msgs/Vector3 velocity  # Linear velocity [m/s]\n"
"float64 radius                  # Radius with added margin [m]\n"
"float64 true_radius             # True measured radius [m]\n"
"float64 angle			# Angle of Center [degree]\n"
"float64 c_distance		# Distance from Center [m]\n"
"float64 min_distance		# Min_Distance [m]\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
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

  static const char* value(const ::obstacle_detector::CircleObstacle_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::obstacle_detector::CircleObstacle_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.center);
      stream.next(m.velocity);
      stream.next(m.radius);
      stream.next(m.true_radius);
      stream.next(m.angle);
      stream.next(m.c_distance);
      stream.next(m.min_distance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CircleObstacle_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::obstacle_detector::CircleObstacle_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::obstacle_detector::CircleObstacle_<ContainerAllocator>& v)
  {
    s << indent << "center: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.center);
    s << indent << "velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity);
    s << indent << "radius: ";
    Printer<double>::stream(s, indent + "  ", v.radius);
    s << indent << "true_radius: ";
    Printer<double>::stream(s, indent + "  ", v.true_radius);
    s << indent << "angle: ";
    Printer<double>::stream(s, indent + "  ", v.angle);
    s << indent << "c_distance: ";
    Printer<double>::stream(s, indent + "  ", v.c_distance);
    s << indent << "min_distance: ";
    Printer<double>::stream(s, indent + "  ", v.min_distance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OBSTACLE_DETECTOR_MESSAGE_CIRCLEOBSTACLE_H
