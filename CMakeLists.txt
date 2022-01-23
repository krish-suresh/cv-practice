cmake_minimum_required(VERSION 3.16.3)
project(cv_practice)

set(CMAKE_CXX_STANDARD 17)
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )

add_executable(cv_practice src/sift.cpp)
target_link_libraries( cv_practice ${OpenCV_LIBS} )
