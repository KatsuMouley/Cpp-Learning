#include <string>
#include <iostream>

int main()
{
    std::string name;
    while (name.empty())
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name << std::endl;

    std::cout << "We're going to create something with the things that I'm studying" << std::endl;
    std::cout << "But it may take time to create something actually good since my progress isn't fastest like others" << std::endl;
    std::string condoriano;
    std::cout << "Who's better?\nSanji\nZoro\nPlease be aware that there's only on option(Condoriano)\n";

    do
    {
        std::cout << "Your answer: ";
        std::getline(std::cin, condoriano);
    } while (condoriano != "Condoriano");

    for (int i = 0; i <= 10; i++)
    {
        std::cout << "SKBIDI TOILET " << i << std::endl;
    }

    return 0;
}