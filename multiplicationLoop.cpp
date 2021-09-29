// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 09/29/2021
// This is the Multiplication Loop program
// The user enters in a positive integer
// The program tells shows the product from 1 to the number typed in

#include <iostream>

int main() {
    // this function uses a do while loop and calculates the product
    int loopCounter = 0;
    int answer = 1;
    std::string numberAsString;
    int numberAsInteger;

    // input
    std::cout << "Enter in a positive integer: ";
    std::cin >> numberAsString;
    std::cout << "" << std::endl;

    // process and output
    try {
        // convert string to int
        numberAsInteger = std::stoi(numberAsString);

    do {
        loopCounter = loopCounter + 1;
        answer = answer  * loopCounter;
    } while (loopCounter < numberAsInteger); {
    } std::cout << "The product of all the positive numbers from 1 to "
              << numberAsString << " is " << answer << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "You didn’t enter in a positive integer" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
