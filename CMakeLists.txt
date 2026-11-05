cmake_minimum_required(VERSION 3.20)

project(MyOpenGLApp LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

# Download GLFW
FetchContent_Declare(
    glfw
    GIT_REPOSITORY https://github.com/glfw/glfw.git
    GIT_TAG 3.4
)

FetchContent_MakeAvailable(glfw)

# Download Dear ImGui
FetchContent_Declare(
    imgui
    GIT_REPOSITORY https://github.com/ocornut/imgui.git
    GIT_TAG v1.91.9b
)

FetchContent_MakeAvailable(imgui)

# Create application
add_executable(MyOpenGLApp
    src/main.cpp
    src/glad.c

    # Dear ImGui core
    ${imgui_SOURCE_DIR}/imgui.cpp
    ${imgui_SOURCE_DIR}/imgui_draw.cpp
    ${imgui_SOURCE_DIR}/imgui_tables.cpp
    ${imgui_SOURCE_DIR}/imgui_widgets.cpp

    # Dear ImGui GLFW + OpenGL backends
    ${imgui_SOURCE_DIR}/backends/imgui_impl_glfw.cpp
    ${imgui_SOURCE_DIR}/backends/imgui_impl_opengl3.cpp
)

# Include directories
target_include_directories(MyOpenGLApp PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${imgui_SOURCE_DIR}
    ${imgui_SOURCE_DIR}/backends
)

# Link libraries
target_link_libraries(MyOpenGLApp PRIVATE
    glfw
)