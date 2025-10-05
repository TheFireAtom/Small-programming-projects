#ifndef CONSOLE_UI_HPP
#define CONSOLE_UI_HPP

#include <string>
#include <vector>

class ConsoleUI {
	public:
		void displayMenu();
		std::string getUserInput();
		void showTaks(const std::vector<std::string>& tasks);
		void showError(const std::string& message);
}

#endif // CONSOLE_UI_HPP