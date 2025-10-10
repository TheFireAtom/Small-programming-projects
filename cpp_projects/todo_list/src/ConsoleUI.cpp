#include "../include/ConsoleUI"

class ConsoleUI {
public:
	void displayHeader() {
		std::cout << R"(
		======================
		   To-Do List App
		======================
		)" << std::endl;
	}

	void displayStartMenu() {
		Colors::set_text_color(Colors::YELLOW);
		std::cout << "Welcome to the To-Do list! " << std::endl;
		Colors::set_text_color(Colors::CYAN);
		std::cout << "In this app, you can create different lists of task that will be saved as txt files in specified path." << std::endl;
		std::cout << "Also, You will be able to import them" << std::endl;
		std::cout << "If you will add reminders to some task and leave your cmd on, you would get sound notification. " << std::endl;
		Colors::set_text_color(Colors::GREEN);
		std::cout << "So, what do you want to do? " << std::endl;
		Colors::set_text_color(Colors::MAGENTA);
		std::cout << "1. Import task list " << std::endl;
		std::cout << "2. Create new task list" << std::endl;		
	}

}