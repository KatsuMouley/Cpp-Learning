#include <iostream>

int main() {
    double d = 2.1;
    char c = static_cast<char>(d); // Explicitly casting double to char
    std::cout << "Double: " << d << ", Char: " << c << std::endl;
    std::cout << "ASCII value of Char: " << static_cast<int>(c) << std::endl;
    return 0;
}
