#include <iostream>

int main(){
    std::string students[] = {"Spongebob", "James", "Jack"};
    for (std::string student : students)
    {
        std::cout << student << "\n";
    }
    int grades[] = {1 , 2 ,3 , 4 ,5 ,6 ,7 ,8};
    std::cout << "\n";
    for (int grade : grades){
        std::cout << grade << "\n";
    }
    return 0;
}