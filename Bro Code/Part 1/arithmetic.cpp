#include <iostream>

int main()
{
    int value = 20;
    std::cout << value << std::endl;
    // value = value + 1;
    // value +=1;
    value++;
    std::cout << value << std::endl;
    // value = value * 2;
    value *= 2;
    std::cout << value << std::endl;
    // value = value / 4;
    value /= 2;
    std::cout << value << std::endl;
    // value = value - 1
    // value -= 1;
    value--;
    std::cout << value << std::endl;
    std::cout << value % 3 << std::endl; // It'll give us 1, because it's not dividible by 3
    std::cout << value % 2 << std::endl; // It'll give us 0, because it's dividible by 2

    return 0;
}