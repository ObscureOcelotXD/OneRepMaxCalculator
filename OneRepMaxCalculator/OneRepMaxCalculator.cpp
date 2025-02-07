// OneRepMaxCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

int main()
{

    double weight = 0;
    double numberOfReps = 0;
    double oneRepMax = 0.0;

    int formula = 0;
    int calculationChoice = 0;

    std::string formulaName = "";

    std::cout << "Enter 1 for one rep max calculator. Enter 2 for Protien consumption Calculator\n";
    std::cin >> calculationChoice;

    if (calculationChoice == 1) {

        std::cout << "Enter Weight Lifted\n";
        std::cin >> weight;

        std::cout << "Enter Number of Reps\n";
        std::cin >> numberOfReps;

        std::cout << "Select Calculation Method: \n";
        std::cout << "1. Bryzcki Formula\n";
        std::cout << "2. Epley Formula\n";
        std::cout << "3. Lombardi Formula\n";
        std::cout << "4. O'Conner Formula\n";

        std::cin >> formula;

        switch (formula) {
        case 1:
            oneRepMax = weight * (36 / (37 - numberOfReps));
            formulaName = "Bryzcki Formula";
            break;
        case 2:
            oneRepMax = weight * (1 + (0.0333 * numberOfReps));
            formulaName = "Epley Formula";
            break;
        case 3:
            oneRepMax = weight * (pow(numberOfReps, 0.1));
            formulaName = "Lombardi Formula";
            break;
        case 4:
            oneRepMax = weight * (1 + (0.025 * numberOfReps));
            formulaName = "O'Conner Formula";
            break;
        }

        std::cout << "According to the " << formulaName << " Your one rep max is : " << oneRepMax << "\n";
    }

    else if (calculationChoice == 2) {

        double weight = 0;
        double protienGainLow = 0;
        double protienGainHigh = 0;
        double protienFatLossLow = 0;
        double protienFatLossHigh = 0;
        double protienMaintenenceLow = 0;
        double protienMaintenenceHigh = 0;

        std::cout << "Enter Weight in lb \n";
        std::cin >> weight;

        protienGainLow = weight * (0.7);
        protienGainHigh = weight * (1.0);

        protienFatLossLow = weight * (0.9);
        protienFatLossHigh = weight * (1.4);

        protienMaintenenceLow = weight * (0.5);
        protienMaintenenceHigh = weight * (0.7);

        std::cout << "To gain muscle you should consume between: " << protienGainLow << " and " << protienGainHigh << " grams of protien. \n";
        std::cout << "To achive fat loss and maintain you should consume between: " << protienFatLossLow << " and " << protienFatLossHigh << " grams of protien. \n";
        std::cout << "To maintain muscle you should consume between: " << protienMaintenenceLow << " and " << protienMaintenenceHigh << " grams of protien. \n";

    }

    system("pause");
}

