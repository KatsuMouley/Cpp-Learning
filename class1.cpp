#include <iostream>

int main()
{
    int userI1, userI2, PROD;
    std::cin >> userI1;
    std::cin >> userI2;
    PROD = userI1 * userI2;
    std::cout << "PROD = " << PROD << std::endl; // std::endl limpa o buffer//
    std::cout << "PROD = " << PROD << "\n";      // \n não limpa o buffer//
    return 0;
}
