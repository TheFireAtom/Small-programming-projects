#include "../include/Colors.hpp"

namespace Colors {
	const Color RESET = {"Reset", "\033[0m"};		// all constants need to be inline to avoid multiple instances in files (upgrade g++ version)
	const Color BLACK = {"Black", "\033[30m"};
	const Color RED = {"Red", "\033[31m"};
	const Color GREEN = {"Green", "\033[32m"};
	const Color YELLOW = {"Yellow", "\033[33m"};
	const Color BLUE = {"Blue", "\033[34m"};
	const Color MAGENTA = {"Magenta", "\033[35m"};
	const Color CYAN = {"Cyan", "\033[36m"};
	const Color WHITE = {"White", "\033[37m"};	

	void set_text_color(const Color& color) {
		std::cout << color.code;
	}
}