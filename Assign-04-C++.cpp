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
    int userNum1Int;
    int userNum2Int;
    int greatestNum;
    int productList;
    int lcm;

    // set variables to numbers
    int product = 0;
    int product2 = 1;
    int counter1 = 1;

    // declare variables to strings
    std::string userNum1Str;
    std::string userNum2Str;

    // Asks the user to enter a positive integer
    std::cout << "Enter a positive integer: ";
    std::cin >> userNum1Str;
    std::cout << "\n";

    // Asks the user to enter another positive integer
    std::cout << "Enter another positive integer: ";
    std::cin >> userNum2Str;
    std::cout << "\n";

    list<int> commonList{};
    list<int> product2List{};
    list<int> product1List{};

    // Try catch to catch any errors
    try {
        userNum1Int = std::stoi(userNum1Str);
        userNum2Int = std::stoi(userNum2Str);
        // If statement to check if totalInt is a invalid input
        if (userNum1Int > 0 && userNum2Int > 0) {
            if (userNum1Int > userNum2Int) {
                greatestNum = userNum1Int;
            } else {
                greatestNum = userNum2Int;
            }
            // for loop to calculate all the products of the
            // from the counter to the greatestNum using userNum2Int
            for (int counter2 = 1; counter2 <= greatestNum; counter2++) {
                // Asks the user for a number to add to sum
                product2 = userNum2Int * counter2;
                product2List.push_back(product2);
                product2List.sort();
                // while loop to calculate all the products of the
                // from the counter to the greatestNum using userNum1Int
                while (counter1 <= greatestNum) {
                    product = userNum1Int * counter1;
                    product1List.push_back(product);
                    product1List.sort();
                    counter1++;
                }
                // To check if product2 is in product1List
                bool findListProduct = (std::find(product1List.begin(),
                product1List.end(), product2) != product1List.end());
                // if it is in product1List then add product2 to commonList
                if (findListProduct == true) {
                    commonList.push_back(product2);
                } else {
                    continue;
                }
            }
            std::cout << "If nothing is appearing wait for it to load\n";
            // Displays the first number of commonList
            std::cout << "The Lowest Common Multiple of " << userNum2Int << " and "
            << userNum1Int << " is "<< commonList.front() << "\n";
        } else {
            std::cout << "Enter a positive integer\n";
        }
    } catch (const std::exception) {
        std::cout << "Please a valid integer\n";
    }
}
