#include <iostream>
#include <string>

enum MessedgeType {
	ID,
	VALUE,
	TEXT
}

union MessedgeInfo {
	int id;
	float value;
	char text[50];
}

struct Message {
	MessedgeType type;
	MessedgeInfo info;
}

// Union, enum and struct usage example
 
void process_message(const Message& msg) {
	switch(msg.type) {
		case ID: 
			std::cout << "Recieved ID:" << msg.info.id << std::endl;
			break;
		case VALUE:
            std::cout << "Received Value: " << msg.info.value << std::endl;
            break;
        case TEXT:
            std::cout << "Received Text: " << msg.info.text << std::endl;
            break; 
	}
}

int main() {

	int a = ~5;
	int b = 6 << 1;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << example.c << std::endl;

	Message msg;
	msg.info.id = 5;
	msg.info.value = 3.14;
	msg.info.text = "Hello there!";

	process_message(msg);

	return 0;
}

// 0b11111010
// 0b00000101
// 0b00000110 = 6, but the first bit is negative, so we just have -6 as the answer