#include "first_app.hpp"


// Std Libraries

#include <cstdlib>
#include <iostream>
#include <stdexcept>


int main()

{

	vte::FirstApp app{};

	try {

		app.run();

	}
	catch (const std::exception& e) {

		std::cerr << e.what() << '/n';

	}

	return EXIT_SUCCESS;



}