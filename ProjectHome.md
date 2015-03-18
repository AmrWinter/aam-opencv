The Active Appearance Model (AAM) is a generalisation of the widely used Active Shape Model approach, but uses all the information in the image region covered by the target object, rather than just that near modelled edges.

An AAM contains a statistical model of the shape and grey-level appearance of the object of interest which can generalise to almost any valid example. Matching to an image involves finding model parameters which minimise the difference between the image and a synthesised model example, projected into the image. The potentially large number of parameters makes this a difficult problem.

Our Objective is to build a AAM face tracker.

This is  ~~being developed~~ was developed during the Aug-Dec Semester of 2009 under Dr. Radhika Vathsan at BITS Pilani Goa Campus, India

Also look at another project http://code.google.com/p/pam-face-authentication/

```


Get aam-opencv.tar.gz

Edit opencvWebcam.cpp
 -> int opencvWebcam::startCamera() either from Video or Webcam

How to Build
{{{ 
cd build
cmake ..
make
}}}

Two Binaries will be Generated
qt-aamtrainer -> AAM Training
runner -> AAM Fitting


Contact me if you have any problem. And if you improve something, It would be great if you commit back.

```



---

**Video Demos**

Animating a 2D caricature!

> |  <a href='http://www.youtube.com/watch?feature=player_embedded&v=eSS4GFIH94w' target='_blank'><img src='http://img.youtube.com/vi/eSS4GFIH94w/0.jpg' width='425' height=344 /></a>  |
|:------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|

AAM Face Tracking Inverse Compositional Project Out

> |  <a href='http://www.youtube.com/watch?feature=player_embedded&v=v5ylyhITwpA' target='_blank'><img src='http://img.youtube.com/vi/v5ylyhITwpA/0.jpg' width='425' height=344 /></a>  |
|:------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|

AAM Face Training for Generating the Model : Demonstration

> |  <a href='http://www.youtube.com/watch?feature=player_embedded&v=G0xtPWTfFlI' target='_blank'><img src='http://img.youtube.com/vi/G0xtPWTfFlI/0.jpg' width='425' height=344 /></a>  |  <a href='http://www.youtube.com/watch?feature=player_embedded&v=94_8qhJXE8o' target='_blank'><img src='http://img.youtube.com/vi/94_8qhJXE8o/0.jpg' width='425' height=344 /></a>  |
|:------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|:------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|


Lucas Kanade - Inverse Compositional Tracker - 6 Affine Parameters - Robust rejecting Outliers |  Controlling the Mouse Pointer Using a Finger  |

> | <a href='http://www.youtube.com/watch?feature=player_embedded&v=4TYJGvCeeC4' target='_blank'><img src='http://img.youtube.com/vi/4TYJGvCeeC4/0.jpg' width='425' height=344 /></a> | <a href='http://www.youtube.com/watch?feature=player_embedded&v=CwVlcUn6By8' target='_blank'><img src='http://img.youtube.com/vi/CwVlcUn6By8/0.jpg' width='425' height=344 /></a> |
|:----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|:----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|


> T Ishikawa, I Matthews, S Baker, Efficient image alignment with outlier rejection

