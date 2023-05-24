/* 
 * Author: Stephen Wilde
 * Website: https://stephenwilde.net
 */

#include "allHeaders.h"

void division()
{
    srand(static_cast<unsigned int>(time(0)));
    int score = 0;
    int chances = 2;

    while (true) {
        float number1 = generateRandomNumberDivision();
        float number2 = generateRandomNumberDivision();
        float answer = number1 / number2;

        if (answer == 0.0f) {
            number1 = generateRandomNumberDivision();
            number2 = generateRandomNumberDivision();
            answer = number1 / number2;
        }

        std::cout << "What is " << number1 << " / " << number2 << " = ";
        float guess;
        std::cin >> guess;

        if (std::abs(guess - answer) < 0.0001f && chances >= 0) {
            std::cout << "\033[92mWell done! " << number1 << " / " << number2 << " does indeed equal " << answer << "\033[0m" << std::endl;
            score++;
            std::cout << "Current Score: " << score << std::endl;
            std::cout << std::endl;
        } else if (chances > 0) {
            std::cout << "\033[91mThat's not right. " << number1 << " / " << number2 << " = " << answer << ", not " << guess << "\033[0m" << std::endl;
            chances--;
            std::cout << "Chances remaining: " << chances + 1 << std::endl;
        } else {
            std::cout << "\033[92mFinal score: " << score << "\033[0m" << std::endl;
            playAgain();
        }
    }
}
