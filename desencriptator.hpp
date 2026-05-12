#ifndef DESENCRIPTATOR_HPP
#define DESENCRIPTATOR_HPP

#include <iostream>
#include <string>

inline void decryptString() {
    std::string input;
    std::cout << "Enter a string to decrypt: ";
    std::getline(std::cin, input);
    std::string decrypted;
    for (char c : input) {
        decrypted += c - 1;
    }
    std::cout << "Decrypted string: " << decrypted << std::endl;
}

#endif