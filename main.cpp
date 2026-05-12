#include <iostream>
#include "menu.hpp"

int main() {
    int choice;
    do {
        showMenu();
        std::cout << "Enter your choice: ";
        if (!(std::cin >> choice)) break; // Handle non-integer input
        std::cin.ignore();

        switch (choice) {
            case 1:
                encryptString();
                break;
            case 2:
                decryptString();
                break;
            case 3:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice." << std::endl;
        }
    } while (choice != 3);
    return 0;
}