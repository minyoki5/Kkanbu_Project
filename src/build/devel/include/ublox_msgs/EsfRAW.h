// Generated by gencpp from file ublox_msgs/EsfRAW.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_ESFRAW_H
#define UBLOX_MSGS_MESSAGE_ESFRAW_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ublox_msgs/EsfRAW_Block.h>

namespace ublox_msgs
{
template <class ContainerAllocator>
struct EsfRAW_
{
  typedef EsfRAW_<ContainerAllocator> Type;

  EsfRAW_()
    : reserved0()
    , blocks()  {
      reserved0.assign(0);
  }
  EsfRAW_(const ContainerAllocator& _alloc)
    : reserved0()
    , blocks(_alloc)  {
  (void)_alloc;
      reserved0.assign(0);
  }



   typedef boost::array<uint8_t, 4>  _reserved0_type;
  _reserved0_type reserved0;

   typedef std::vector< ::ublox_msgs::EsfRAW_Block_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::ublox_msgs::EsfRAW_Block_<ContainerAllocator> >::other >  _blocks_type;
  _blocks_type blocks;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(CLASS_ID)
  #undef CLASS_ID
#endif
#if defined(_WIN32) && defined(MESSAGE_ID)
  #undef MESSAGE_ID
#endif

  enum {
    CLASS_ID = 16u,
    MESSAGE_ID = 3u,
  };


  typedef boost::shared_ptr< ::ublox_msgs::EsfRAW_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::EsfRAW_<ContainerAllocator> const> ConstPtr;

}; // struct EsfRAW_

typedef ::ublox_msgs::EsfRAW_<std::allocator<void> > EsfRAW;

typedef boost::shared_ptr< ::ublox_msgs::EsfRAW > EsfRAWPtr;
typedef boost::shared_ptr< ::ublox_msgs::EsfRAW const> EsfRAWConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::EsfRAW_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::EsfRAW_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ublox_msgs::EsfRAW_<ContainerAllocator1> & lhs, const ::ublox_msgs::EsfRAW_<ContainerAllocator2> & rhs)
{
  return lhs.reserved0 == rhs.reserved0 &&
    lhs.blocks == rhs.blocks;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ublox_msgs::EsfRAW_<ContainerAllocator1> & lhs, const ::ublox_msgs::EsfRAW_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ublox_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::EsfRAW_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::EsfRAW_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::EsfRAW_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::EsfRAW_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::EsfRAW_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::EsfRAW_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::EsfRAW_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b942250c5ec94c6b6e69c63d82d9a946";
  }

  static const char* value(const ::ublox_msgs::EsfRAW_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb942250c5ec94c6bULL;
  static const uint64_t static_value2 = 0x6e69c63d82d9a946ULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::EsfRAW_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/EsfRAW";
  }

  static const char* value(const ::ublox_msgs::EsfRAW_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::EsfRAW_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ESF-RAW (0x10 0x03)\n"
"# Raw sensor measurements\n"
"#\n"
"# The message contains measurements from the active inertial sensors connected\n"
"# to the GNSS chip. Possible data types for the data field are accelerometer,\n"
"# gyroscope and temperature readings as described in the ESF Measurement Data\n"
"# section. Note that the rate selected in CFG-MSG is not respected. If a\n"
"# positive rate is selected then all raw measurements will be output. \n"
"#\n"
"# Supported on ADR/UDR products.\n"
"#\n"
"\n"
"uint8 CLASS_ID = 16\n"
"uint8 MESSAGE_ID = 3\n"
"\n"
"uint8[4] reserved0 # Reserved\n"
"\n"
"EsfRAW_Block[] blocks\n"
"================================================================================\n"
"MSG: ublox_msgs/EsfRAW_Block\n"
"# See ESF-RAW\n"
"\n"
"uint32 data      # Its scaling and unit depends on the type and is\n"
"                # the same as in ESF-MEAS\n"
"uint32 DATA_FIELD_MASK = 16777215\n"
"uint32 DATA_TYPE_MASK = 4278190080    # type of data \n"
"                                      # (0 = no data; 1..255 = data type)\n"
"uint32 sTtag     # sensor time tag\n"
;
  }

  static const char* value(const ::ublox_msgs::EsfRAW_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::EsfRAW_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.reserved0);
      stream.next(m.blocks);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EsfRAW_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::EsfRAW_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::EsfRAW_<ContainerAllocator>& v)
  {
    s << indent << "reserved0[]" << std::endl;
    for (size_t i = 0; i < v.reserved0.size(); ++i)
    {
      s << indent << "  reserved0[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.reserved0[i]);
    }
    s << indent << "blocks[]" << std::endl;
    for (size_t i = 0; i < v.blocks.size(); ++i)
    {
      s << indent << "  blocks[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ublox_msgs::EsfRAW_Block_<ContainerAllocator> >::stream(s, indent + "    ", v.blocks[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_ESFRAW_H
