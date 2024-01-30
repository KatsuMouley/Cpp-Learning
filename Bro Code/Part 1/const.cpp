#include <iostream>

int main()
{
    const double PI = 3.14;
    double circuference;
    int radius;
    std::cout << "Please input the radius of the circuference" << std::endl;
    std::cin >> radius;
    circuference = radius * PI * 2;
    std::cout << "So the circuference is " << circuference << std::endl;
    return 0;
}