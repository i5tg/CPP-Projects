//Bank simulator Beta

#include <iostream>
#include <string>

int balance = 1000;

void DisplayMenu() {
    std::cout << "What would you like to do?" << std::endl;
    std::cout << R"#(1. Balance | 2. Deposit | 3. Withdraw | 4. Exit)#" << std::endl;
}

int main() {
    std::cout << "Welcome to Bank simulator, here you can experience bank simulation. (Author: iostream.inc / i5tg on discord)" << std::endl;
    std::cout << " " << std::endl;

    bool running = true;  

    while (running) {
        DisplayMenu();
        int input;
        std::cin >> input;

        if (input == 1) {
            std::cout << "Your current balance is: " << balance << std::endl;
        }
        else if (input == 2) {
            int val;
            std::cout << "How much money would you like to deposit? " << std::endl;
            std::cin >> val;
            balance += val; 
            std::cout << "Your new balance is " << balance << std::endl;
        }
        else if (input == 3) {
            int with;
            std::cout << "How much would you like to withdraw?" << std::endl;
            std::cin >> with;
            if (with <= balance) {
                balance -= with;  
                std::cout << "Withdrew " << with << ". Your new balance is " << balance << std::endl;
            }
            else {
                std::cout << "Insufficient funds!" << std::endl;
            }
        }
        else if (input == 4) {
            std::cout << "Thank you for using the Bank Simulator!" << std::endl;
            running = false;  
        }
        else {
            std::cout << "Invalid option! Please try again." << std::endl;
        }
    }

    return 0;
}
