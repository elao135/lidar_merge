// Generated by gencpp from file lsm10_v2/difop.msg
// DO NOT EDIT!


#ifndef LSM10_V2_MESSAGE_DIFOP_H
#define LSM10_V2_MESSAGE_DIFOP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace lsm10_v2
{
template <class ContainerAllocator>
struct difop_
{
  typedef difop_<ContainerAllocator> Type;

  difop_()
    : MotorSpeed(0)  {
    }
  difop_(const ContainerAllocator& _alloc)
    : MotorSpeed(0)  {
  (void)_alloc;
    }



   typedef int32_t _MotorSpeed_type;
  _MotorSpeed_type MotorSpeed;





  typedef boost::shared_ptr< ::lsm10_v2::difop_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lsm10_v2::difop_<ContainerAllocator> const> ConstPtr;

}; // struct difop_

typedef ::lsm10_v2::difop_<std::allocator<void> > difop;

typedef boost::shared_ptr< ::lsm10_v2::difop > difopPtr;
typedef boost::shared_ptr< ::lsm10_v2::difop const> difopConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lsm10_v2::difop_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lsm10_v2::difop_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::lsm10_v2::difop_<ContainerAllocator1> & lhs, const ::lsm10_v2::difop_<ContainerAllocator2> & rhs)
{
  return lhs.MotorSpeed == rhs.MotorSpeed;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::lsm10_v2::difop_<ContainerAllocator1> & lhs, const ::lsm10_v2::difop_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace lsm10_v2

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::lsm10_v2::difop_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lsm10_v2::difop_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lsm10_v2::difop_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lsm10_v2::difop_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lsm10_v2::difop_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lsm10_v2::difop_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lsm10_v2::difop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d9089a8f658e468a7d86f8f561e2dfa0";
  }

  static const char* value(const ::lsm10_v2::difop_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd9089a8f658e468aULL;
  static const uint64_t static_value2 = 0x7d86f8f561e2dfa0ULL;
};

template<class ContainerAllocator>
struct DataType< ::lsm10_v2::difop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lsm10_v2/difop";
  }

  static const char* value(const ::lsm10_v2::difop_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lsm10_v2::difop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#float64 Temperature\n"
"#float64 HighPressure\n"
"int32 MotorSpeed\n"
;
  }

  static const char* value(const ::lsm10_v2::difop_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lsm10_v2::difop_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.MotorSpeed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct difop_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lsm10_v2::difop_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lsm10_v2::difop_<ContainerAllocator>& v)
  {
    s << indent << "MotorSpeed: ";
    Printer<int32_t>::stream(s, indent + "  ", v.MotorSpeed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LSM10_V2_MESSAGE_DIFOP_H