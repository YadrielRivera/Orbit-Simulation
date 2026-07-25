cmake_minimum_required(VERSION 3.16)

project(ORBIT)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory("include/")

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/glad.c
    Resources/resource.rc
)

target_link_libraries(${PROJECT_NAME} PRIVATE glfw3)

