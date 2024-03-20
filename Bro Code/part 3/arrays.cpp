#include <iostream>
using std::string, std::cout, std::cin;

int main(){
    string words[] = {"SPEED","FAMILY","POOR","RICH"};
    cout << words[0] << "\n------\n";
    int sizeOfArray = (sizeof(words)/sizeof(*words));
    for (int i = 0; i < sizeOfArray; i++){
        cout << words[i] << "\n";
    }

    
    return 0;
}