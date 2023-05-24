/* 
 * Author: Stephen Wilde
 * Website: https://stephenwilde.net
 */

#include "allHeaders.h"

void selection()
{
    int choice;
    
    puts("Please select an option \nOption 0: Exit \nOption 1: Addition \nOption 2: Subtraction \nOption 3: Division \nOption 4: Multiplication \n");
    std::cin >> choice;
    
     switch (choice) {
        case 0:
            clearConsole();
            std::cout << "GoodBye for now!";
            exit(0);
        case 1:
            clearConsole();
            std::cout << "You selected Option 1.\n";
            addition();
            break;
        case 2:
            clearConsole();
            std::cout << "You selected Option 2.\n";
            subtraction();
            break;
        case 3:
            clearConsole();
            std::cout << "You selected Option 3.\n";
            division();
            break;
        case 4:
            clearConsole();
            std::cout << "You selected Option 4.\n";
            multiplication();
            break;
        default:
            std::cout << "Oops that's not a valid selection.\n";
            selection();
    }
}
