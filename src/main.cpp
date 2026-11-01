#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>

// Handle window resizing
void framebuffer_size_callback(
    GLFWwindow* window,
    int width,
    int height)
{
    glViewport(0, 0, width, height);
}

int main()
{   
    // Initialize GLFW
    if (!glfwInit())
    {
        std::cerr << "GLFW initialization failed!\n";
        return -1;
    }

    // Request OpenGL 3.3 Core
    glfwWindowHint(
        GLFW_CONTEXT_VERSION_MAJOR, 3);

    glfwWindowHint(
        GLFW_CONTEXT_VERSION_MINOR, 3);

    glfwWindowHint(
        GLFW_OPENGL_PROFILE,
        GLFW_OPENGL_CORE_PROFILE);

    // Create window
    GLFWwindow* window = glfwCreateWindow(
        1200,
        800,
        "My First OpenGL Application",
        nullptr,
        nullptr
    );

    if (!window)
    {
        std::cerr << "Window creation failed!\n";
        glfwTerminate();
        return -1;
    }

    // Activate OpenGL context
    glfwMakeContextCurrent(window);

    // Initialize GLAD
    if (!gladLoadGLLoader(
        (GLADloadproc)glfwGetProcAddress))
    {
        std::cerr << "GLAD initialization failed!\n";

        glfwDestroyWindow(window);
        glfwTerminate();

        return -1;
    }

    // Set viewport
    glfwSetFramebufferSizeCallback(
        window,
        framebuffer_size_callback
    );

    glViewport(0, 0, 1200, 800);

    // std::cout << "OpenGL initialized successfully!\n";
    // std::cout << "OpenGL version: "
    //           << glGetString(GL_VERSION)
    //           << "\n";

    // Main application loop
    while (!glfwWindowShouldClose(window))
    {
        // Background color
        glClearColor(
            0.7f,
            0.12f,
            0.17f,
            0.1f
        );

        // Clear screen
        glClear(GL_COLOR_BUFFER_BIT);

        // Display frame
        glfwSwapBuffers(window);

        // Handle events
        glfwPollEvents();
    }

    // Cleanup
    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
