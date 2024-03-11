#include <iostream>

double triangle(double base, double heigth);

int main()
{
    double heigth, base;
    std::cout << "Please input the base of the triangle: ";
    std::cin >> base;
    std::cout << "Please input the height of the triangle: ";
    std::cin >> heigth;
    std::cout << "The area of the triagle is " << triangle(base, heigth) << std::endl;


    return 0;
    // An function capable of finding the points of collision between two objects
}

double triangle(double base, double heigth)
{
    // double area = (base * heigth) /2;
    // return area;
    //or we could just do this.
    return (base * heigth) /2;
}