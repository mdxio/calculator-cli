#include <iostream>
#include <math.h>

#include "Calc.h"

void Calc::Operation(const char op)
{
    double x = operand_one;
    double y = operand_two;

    switch (op) {
        // Addition
        case '1':
            std::cout << "\nFirst operand: ";
            std::cin >> x;
            std::cout << "Second operand: ";
            std::cin >> y;

            std::cout << "Result: " << x+y << std::endl;
            break;
        // Subtraction
        case '2':
            std::cout << "\nFirst operand: ";
            std::cin >> x;
            std::cout << "Second operand: ";
            std::cin >> y;

            std::cout << "Result: " << x-y << std::endl;
            break;
        // Multiplication
        case '3':
            std::cout << "\nFirst operand: ";
            std::cin >> x;
            std::cout << "Second operand: ";
            std::cin >> y;

            std::cout << "Result: " << x*y << std::endl;
            break;
        // Division
        case '4':
            std::cout << "\nFirst operand: ";
            std::cin >> x;
            std::cout << "Second operand: ";
            std::cin >> y;

            if (y == 0) {
                std::cout << "Division by zero!" << std::endl;
                break;
            }

            std::cout << "Result: " << x/y << std::endl;
            break;
        // Square Root
        case '5':
            std::cout << "\nEnter the operand for the root: ";
            std::cin >> x;

            std::cout << "Result: ";

            x < 0 ? std::cout << sqrt(std::complex<double>(x)) : std::cout << std::sqrt(x);
            break;
        // Exponentiation
        case '6':
            std::cout << "\nEnter the base number: ";
            std::cin >> x;
            std::cout << "Enter the exponent number: ";
            std::cin >> y;

            std::cout << "Result: " << pow(x, y) << std::endl;
            break;
    }

}