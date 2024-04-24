#pragma once

#include "vte_window.hpp"

namespace vte

{

	class FirstApp {

		public:

			static constexpr int WIDTH = 800;

			static constexpr int HEIGHT = 600;

			void run();


		private:

			VteWindow vteWindow{ WIDTH, HEIGHT, "Hello Vulkan!" };

	};






}