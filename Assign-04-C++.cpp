// Copyright (c) 2022 Nathan A All rights reserved.
// .
// Created by: Nathan A
// Date: Nov.17, 2022
// This program asks the user for 2 numbers, it then calculates
// the lowest common multiple

#include <algorithm>
#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    // Declare variables
    int counter2;
    int userNum1Int;
    int userNum2Int;
    int greatestNum;
    int productList;

    // set variables to numbers
    int product = 0;
    int product2 = 1;
    int counter1 = 1;

    // declare variables to strings
    std::string userNum1Str;
    std::string userNum2Str;

    // Asks the user for the amount of numbers they want to add together
    std::cout << "Enter the amount of numbers to enter: ";
    std::cin >> userNum1Str;
    std::cout << "\n";

    // Asks the user for the amount of numbers they want to add together
    std::cout << "Enter the amount of numbers to enter: ";
    std::cin >> userNum2Str;
    std::cout << "\n";

    list<int> product2List{};
    list<int> product1List{};

    // Try catch to catch any errors
    try {
        userNum1Int = std::stoi(userNum1Str);
        userNum2Int = std::stoi(userNum2Str);
    } catch (const std::exception) {
    }

    // If statement to check if totalInt is a invalid input
    if (userNum1Int > 0 % userNum2Int > 0) {
        if (userNum1Int > userNum2Int) {
            greatestNum = userNum1Int;
        } else {
            greatestNum = userNum2Int;
        }
        for (counter2 = 1; counter2 <= greatestNum; counter2++) {
            // Asks the user for a number to add to sum
            product2 = userNum2Int * counter2;
            list<int>::iterator it = product2List.begin();
            advance(it, counter2);
            *it = product2;
            std::cout << *it << endl;
            product2List.sort();
        }
        for (counter1 = 1; counter1 <= greatestNum; counter1++) {
            product = userNum1Int * counter1;
            list<int>::iterator it2 = product1List.begin();
            advance(it2, counter1);
            *it2 = product;
            std::cout << *it2 << endl;
            product1List.sort();
        }
    }
}
