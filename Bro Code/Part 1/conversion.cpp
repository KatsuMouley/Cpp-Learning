#include <iostream>

int main()
{

    int a = 2.74;
    std::cout << a << " Implicit" << std::endl;

    double x = (int)3.14;
    std::cout << x << " Explicit" << std::endl;

    char d = 100;
    std::cout << d << " Implicit" << std::endl; // 100 é a letra D na tabela ASCII

    std::cout << (char)110 << " Explicit" << std::endl;

    // Example
    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;
    std::cout << score << "%";

    return 0;
}

/*
    type conversion = conversion a value of one data type to another
                    Implicit = automatic
                    Explicit = Precede value with new data type (int)
*/