// Created by: Hiab G
// Date: Wed, Feb: 28th
// This program calculates the cost of a pizza with hst using user input for the dimatere 

#include <iostream>
#include <iomanip> 
// Constants
const float HST = 0.13;
const float LABOUR_COST = 2.00;
const float RENTAL_COST = 2.25;
const float INGRED_COST = 1.5;

int main() {
    // Input
    int diameter;
    std::cout << "Enter the diameter of the pizza (inches): ";
    std::cin >> diameter;

    // Process
    float subtotal = LABOUR_COST + RENTAL_COST + INGRED_COST * diameter;
    float tax = HST * subtotal;
    float total = subtotal + tax;

    // Output
    std::cout << std::endl;
    std::cout << "The total cost is = $" << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}