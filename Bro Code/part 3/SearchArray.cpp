#include <iostream>
int searchArray(std::string array[], int size, std::string element);
int main(){
    // int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int size = sizeof(numbers)/sizeof(numbers[0]);
    
    std::string foods[] = {"pizza", "hamburger", "hotdog"};
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    std::string myFood;
    std::cout << "Search an element (pizza, hamburger, hotdog)" << "\n";
    std::cin >> myFood;
    index = searchArray(foods, size, myFood);
    if (index != -1)
    {
        std::cout << myFood << " is at the index " << index << "\n";
    } else {
        std::cout << myFood << " is not in the array " << "\n";
    }
    
    return 0;
}

int searchArray(std::string array[], int size, std::string element){
    for( int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
        
    }
    return -1;
}