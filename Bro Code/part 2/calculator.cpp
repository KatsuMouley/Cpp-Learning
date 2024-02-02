#include <iostream>

void calculator();

int main()
{
    std::cout << "********************Calculator**********************" << std::endl;
    calculator();
    std::cout << "****************************************************" << std::endl;
    return 0;
}

void calculator()
{
    double num1, num2, numBuffer;
    char op;
    std::cout << "Please enter an operation ( + - * /)" << std::endl;
    std::cin >> op;
    std::cout << "Please enter an Initial number" << std::endl;
    std::cin >> num1;
    std::cout << "Please enter a second number" << std::endl;
    std::cin >> num2;

    switch (op)
    {
    case '+':
        numBuffer = num1 + num2;
        break;
    case '-':
        numBuffer = num1 - num2;
        break;
    case '*':
        numBuffer = num1 * num2;
        break;
    case '/':
        numBuffer = num1 / num2;
        break;

    default:
        std::cout << "That's not an operation." << std::endl;
        break;
    }
    std::cout << "The result of " << num1 << " " << op << " " << num2 << " is " << numBuffer << std::endl;
}