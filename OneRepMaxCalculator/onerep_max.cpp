#include <iostream>
#include <iomanip>
#include "onerep_max.h"

double weight = 0;
double numberOfReps = 0;
double oneRepMax = 0.0;

int formula = 0;
int calculationChoice = 0;

std::string formulaName = "";

void oneRepMaxLogic() {
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