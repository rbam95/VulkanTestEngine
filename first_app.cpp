#include "first_app.hpp"

namespace vte 

{

	void FirstApp::run() {

		while (!vteWindow.shouldClose()) {

			glfwPollEvents();

		}

	}



}