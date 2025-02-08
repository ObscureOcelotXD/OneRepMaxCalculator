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

        double carbsGainLow = 0;
        double carbsGainHigh = 0;
        double carbsFatLossLow = 0;
        double carbsFatLossHigh = 0;
        double carbsMaintenenceLow = 0;
        double carbsMaintenenceHigh = 0;

        double fatsGainLow = 0;
        double fatsGainHigh = 0;
        double fatsFatLossLow = 0;
        double fatsFatLossHigh = 0;
        double fatsMaintenenceLow = 0;
        double fatsMaintenenceHigh = 0;

        std::cout << "Enter Weight in lb \n";
        std::cin >> weight;

        protienGainLow = weight * (0.7);
        protienGainHigh = weight * (1.0);

        protienFatLossLow = weight * (0.9);
        protienFatLossHigh = weight * (1.4);

        protienMaintenenceLow = weight * (0.5);
        protienMaintenenceHigh = weight * (0.7);

        //bulking
        carbsGainLow = weight * (1.8);
        carbsGainHigh = weight * (2.7);

        //lean out
        carbsFatLossLow = weight * (0.9);
        carbsFatLossHigh = weight * (1.8);

        //maintain
        carbsMaintenenceLow = weight * (1.4);
        carbsMaintenenceHigh = weight * (2.3);


        //bulking
        fatsGainLow = weight * (0.35);
        fatsGainHigh = weight * (0.55);

        //lean out
        fatsFatLossLow = weight * (0.25);
        fatsFatLossHigh = weight * (0.45);

        //maintain
        fatsMaintenenceLow = weight * (0.35);
        fatsMaintenenceHigh = weight * (0.45);


        std::cout << "To gain muscle (Bulking) you should consume between: " << protienGainLow << " and " << protienGainHigh << " grams of protien. \n";
        std::cout << "To gain muscle (Bulking) you should consume between: " << carbsGainLow << " and " << carbsGainHigh << " grams of carbs. \n";
        std::cout << "To gain muscle (Bulking) you should consume between: " << fatsGainLow << " and " << fatsGainHigh << " grams of fats. \n\n";

        std::cout << "To achive fat loss and maintain (Lean Out) you should consume between: " << protienFatLossLow << " and " << protienFatLossHigh << " grams of protien. \n";
        std::cout << "To achive fat loss and maintain (Lean Out) you should consume between: " << carbsFatLossLow << " and " << carbsFatLossHigh << " grams of carbs. \n";
        std::cout << "To achive fat loss and maintain (Lean Out) you should consume between: " << fatsFatLossLow << " and " << fatsFatLossHigh << " grams of fats. \n\n";

        std::cout << "To maintain muscle you should consume between: " << protienMaintenenceLow << " and " << protienMaintenenceHigh << " grams of protien. \n";
        std::cout << "To maintain muscle you should consume between: " << carbsMaintenenceLow << " and " << carbsMaintenenceHigh << " grams of carbs. \n";
        std::cout << "To maintain muscle you should consume between: " << fatsMaintenenceLow << " and " << fatsMaintenenceHigh << " grams of fats. \n";
    }

    system("pause");
}

