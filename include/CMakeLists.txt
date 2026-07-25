cmake_minimum_required(VERSION 3.16)

project(includes VERSION 1.0.0 LANGUAGES CXX)


add_library(glad INTERFACE)
target_include_directories(glad INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/glad")

add_library(glfw INTERFACE)
target_include_directories(glfw INTERFACE "{CMAKE_CURRENT_SOURCE_DIR}/GLFW")

add_library(khr INTERFACE)
target_include_directories(khr INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/KHR")
