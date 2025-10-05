#include "Colors.hpp"
#include <iostream>

int main() {
	std::cout << Colors::RED.code << "This is red color!" << std::endl;
	std::cout << Colors::BLUE.code << "This is blue color!" << std::endl;
	std::cout << Colors::MAGENTA.code << "This is magneta color!" << std::endl;

	return 0;
}