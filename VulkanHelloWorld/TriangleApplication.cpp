#include "TriangleApplication.h"

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

void TriangleApplication::run()
{
    initWindow();
    initVulkan();
    mainLoop();
    cleanup();
}

void TriangleApplication::initWindow()
{
    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    m_window = glfwCreateWindow(m_WIDTH, m_HEIGHT, "Exemplo ponto com", nullptr, nullptr);
}

void TriangleApplication::initVulkan()
{

}

void TriangleApplication::mainLoop()
{
    while (!glfwWindowShouldClose(m_window)) {
        glfwPollEvents();
    }
}

void TriangleApplication::cleanup()
{
    glfwDestroyWindow(m_window);
    glfwTerminate();
}
