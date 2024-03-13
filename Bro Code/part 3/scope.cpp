#include <iostream>
/*const is reccomended for global variables*/ int mynum = 2;//Local Variable
void printnum();
int main (){
    printnum();
    std::cout << mynum << std::endl;//printing a global variable because there's no local variable with this name
    return 0;
}
void printnum(){
    int mynum = 1;//Local Variable
    std::cout << mynum << std::endl;//Printing a local variable, local variable have more prioritie than the global
    std::cout << ::mynum << std::endl;//Printing a global variable
}