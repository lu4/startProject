cmake_minimum_required(VERSION 3.20)

project(integral)
find_package(OpenCV REQUIRED)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(integral main.cpp)
target_link_libraries(integral ${OpenCV_LIBS})
