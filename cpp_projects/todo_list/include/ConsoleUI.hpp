#ifndef CONSOLE_UI_HPP
#define CONSOLE_UI_HPP
#include <string>
#include <vector>
#include <iostream>
#include "Colors.hpp"

class ConsoleUI {		// ConsoleUI class for organization
public:
		ConsoleUI();
		void displayHeader();
		void displayStartMenu();
		std::string getUserInput(std::string choice);
		void showTaks(const std::vector<std::string>& tasks);
		void showError(const std::string& message);
};

#endif // CONSOLE_UI_HPP