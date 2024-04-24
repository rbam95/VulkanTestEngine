#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>


namespace vte {


	class VteWindow {

	public:

		VteWindow(int w, int h, std::string name);
		~VteWindow();

		VteWindow(const VteWindow&) = delete;
		VteWindow &operator=(const VteWindow &) = delete;

		bool shouldClose() { return glfwWindowShouldClose(window); }



	private:

		void initWindow();

		const int width;
		const int height;

		std::string windowName;

		GLFWwindow *window;




	};





}



