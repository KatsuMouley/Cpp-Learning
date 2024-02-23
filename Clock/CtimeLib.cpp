#include <cstdio>
#include <iostream>
#include <ctime>

int main()
{
    int time;
    std::cout << "Enter the delay that the message will take to arrive: ";
    std::cin >> time;
    time *= CLOCKS_PER_SEC;
    // CLOCKS_PER_SEC == 1000
    clock_t now = clock();
    // is clock_t a data type? What's exactly the clock function doing here?
    // The “clock_t” is a type that is the built-in type function in our time header library.
    // Clock() method Returns the processor time consumed by the program.
    while (clock() - now < time)
        ;
    std::cout << "It has been " << time / 1000 << " seconds since the request." << std::endl;

    return 0;
}