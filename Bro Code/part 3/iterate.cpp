#include <iostream>

int main(){
    std::string students[] = {"Spongebob", "James", "Jack"};
    int SizeOfArray = sizeof(students)/sizeof(std::string);
    for (int i = 0; i < SizeOfArray; i++)
    {
        std::cout << "Hello " << students[i] << "\n";
    }
    
    return 0;
}