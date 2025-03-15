//Simple program to add, subtract, multiple, divide any 2 numbers (not float datatypes.)

#include <iostream> 
#include <string>
#include <thread>
#include <chrono>

// Functions
int addnumbers(int a, int b) {
	int addans = a + b;
	std::cout << "The answer is: " << addans << std::endl;
	return addans;
}

int subtractnumbers(int m, int n) {
	int subans = m - n;
	std::cout << "The answer is: " << subans << std::endl;
	return subans;
}

int dividenumbers(int o, int p) {
	int divideans = o / p;
	std::cout << "The answer is " <<  divideans << std::endl;
	return divideans;
}

int multiplynumbers(int v, int c) {
	int multiplyans = v * c;
	std::cout << "The answer is " << multiplyans << std::endl;
	return multiplyans;
}

//Entry Point
int main() {
	int x, y;
	std::cout << "[x] Please enter the first number: " << std::endl;
	std::cin >> x;
	std::cout << "[y] Please enter the second number: " << std::endl;
	std::cin >> y;
	std::cout << R"#(
What would you like to do?
|  1. add  |  2. subtract  | 3. multiply  | 4. divide  |)#" << std::endl;
	         
	int input;
	std::cin >> input;

	//The operation starts here
	if (input == 1) {
		addnumbers(x, y);
		std::cout << "Closing in 10 seconds! " << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(10));;
	}
	else if (input == 2) {
		subtractnumbers(x, y);
		std::cout << "Closing in 10 seconds! " << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(10));
	}
	else if (input == 3) {
		multiplynumbers(x, y);
		std::cout << "Closing in 10 seconds! " << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(10));
	}
	else if (input == 4) {
		dividenumbers(x, y);
		std::cout << "Closing in 10 seconds! " << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(10));
	}
	else {
		std::cout << "Please enter a valid option" << std::endl;
		std::cout << "Closing in 10 seconds! " << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(10));
	}
}
