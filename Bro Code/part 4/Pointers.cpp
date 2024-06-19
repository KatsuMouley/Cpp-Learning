#include <iostream>
// pointers = variable that stores a memory address of another variable
//                    sometimes it's easier to work with an address         

// & address-of operator
// Acessa o endereço
// * dereference operator
// Acesso o conteudo no endereço

int main(){
    std::string name = "Katsu";
    int age = 18;
    int count[5] = {1, 2, 3, 4, 5};
    std::string *pName = &name;
    int *pAge = &age;
    int *pCount = count;
    int **ppCount = &pCount;// I don't understand this YET, so... what the hell is this?
    //Hello, this is me from the future, this is a pointer to a pointer, which at first can be seen unecessary but trust me, it can be magicly used when it's needed.
    std::cout << "Hello " << *pName << "\n";
    std::cout << "You're " << *pAge << " years old\n";
    std::cout << pCount << '\n';
    std::cout << "Arrays are already pointers " << *pCount << '\n';
    //IT WORKS???? WHAT?
    std::cout << "\n\n\n----\n" << ppCount << '\n';
    return 0;
}