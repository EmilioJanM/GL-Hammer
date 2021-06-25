#pragma once

#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

class GLFWmanager
{
public:
	GLFWwindow* window;


	void InitializeGLFW();
};

