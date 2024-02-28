#include <string>
#include <iostream>

int main()
{
    // I need to wash the dishes and then if there's any dish left, I repeat the action, other wise i'll just go to sleep
    int number;
    std::cout << "Tell me the amount of dishes that there's to wash(min of 1)" << std::endl;
    std::cin >> number;
    do
    {
        std::cout << "There's " << number << " dishes left to wash" << std::endl;
        number--;
    } while (number > 0);

    std::cout << "Congrats!\nYou cleaned everything!" << std::endl;
    return 0;
}