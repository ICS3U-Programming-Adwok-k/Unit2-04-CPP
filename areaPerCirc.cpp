// Copyright (c) 2025 Adwok Adiebo All rights reserved.
//.
// Created by: Adwok Adiebo
// Created on: Mar 10th, 2025
// This program calculates the Area
// and the Circumference of a circle.
#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    float Area;
    float radius;
    float Circumference;
    // Input
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    // Process
    Area = M_PI * pow(radius, 2);
    Circumference = 2 * M_PI * radius;
    // Output
    std::cout << std::fixed << std::setprecision(2) << std::endl;
    std::cout << "The Area of the circle is: " << Area << "cm^2" << std::endl;
    std::cout << "The Circumference of the circle is: " <<
    Circumference << "cm " << std::endl;
}
