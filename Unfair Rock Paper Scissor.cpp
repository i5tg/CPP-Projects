//unfair rock paper scissors

#include <iostream>
#include <string>
#include <chrono>
#include <thread>



int main() {
	bool state = true;
	std::this_thread::sleep_for(std::chrono::seconds(2));
	while (state) {
		std::cout << "1. Rock | 2. Paper | 3. Scissor" << std::endl;
		int choice;
		std::cout << "Please enter your choice: ";
		std::cin >> choice;
		if (choice == 1) {
			std::cout << "You chose Rock, But the bot chose Paper!" << std::endl;
			std::cout << "You lose!";
		}
		else if (choice == 2) {
			std::cout << "You chose Paper, But the bot chose Scissor!" << std::endl;
			std::cout << "You lose!";

		}
		else if (choice == 3) {
			std::cout << "You chose Scissor, But the bot chose Rock!" << std::endl;
			std::cout << "You lose!";
		}
		else {
			std::cout << "Please enter a valid input " << std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(2));

		}
	}
