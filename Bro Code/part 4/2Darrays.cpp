#include <iostream>

int main(){
    // int value[columns][rows];
    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Mqueen", "fastFUrious", "Skbidi"},
                            {"john", "Skoyyyy", "fraaaaisk"}};
    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for (int i = 0; i<rows; i++)
    {
        std::cout << "|  ";
        for (int j = 0; j<columns; j++)
        {
            std::cout << cars[i][j] << "  |  ";
        }
        std::cout << '\n';
    }
    
    return 0;
}