#include <iostream>

int main()
{
    // Ternary Operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

    int velocity = 50;
    velocity >= 25 ? std::cout << "You got a ticket" << std::endl : std::cout << "You're a good driver!" << std::endl;

    int number = 10;
    number % 2 ? std::cout << "Impar" << std::endl : std::cout << "Par" << std::endl;

    bool hungry = true;
    hungry ? std::cout << "TRAZ COMIDA PARA O MONSTRO Q ELE TA COM FOME!" << std::endl : std::cout << "Ih rapaz, ta com fome n?" << std::endl;
    return 0;
}