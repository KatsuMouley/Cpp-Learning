#include <iostream> // cpp basic library
#include <stdio.h>  //c basic library

int main(void)
{
    char arrays[] = "This is an array", bullshit[50];

    std::cout << "Hello world!" << std::endl; // clean buffer
    std::cout << arrays << "\n";              // does not clean the buffer
    std::cin >> bullshit;                     // this command stores a single word
    std::cout << bullshit << std::endl;       // this is the output

    return 0;
}