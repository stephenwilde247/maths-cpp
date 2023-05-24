/* 
 * Author: Stephen Wilde
 * Website: https://stephenwilde.net
 */

#include "allHeaders.h"

void clearConsole() {
    std::cout << "\x1B[2J\x1B[H";
}

int generateRandomNumber() {
    return rand() % 13;
}

float generateRandomNumberDivision()
{
    //I made the division different to fix a bug that exits the program after typing either - or .
    return static_cast<float>(rand() % 10 + 1);  // Generate a random number between 1 and 10
}