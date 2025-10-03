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

// Global variables
const float version = 1.0;

struct Color {
	std::string name;
	std::string code;
};

// A collection of common colors using ANSI escape codes
// The codes are strings that the console interprets to change color
const Color RESET    = {"Reset", "\033[0m"};
const Color BLACK    = {"Black", "\033[30m"};
const Color RED      = {"Red", "\033[31m"};
const Color GREEN    = {"Green", "\033[32m"};
const Color YELLOW   = {"Yellow", "\033[33m"};
const Color BLUE     = {"Blue", "\033[34m"};
const Color MAGENTA  = {"Magenta", "\033[35m"};
const Color CYAN     = {"Cyan", "\033[36m"};
const Color WHITE    = {"White", "\033[37m"};

void set_text_color(const Color& color) {
	std::cout << color.code;
}

struct Task
{
	int priority;
	std::string category;
	std::string task;

};

std::vector<Task> taskList;

void startScreen() {
	set_text_color(YELLOW);
	std::cout << "Welcome to the To-Do list! " << std::endl;
	set_text_color(CYAN);
	std::cout << "In this app, you can create different lists of task that will be saved as txt files in specified path." << std::endl;
	std::cout << "Also, You will be able to import them" << std::endl;
	std::cout << "If you will add reminders to some task and leave your cmd on, you would get sound notification. " << std::endl;
	set_text_color(GREEN);
	std::cout << "So, what do you want to do? " << std::endl;
	set_text_color(MAGENTA);
	std::cout << "1. Import task list " << std::endl;
	std::cout << "2. Create new task list" << std::endl;

}

int main() {

	startScreen();


	set_text_color(RESET);
	return 0;
}