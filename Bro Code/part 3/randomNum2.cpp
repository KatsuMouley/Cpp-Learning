#include <iostream>
#include <ctime>

int main()
{

    int num;
    int guess;
    int tries = 0;
    num = (rand() % 100) + 1;
    std::cout << "***** GUESS THE NUMBER! *****\n";
    do
    {
        std::cout << "Enter a guess(1 - 100): ";
        std::cin >> guess;
        tries++;

        if (guess > num)
        {
            std::cout << "Too high!\n";
        }
        else if (guess < num)
        {
            std::cout << "Too low\n";
        }
        else
        {
            std::cout << "You did it!\nNumber of tries: " << tries << "\n";
        }
    } while (guess != num);
    std::cout << "********************\n";
    return 0;
}