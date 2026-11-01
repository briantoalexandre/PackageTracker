
# Package Tracker

> A modern desktop application built with C++, OpenGL, and GLFW.

![C++](https://img.shields.io/badge/C++-17-blue?logo=cplusplus)
![OpenGL](https://img.shields.io/badge/OpenGL-3.3-red?logo=opengl)
![GLFW](https://img.shields.io/badge/GLFW-3.4-green)
![CMake](https://img.shields.io/badge/CMake-Build_System-blue?logo=cmake)
![Platform](https://img.shields.io/badge/Platform-Windows-lightgrey?logo=windows)

## Overview

**Package Tracker** is a desktop application developed using C++ and OpenGL.

The project aims to try and recreate Packet Tracert.

## Features

- [x] Native desktop window using GLFW
- [x] OpenGL 3.3 Core rendering context
- [x] GLAD for OpenGL function loading
- [ ] Custom rendering engine
- [ ] Interactive user interface
- [ ] Keyboard and mouse input handling
- [ ] Texture and shader management
- [ ] Cross-platform support

## Technologies

| Technology | Purpose |
|---|---|
| C++17 | Application development |
| OpenGL 3.3 | Graphics rendering |
| GLFW 3.4 | Window and input management |
| GLAD 1 | OpenGL function loading |
| CMake | Build system |
| MSVC | C++ compiler |

## Project Structure

```text
MyDesktopApp/
│
├── include/
│   ├── glad/
│   └── KHR/
│
├── src/
│   ├── main.cpp
│   └── glad.c
│
├── CMakeLists.txt
└── README.md
```

## Requirements

Before building the project, make sure you have installed:

- Visual Studio Code
- Visual Studio Build Tools (MSVC)
- CMake 3.20 or later
- Git
- Windows 10 or Windows 11

## Installation

### 1. Clone the repository

```bash
git clone https://github.com/briantoalexandre/PacketTracker
```

### 2. Navigate to the project

```bash
cd PacketTracker
```

### 3. Configure the project

```powershell
cmake -S . -B build -A x64
```

### 4. Build the application

```powershell
cmake --build build --config Debug
```

### 5. Run the application

```powershell
.\build\Debug\MyDesktopApp.exe
```

## Development

The application uses a traditional desktop application loop:

1. Initialize GLFW.
2. Create the application window.
3. Initialize the OpenGL context using GLAD.
4. Process user input.
5. Render graphics.
6. Update the application.
7. Release resources on exit.

## Dependencies

- [GLFW](https://www.glfw.org/) — Window and input management.
- [GLAD](https://github.com/Dav1dde/glad) — OpenGL function loader.
- [OpenGL](https://www.opengl.org/) — Graphics rendering API.
- [CMake](https://cmake.org/) — Build configuration.

## Screenshots

_Not Available_

## Roadmap

- [x] Initial project setup
- [x] GLFW integration
- [x] GLAD integration
- [ ] OpenGL triangle rendering
- [ ] Shader management system
- [ ] Texture loading
- [ ] UI integration
- [ ] Application settings
- [ ] Release build and packaging

## Author

**Brianto Alexandre**

- GitHub: [@briantoalexandre](https://github.com/briantoalexandre)