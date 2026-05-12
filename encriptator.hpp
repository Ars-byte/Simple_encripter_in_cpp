#ifndef ENCRIPTATOR_HPP
#define ENCRIPTATOR_HPP

#include <iostream>
#include <string>

inline void encryptString() {
    std::string input;
    std::cout << "Enter a string to encrypt: ";
    std::getline(std::cin, input);
    std::string encrypted;
    for (char c : input) {
        encrypted += c + 1;
    }
    std::cout << "Encrypted string: " << encrypted << std::endl;
}

#endif