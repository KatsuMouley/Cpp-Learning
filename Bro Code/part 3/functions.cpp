#include <iostream>

void function(std::string name, int age);

int main()
{
    std::string name;
    int age;
    std::cout << "Insert your name: ";
    std::cin >> name;
    std::cout << "Insert your age: ";
    std::cin >> age;
    function(name, age);

    // An function capable of finding the points of collision between two objects
}

void function(std::string name, int age)
{
    std::cout << "Hello " << name << std::endl;
    std::cout <<"Your age is "<<age<< std::endl;
}