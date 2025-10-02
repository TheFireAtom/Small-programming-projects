#include <iostream>
#include <fstream>
#include <string>

int main() {

	std::string filename = "example.txt";	// File name

	// Writing to a file
	std::ofstream outFile(filename);
	if (!outFile.is_open()) {
		std::cout << "Failed to open " << filename << " for writing.\n";
		return 1;
	}

	// Write data to the file 
	outFile << "Hello, File!\n";
	outFile << "Line 2: Number = " << 42 << "\n";
	outFile.close();

	// Reading from the file
	std::ifstream inFile(filename);
	if (!inFile.is_open()) {
		std::cout << "Failed to open " << filename << " for reading.\n";
		return 1;
	}

	std::string line;
	std::cout << "File contents:\n";
	while (std::getline(inFile, line)) {
		std::cout << line << "\n";
	}
	inFile.close();

	return 0;
}