#include <iostream>
#include <iomanip>
// avarage calculus

int main()
{
    double a, b, avarage;
    std::cin >> a >> b;
    avarage = (a * 3.5 + b * 7.5) / (3.5 + 7.5);
    std::cout << std::fixed << std::setprecision(5) << "MEDIA = " << avarage << std::endl;
    return 0;
}