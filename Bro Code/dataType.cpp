#include <iostream>

void dataTypes();

int main()
{
    dataTypes();
    return 0;
}

void dataTypes()
{
    std::cout << "there are some types of datas" << std::endl;
    int wholeNumbers = 91;
    double decimalNumbers1 = 9.9;
    float decimalNumbers2 = 9.99;
    char c = 'X', array[9] = "array123", strings[] = "THIS IS A STRING";
    // Other way to do strings in C++ is using std::string
    std::string stdString = "Katsu Mouley";
    // Arrays start from 0
    // strings are arrays for words
    // char alone is for single characters
    std::cout
        << wholeNumbers << "| Integers"
        << "\n"
        << decimalNumbers1 << "| Doubles"
        << "\n"
        << decimalNumbers2 << "| Floats"
        << "\n"
        << c << "| single characters"
        << "\n"
        << array << "| Arrays"
        << "\n"
        << strings << "| strings with char[]"
        << "\n"
        << stdString << "| strings with std::string" << std::endl;
}