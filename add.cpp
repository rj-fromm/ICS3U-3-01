// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: RJ Fromm
// Created on: Sept 2019
// This program adds two numbers
// with user input
#include <iostream>
int main() {
// this function adds two numbers
int firstNumber;
int secondNumber;
int sum;
// input
std::cout << "Enter first number : ";
std::cin >> firstNumber;
std::cout << "Enter second number: ";
std::cin >> secondNumber;
// process
sum = firstNumber + secondNumber;
// output
std::cout << "" << std::endl;
std::cout << "sum of " << firstNumber << "+" << secondNumber <<  "=" << sum
<< "" << std::endl;
}
