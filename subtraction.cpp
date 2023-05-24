/* 
 * Author: Stephen Wilde
 * Website: https://stephenwilde.net
 */

#include "allHeaders.h"

void subtraction()
{
    srand(static_cast<unsigned int>(time(0)));
    int score = 0;
    int chances = 2;

    while (true) {
        int number1 = generateRandomNumber();
        int number2 = generateRandomNumber();
        int answer = number1 - number2;

        std::cout << "What is " << number1 << " - " << number2 << " = " << std::endl;

        int guess;
        std::cin >> guess;

        if (guess == answer && chances >= 0) {
            std::cout << "\033[92mWell done! " << number1 << " - " << number2 << " does indeed equal " << answer << "\033[0m" << std::endl;
            score++;
            std::cout << "Current Score: " << score << std::endl;
            std::cout << std::endl;
        } else if (chances > 0) {
            std::cout << "\033[91mThat's not right. " << number1 << " - " << number2 << " = " << answer << ", not " << guess << "\033[0m" << std::endl;
            chances--;
            std::cout << "Chances remaining: " << chances + 1 << std::endl;
        } else {
            std::cout << "\033[92mFinal score: " << score << "\033[0m" << std::endl;
            playAgain();
        }
    }
}