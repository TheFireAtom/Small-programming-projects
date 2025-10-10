#ifndef COLORS_HEADER_H
#define COLORS_HEADER_H
#include <iostream>
#include <string>

namespace Colors {
	struct Color {
		std::string name;
		std::string code;
	};

	// Deprecated but maybe usefull in the future

	// inline const Color RESET = {"Reset", "\033[0m"};	// all constants need to be inline to avoid multiple instances in files (upgrade g++ version)
	// inline const Color BLACK = {"Black", "\033[30m"};
	// inline const Color RED = {"Red", "\033[31m"};
	// inline const Color GREEN = {"Green", "\033[32m"};
	// inline const Color YELLOW = {"Yellow", "\033[33m"};
	// inline const Color BLUE = {"Blue", "\033[34m"};
	// inline const Color MAGENTA = {"Magenta", "\033[35m"};
	// inline const Color CYAN = {"Cyan", "\033[36m"};
	// inline const Color WHITE = {"White", "\033[37m"};

	// A collection of common colors using ANSI escape codes
	// The codes are strings that the console interprets to change color

	extern const Color RESET;
	extern const Color BLACK;
	extern const Color RED;
	extern const Color GREEN;
	extern const Color YELLOW;
	extern const Color BLUE;
	extern const Color MAGENTA;
	extern const Color CYAN;
	extern const Color WHITE;

	void set_text_color(const Color& color);
}

#endif // COLORS_HEADER_H