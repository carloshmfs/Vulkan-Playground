#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class TriangleApplication
{
public:
    void run();

private:
    const uint32_t m_WIDTH = 800;
    const uint32_t m_HEIGHT = 600;

    GLFWwindow* m_window;

    void initWindow();
    void initVulkan();
    void mainLoop();
    void cleanup();
};

