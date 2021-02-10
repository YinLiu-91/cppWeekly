# CMakeList.txt: 顶层 CMake 项目文件，在此处执行全局配置
# 并包含子项目。
#
cmake_minimum_required (VERSION 3.8)

project ("cpp17CookBook")
set(CMAKE_CXX_STANDARD 17)
# 包含子项目。
add_subdirectory ("cpp17CookBook")
add_subdirectory("cppWeekly-cpp17")
