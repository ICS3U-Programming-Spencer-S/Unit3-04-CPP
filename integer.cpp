// Copyright (c) 2022 Spencer Scarlett All rights reserved.
// .
// Created by: Spencer Scarlett
// Date: Oct 11, 2022
// A program used to state if a integer positive, negative, or zero.
// But using If, then, elseif, else statements.

#include <iostream>

int main() {
    // Initializing variables
    int userInteger;

    // Ask for the integer number from the user
    std::cout << "This is a program to state if a integer is: \n";
    std::cout << "positive, negative or zero. \n";
    std::cout << "Enter a integer number: ";
    std::cin >> userInteger;
    std::cout << "\n";

    // if, elseif, else, then statement
    // to determine if it's a positive, negative or zero

    if (userInteger > (0)) {
        std::cout << "Your integer is a positive integer.";
    } else if (userInteger < (0)) {
        std::cout << "Your integer is a negative integer.";
    } else if (userInteger == (0)) {
        std::cout << "Your integer is zero.";
    } else {
        std::cout << "Unknown issue";
    }
    // spacer
    std::cout << "\n";
    // spacer
    std::cout << "\n";

    std::cout << "";
}
