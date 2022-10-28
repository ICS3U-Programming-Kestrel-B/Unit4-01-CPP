// Copyright (c) 2022 KestrelBryce All rights reserved
//
// Created by: KestrelBryce
// Created on: Oct 27, 2022
// This program asks for a number
// and shows all the numbers leading up to
// it as well as the sum of those numbers

#include <iostream>
#include <cmath>
#include <string>

int main() {
    // Declaring variables
    int userNumInt;
    int counter = 0;
    int sum = 0;
    std::string userNumString;

    // Introductory paragraph
    std::cout << "This program asks for a number\n";
    std::cout << "and shows all the numbers leading up to\n";
    std::cout << "it as well as the sum of those numbers\n";
    std::cout << "\n";

    // Input
    // Getting userNumString
    std::cout << "Enter a number: ";
    std::cin >> userNumString;

    // Process
    // Checking that userNumString is an integer
    try {
        userNumInt = std::stoi(userNumString);
    } catch (std::invalid_argument) {
        std::cout << "Please enter a valid number. ";
        std::cout << userNumString;
        std::cout << " is not valid";
    }

    // Checking that userNumInt is positive
    if (userNumInt < 0) {
        std::cout << "Please enter a positive number";
    }

    // Output
    while (counter <= userNumInt) {
        // Printing the numbers
        std::cout << counter;
        std::cout << "\n";
        // Updating sum
        sum = sum + counter;
        // incrementing counter
        counter = counter + 1;
    }
    std::cout << "The sum is ";
    std::cout << sum;
    std::cout << "\n";
}
