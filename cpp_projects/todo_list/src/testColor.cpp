#include "../include/Colors.hpp"
#include <iostream>

int main() {
	Colors::set_text_color(Colors::RED);
	std::cout << "This is red color!" << std::endl;
	// std::cout << Colors::BLUE.code << "This is blue color!" << std::endl;
	// std::cout << Colors::MAGENTA.code << "This is magneta color!" << std::endl;

	return 0;
}