;; Auto-generated. Do not edit!


(when (boundp 'kkanbu_msgs::SegmentObstacle)
  (if (not (find-package "KKANBU_MSGS"))
    (make-package "KKANBU_MSGS"))
  (shadow 'SegmentObstacle (find-package "KKANBU_MSGS")))
(unless (find-package "KKANBU_MSGS::SEGMENTOBSTACLE")
  (make-package "KKANBU_MSGS::SEGMENTOBSTACLE"))

(in-package "ROS")
;;//! \htmlinclude SegmentObstacle.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass kkanbu_msgs::SegmentObstacle
  :super ros::object
  :slots (_first_point _last_point ))

(defmethod kkanbu_msgs::SegmentObstacle
  (:init
   (&key
    ((:first_point __first_point) (instance geometry_msgs::Point :init))
    ((:last_point __last_point) (instance geometry_msgs::Point :init))
    )
   (send-super :init)
   (setq _first_point __first_point)
   (setq _last_point __last_point)
   self)
  (:first_point
   (&rest __first_point)
   (if (keywordp (car __first_point))
       (send* _first_point __first_point)
     (progn
       (if __first_point (setq _first_point (car __first_point)))
       _first_point)))
  (:last_point
   (&rest __last_point)
   (if (keywordp (car __last_point))
       (send* _last_point __last_point)
     (progn
       (if __last_point (setq _last_point (car __last_point)))
       _last_point)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Point _first_point
    (send _first_point :serialization-length)
    ;; geometry_msgs/Point _last_point
    (send _last_point :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Point _first_point
       (send _first_point :serialize s)
     ;; geometry_msgs/Point _last_point
       (send _last_point :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Point _first_point
     (send _first_point :deserialize buf ptr-) (incf ptr- (send _first_point :serialization-length))
   ;; geometry_msgs/Point _last_point
     (send _last_point :deserialize buf ptr-) (incf ptr- (send _last_point :serialization-length))
   ;;
   self)
  )

(setf (get kkanbu_msgs::SegmentObstacle :md5sum-) "37ecbf7e1053bae89f0770466b37c3c3")
(setf (get kkanbu_msgs::SegmentObstacle :datatype-) "kkanbu_msgs/SegmentObstacle")
(setf (get kkanbu_msgs::SegmentObstacle :definition-)
      "geometry_msgs/Point first_point  # First point of the segment [m]
geometry_msgs/Point last_point   # Last point of the segment [m]

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

")



(provide :kkanbu_msgs/SegmentObstacle "37ecbf7e1053bae89f0770466b37c3c3")


