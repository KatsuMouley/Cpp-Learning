#include <iostream>

int main ()
{
    std::string name = "Vitor Luiz Santos Mougenot";
    int num = 36;
    bool value = true;
    std::cout << &name << '\n';
// 0x3fafbff840
// 273531533376 
    std::cout << &num << '\n';
// 0x3fafbff83c
// 273531533372 
    std::cout << &value << '\n';
// 0x3fafbff83b
// 273531533371
    





    return 0;
}