#include <iostream>

int main()
{
    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // ! = reverses the logical state of its operand

    int temp;
    bool sunny;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;
    temp > 20 ? sunny = true : sunny = false;

    if (temp > 0 && temp < 30)
    {
        std::cout << "&& operator = The temperature is good!" << std::endl;
    }
    else
    {
        std::cout << "&& operator = The temperature is bad!" << std::endl;
    }

    if (temp <= 0 || temp >= 30)
    {
        std::cout << "|| operator = The temperature is bad!" << std::endl;
    }
    else
    {
        std::cout << "|| operator = The temperature is good!" << std::endl;
    }

    if (sunny)
    {
        std::cout << "true = It's sunny outside" << std::endl;
    }
    else
    {
        std::cout << "false = It's cloudy outside" << std::endl;
    }

    if (!sunny)
    {
        std::cout << "!true = It's cloudy outside" << std::endl;
    }
    else
    {
        std::cout << "!false = It's sunny outside" << std::endl;
    }

    return 0;
}