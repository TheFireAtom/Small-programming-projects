#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <stdexcept>
#include <sstream>
#include <functional>
#include <chrono>
#include <map>
#include "../include/ConsoleUI.hpp"
#include "../include/Colors.hpp"

// Global app version variable
const float version = 1.0;

int main() {

	ConsoleUI ui;
	ui.displayMenu();

	Colors::set_text_color(Colors::RESET);
	return 0;
}

