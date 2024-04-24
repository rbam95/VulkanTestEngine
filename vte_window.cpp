#include "vte_window.hpp"

namespace vte

{

	VteWindow::VteWindow(int w, int h, std::string name) : width{ w }, height{ h }, windowName{ name } {

		initWindow();

	}

	VteWindow::~VteWindow() {

		glfwDestroyWindow(window);
		glfwTerminate();
	}

	void VteWindow::initWindow() {

		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);


		window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);


	}





}