#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "You win a iron!";
        break;
    case 2:
        std::cout << "You win a gold!";
        break;
    case 3:
        std::cout << "You win a diamond!";
        break;
    case 4:
        std::cout << "You win 10'000'000'000 dollars!";
        break;
    case 5:
        std::cout << "You win THE WOLRD!";
        break;

    default:
        break;
    }

    return 0;
}