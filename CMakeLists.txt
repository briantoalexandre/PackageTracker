cmake_minimum_required(VERSION 3.20)

project(MyOpenGLApp LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Download GLFW
include(FetchContent)

FetchContent_Declare(
    glfw
    GIT_REPOSITORY https://github.com/glfw/glfw.git
    GIT_TAG 3.4
)

FetchContent_MakeAvailable(glfw)

# Create application
add_executable(MyOpenGLApp
    src/main.cpp
    src/glad.c
)

# Include directories
target_include_directories(MyOpenGLApp PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Link GLFW
target_link_libraries(MyOpenGLApp PRIVATE glfw)
