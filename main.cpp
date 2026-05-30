#include <iostream>
#include <cstdlib>
#include <time.h>

int main()
{
    char playAgain;

    do
    {

        srand(time(0));                      // gives random number in every run
        int secretNumber = rand() % 100 + 1; // 1 -> 100;
        int guess = 0;
        int attempts = 0;
        std::cout << "\n=== Number Guessing Game ===\n";
        while (guess != secretNumber)
        {
            std::cout << "Enter your guess: ";
            std::cin >> guess;

            attempts++;

            if (guess > secretNumber)
            {
                std::cout << "Too high!\n";
            }
            else if (guess < secretNumber)
            {
                std::cout << "Too low!\n";
            }
            else
            {
                std::cout << "Correct! You guessed in "
                          << attempts
                          << " attempts.\n";
            }
        }

        std::cout << "\nPlay again? (y/n): ";
        std::cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Thank You for playing the game!!!\n";
    return 0;
}