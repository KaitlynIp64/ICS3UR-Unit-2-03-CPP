// Copyright (c) 2022 Kaitlyn Ip All rights reserved
//
// Created by: Kaitlyn Ip
// Created on: Sep 2022
// This program calculates the circumference of a circle
//    with radius inputted from the user

#include <cmath>
#include <iostream>

int main() {
    // this function calculates circumference of a circle
    const double TAU = 6.28;
    int radius;
    double circumference;
    // input
    std::cout << "Enter radius of the circle (mm): ";
    std::cin >> radius;
    // process
    circumference = TAU * radius;
    // output
    std::cout << "" << std::endl;
    std::cout << "Circumference is " << circumference << " mm" << std::endl;
    std::cout << "\nDone." << std::endl;
}