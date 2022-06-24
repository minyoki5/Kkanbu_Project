;; Auto-generated. Do not edit!


(when (boundp 'kkanbu_msgs::Obstacles)
  (if (not (find-package "KKANBU_MSGS"))
    (make-package "KKANBU_MSGS"))
  (shadow 'Obstacles (find-package "KKANBU_MSGS")))
(unless (find-package "KKANBU_MSGS::OBSTACLES")
  (make-package "KKANBU_MSGS::OBSTACLES"))

(in-package "ROS")
;;//! \htmlinclude Obstacles.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass kkanbu_msgs::Obstacles
  :super ros::object
  :slots (_header _segments _circles ))

(defmethod kkanbu_msgs::Obstacles
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:segments __segments) (let (r) (dotimes (i 0) (push (instance kkanbu_msgs::SegmentObstacle :init) r)) r))
    ((:circles __circles) (let (r) (dotimes (i 0) (push (instance kkanbu_msgs::CircleObstacle :init) r)) r))
    )
   (send-super :init)
   (setq _header __header)
   (setq _segments __segments)
   (setq _circles __circles)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:segments
   (&rest __segments)
   (if (keywordp (car __segments))
       (send* _segments __segments)
     (progn
       (if __segments (setq _segments (car __segments)))
       _segments)))
  (:circles
   (&rest __circles)
   (if (keywordp (car __circles))
       (send* _circles __circles)
     (progn
       (if __circles (setq _circles (car __circles)))
       _circles)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; kkanbu_msgs/SegmentObstacle[] _segments
    (apply #'+ (send-all _segments :serialization-length)) 4
    ;; kkanbu_msgs/CircleObstacle[] _circles
    (apply #'+ (send-all _circles :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; kkanbu_msgs/SegmentObstacle[] _segments
     (write-long (length _segments) s)
     (dolist (elem _segments)
       (send elem :serialize s)
       )
     ;; kkanbu_msgs/CircleObstacle[] _circles
     (write-long (length _circles) s)
     (dolist (elem _circles)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; kkanbu_msgs/SegmentObstacle[] _segments
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _segments (let (r) (dotimes (i n) (push (instance kkanbu_msgs::SegmentObstacle :init) r)) r))
     (dolist (elem- _segments)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; kkanbu_msgs/CircleObstacle[] _circles
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _circles (let (r) (dotimes (i n) (push (instance kkanbu_msgs::CircleObstacle :init) r)) r))
     (dolist (elem- _circles)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get kkanbu_msgs::Obstacles :md5sum-) "c1be7cf51834f4235fe0d0cdd6461ad5")
(setf (get kkanbu_msgs::Obstacles :datatype-) "kkanbu_msgs/Obstacles")
(setf (get kkanbu_msgs::Obstacles :definition-)
      "Header header

kkanbu_msgs/SegmentObstacle[] segments
kkanbu_msgs/CircleObstacle[] circles

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: kkanbu_msgs/SegmentObstacle
geometry_msgs/Point first_point  # First point of the segment [m]
geometry_msgs/Point last_point   # Last point of the segment [m]

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: kkanbu_msgs/CircleObstacle
geometry_msgs/Point center      # Central point [m]
geometry_msgs/Vector3 velocity  # Linear velocity [m/s]
float64 radius                  # Radius with added margin [m]
float64 true_radius             # True measured radius [m]
float64 angle			# Angle of Center [degree]
float64 c_distance		# Distance from Center [m]
float64 min_distance		# Min_Distance [m]

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
")



(provide :kkanbu_msgs/Obstacles "c1be7cf51834f4235fe0d0cdd6461ad5")

