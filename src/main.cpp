#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>

#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"

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

    // Initialize ImGui
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();

    ImGuiIO& io = ImGui::GetIO();

    ImGui::StyleColorsDark();

    ImGui_ImplGlfw_InitForOpenGL(window, true);
    ImGui_ImplOpenGL3_Init("#version 330");


    // Main application loop
    while (!glfwWindowShouldClose(window)) {
        
        // Handle events
        glfwPollEvents();

        // Background color
        glClearColor(
            0.75f,
            0.72f,
            0.77f,
            1.0f
        );

        // Clear screen
        glClear(GL_COLOR_BUFFER_BIT);

        // Start ImGui frame
        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();

        // Display ImGui demo window
        // ImGui::ShowDemoWindow();

        // Create UI window
        ImGui::Begin("My OpenGL App");

        ImGui::Text("Welcome to my application!");

        if (ImGui::Button("Click me")) {
            std::cout << "Button clicked!" << std::endl;
        }

        static float value = 0.5f;
        ImGui::SliderFloat("Value", &value, 0.0f, 1.0f);

        static bool enabled = false;
        ImGui::Checkbox("Enabled", &enabled);

        ImGui::End();

        // Render ImGui
        ImGui::Render();
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

        // Display frame
        glfwSwapBuffers(window);
    }


    // Cleanup Imgui thingies
    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();

    // Cleanup GLFW window
    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
