// OneRepMaxCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include "onerep_max.h"
#include "nutrition_estimates.h"
int main()
{
    char choice;
    do {
        int calculationChoice = 0;
        std::cout << "Enter 1 for one rep max calculator. Enter 2 for Protien consumption Calculator\n";
        std::cin >> calculationChoice;

        if (calculationChoice == 1) {
            oneRepMaxLogic();
        }

        else if (calculationChoice == 2) {
            nutritionLogic();
        }
        std::cout << "\nWould you like to calculate again? (Y/N): ";
        std::cin >> choice;

    } while (choice == 'Y' || choice == 'y');
}

