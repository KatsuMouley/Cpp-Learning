#include <iostream>
// Object = A collection of atributes and methods
// They can have characteristics and could peform actions
// Can be used to mimic real world items
// Created from a class which act as a "blue-print"
class Human{
    public:
        std::string name;
        std::string occupation = "none";
        int age = 18;

        void eat(){
            std::cout << name << " is Eating" << '\n';
        }
        void drink(){
            std::cout << name << " is Drinking" << '\n';
        }
        void sleep(){
            std::cout << name << " is Sleeping" << '\n';
        }
};

int main(){
    Human human;
    human.name = "Vitor";
    human.age = 19;

    std::cout << human.name << '\n';
    std::cout << human.age << '\n';
    std::cout << human.occupation << '\n';

    human.drink();
    human.eat();
    human.sleep();


    return 0;
}