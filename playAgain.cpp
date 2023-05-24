/* 
 * Author: Stephen Wilde
 * Website: https://stephenwilde.net
 */

#include "allHeaders.h"

void playAgain(){

std::cout << "Type Y to play again or N to exit: ";
std::string YN;
std::cin >> YN;
    if (YN == "y" || YN == "Y")
    {
        clearConsole();
        selection();
    }
    else
    {
        clearConsole();
        std::cout << "GoodBye for now!";
        exit(0);
    }
}