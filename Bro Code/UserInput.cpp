#include <iostream>
int main()
{
    std::string name, fullname;
    int age;

    std::cout << "What's your name? ";
    std::cin >> name;

    std::cout << "What's your age? ";
    std::cin >> age;

    std::cout << "What's your FULL name? ";
    std::getline(std::cin >> std::ws /*Whis will eliminate anything that's in the buffer before executing the user input*/, fullname);

    std::cout << "Hello " << name << std::endl;
    std::cout << "Your age's " << age << std::endl;
    std::cout << "Your full name is " << fullname << std::endl;

    return 0;
}