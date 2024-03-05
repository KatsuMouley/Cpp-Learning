#include <iostream>

void function(std::string name);

int main()
{
    std::string name;

    std::cout << "Insert your name: ";
    std::cin >> name;
    function(name);

    // An function capable of finding the points of collision between two objects
}

void function(std::string name)
{
    std::cout << "Hello " << name << std::endl;
}