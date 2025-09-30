#include <vector>
#include <iostream>
#include <chrono>
#include <thread>

void indexBasedLoop(std::vector<int>& someNumbers) {
	for (size_t i = 0; i < someNumbers.size(); ++i) {
		if (i == someNumbers.size() - 1) {
			someNumbers.push_back(someNumbers[i] + 10);
		}
		std::cout << someNumbers[i] << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	}
}

void separateVector(std::vector<int>& someNumbers, std::vector<int>& newElements) {
	while (true) {
		for (auto it = someNumbers.begin(); it != someNumbers.end(); ++it) {
			std::cout << *it << std::endl;
			if (std::distance(someNumbers.begin(), it) == someNumbers.size() - 1) {
				newElements.push_back(*it + 10);
			}
	}

		someNumbers.insert(someNumbers.end(), newElements.begin(), newElements.end());

		newElements.clear();

		std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // 1 second delay
	}
	


	// for (int num : someNumbers) {
	// 	std::cout << num << " ";
	// }

	// std::cout << std::endl;
}

int main() {

	std::vector<int> someNumbers = {10, 20, 30, 40, 50};
	std::vector<int> newElements; // for second method 

	// Does not work, because c++ reallocating memory and its causing undefined behavior

	// for (auto it = someNumbers.begin(); it != someNumbers.end(); ++it) {
    // 	if (someNumbers.size() == std::distance(someNumbers.begin(), it) + 1) {
    // 		someNumbers.push_back(*it + 10);
    // 	}
    // 	std::cout << *it << std::endl;
	// }

	// To fix it, we have three basic solutions:

	// SOLUTION 1: Index-Based Loop (standart loop)

	//indexBasedLoop(someNumbers);

	// SOLUTION 2: Create a separate vector to store new elements

	separateVector(someNumbers, newElements);


}