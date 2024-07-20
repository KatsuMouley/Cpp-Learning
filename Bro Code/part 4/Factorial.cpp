#include <iostream>

int factorial(int value);

int main(){
    std::cout << factorial(10);
    return 0;
}

int factorial(int value){
    if (value > 1)
    {
        return (value * factorial(value - 1));
    } else {
        return 1;
    }
    
}