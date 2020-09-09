cmake_minimum_required(VERSION 3.10)
project(leetcode)
set(CMAKE_CXX_STANDARD 14)


#src文件
SET(src_root ./src)
AUX_SOURCE_DIRECTORY(${src_root} src_file)

set(HEADER_FILES ./include)
AUX_SOURCE_DIRECTORY(${HEADER_FILES} src_file)

# 寻找OpenCV库
find_package( OpenCV REQUIRED )
if(OpenCV_FOUND)
    MESSAGE( STATUS "OpenCV_INCLUDE_DIRS = ${OpenCV_INCLUDE_DIRS}.")
    include_directories( ${OpenCV_INCLUDE_DIRS} )
    MESSAGE( STATUS "OpenCV_LIBRARIES = ${OpenCV_LIBRARIES}.")
    MESSAGE( STATUS "OpenCV_LIB_VERSION = ${OpenCV_LIB_VERSION}.")
endif()

# 添加头文件
include_directories( ./include)
#设置输出
add_executable(leetcode ${src_file} main.cpp)

# 链接OpenCV库
target_link_libraries( leetcode ${OpenCV_LIBS} )

