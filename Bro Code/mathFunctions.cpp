#include <iostream>
#include <cmath> //A header filçe that allow us to use math functions

int main()
{
    double x = 4.60;
    double y = 3;
    double z;

    z = std::max(x, y); // the max function will return the greater number between two values.
    std::cout << z << " Max function" << std::endl;
    z = pow(2, 3); // two to the power of three, TRADUÇÃO = 2 elevado a 3, q é 9
    std::cout << z << " Power function" << std::endl;
    z = sqrt(9); // square root, TRADUÇÃO = Raiz Quadrada de 9, q é 3
    std::cout << z << " Square root function" << std::endl;
    z = abs(-7); // Pega o valor absuluto de um valor, por exemplo, se um valor for negativo, essa unção pegaria a distância dele até 0 como o valor absoluto
    std::cout << z << " Absolute function" << std::endl;
    z = round(x); // Esta função arredonda um valor
    std::cout << z << " Round function 1" << std::endl
              << round(4.16) << " Round function 2" << std::endl;
    z = ceil(2.1);
    std::cout << z << " Ceiling function" << std::endl;
    z = floor(2.1);
    std::cout << z << " Floor function" << std::endl;

    return 0;
}