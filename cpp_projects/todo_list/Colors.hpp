#pragma once 
#include <iostream>
#include <string>


namespace Colors {
	struct Color {
		std::string name;
		std::string code;
	};

	inline const Color RESET = {"Reset", "\033[0m"};
	inline const Color BLACK = {"Black", "\033[30m"};
	inline const Color RED = {"Red", "\033[31m"};
	inline const Color GREEN = {"Green", "\033[32m"};
	inline const Color YELLOW = {"Yellow", "\033[33m"};
	inline const Color BLUE = {"Blue", "\033[34m"};
	inline const Color MAGENTA = {"Magenta", "\033[35m"};
	inline const Color CYAN = {"Cyan", "\033[36m"};
	inline const Color WHITE = {"White", "\033[37m"};

	inline void set_text_color(const Color& color) {
		std::cout << color.code;
	}
}


св 