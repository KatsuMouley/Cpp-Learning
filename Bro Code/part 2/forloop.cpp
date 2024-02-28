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
    }
    std::cout << "Congrats! you counted down " << number << " tics!" << std::endl;

    return 0;
}