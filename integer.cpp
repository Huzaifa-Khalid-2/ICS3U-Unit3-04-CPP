// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Huzaifa Khalid
// Created on: March 2022
// This program tells you if the number is 
// positive/negative/0 with user input

#include <iostream>

int main() {
    // this function checks if the number 
    // is >0/ <0/==0
    int number;

    // input
    std::cout << "Enter a integer: ";
    std::cin >> number;

    // process and output
    if (number > 0) {
        std::cout << "You have a positive number";
    } else if (number < 0) {
        std::cout << "You have a negative number";
    } else if (number == 0) {
        std::cout << "Your number is 0";
    } else {
      std::cout << "I have no clue";
    } 
    std::cout << "\nDone."; 
}
