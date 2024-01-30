#include <iostream>
#include <cmath>
int main()
{
    double a, c, b;

    std::cout << "Insert A:";
    std::cin >> a;
    std::cout << "Insert B:";
    std::cin >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "The hypotenuse of a triangle, where A is " << a << " and B is " << b << ", is " << c << std::endl;
}