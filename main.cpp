#include <iostream>
#include <complex>

#include "Calc.cpp"

void Menu()
{
    std::cout << "Enter one of the following operators [1-10]" << std::endl;
    std::cout << "1. Addition"         << std::endl;
    std::cout << "2. Subtraction"      << std::endl;
    std::cout << "3. Multiplication"   << std::endl;
    std::cout << "4. Division"         << std::endl;
    std::cout << "5. Square Root"      << std::endl;
    std::cout << "6. Exponentiation"   << std::endl;
    std::cout << "> ";

}

int main()
{
    Calc* myCalc = new Calc;
    char cont = 'y';

    do {
        Menu();

        char choice;
        std::cin >> choice;

        myCalc->Operation(choice);

        std::cout << "\nEnter <Y> for another operation or press any other key to quit: ";
        std::cin >> cont;

    }
    while (cont == 'y' || cont == 'Y');

    delete myCalc;

    return 0;
}