#include <iostream>

int main()
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    if (age <= 0 || age > 100)
    {
        std::cout << "BRUH, what are you? a time travaller?";
    }
    else if (age >= 18)
    {
        std::cout << "You're allowed to enter :D";
    }
    else if (age < 18)
    {
        std::cout << "You're not allowed to enter :C";
    }

    return 0;
}