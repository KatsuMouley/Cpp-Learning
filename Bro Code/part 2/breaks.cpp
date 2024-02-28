#include <iostream>

int main()
{
    int number;
    std::cout << "Lets count down a number" << std::endl;
    std::cout << "Insert the number: ";
    std::cin >> number;
    for (int i = number; i > 0; i--)
    {
        std::cout << i << " seconds left for something..." << std::endl;
        if (number % 2 == 0)
        {
            continue;
        }
        else
        {
            std::cout << "Don't insert odd numbers!" << std::endl;
            break;
        }
    }
    if (number % 2 == 0)
    {
        std::cout << "Congrats! you counted down " << number << " tics!" << std::endl;
    }
}