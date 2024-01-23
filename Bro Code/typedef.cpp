#include <iostream>
#include <vector>
/*
typedef std::string text_t;
typedef int number_t;
*/
// or we  could use
using text_t = std::string;
using number_t = int;

int main()
{
    text_t string = "Hello World!";

    number_t number = 35;

    std::cout << string << "\n";
    std::cout << number << "\n";
    return 0;
}

/*
    Typedef = reserved key word used to create an aditional name (alias) for another data type.
    New identifier for an existing type helps with readability and reduces typos.
*/