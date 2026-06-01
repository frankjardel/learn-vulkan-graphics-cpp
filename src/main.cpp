#include <iostream>

#include <GLFW/glfw3.h>
#include <glfw_initialization.h>

#include <precomp.h> // for stop showing warning, this file call in CmakeLists.txt
#include <glfw_monitor.h>

std::int32_t main(std::int32_t argc, gsl::zstring *argv)
{
    veng::GlfwInitialization _glfw;

    gsl::not_null<GLFWwindow *> window = glfwCreateWindow(800, 600, "Vulkan Engine", nullptr, nullptr);
    gsl::final_action __cleanup_window([window]
                                       { glfwDestroyWindow(window); });

    gsl::span<GLFWmonitor *> monitors = veng::GetMonitors();
    if (monitors.size() > 1)
    {
        veng::MoveWindowToMonitor(window, monitors[0]);
    }

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }

    return EXIT_SUCCESS;
}
