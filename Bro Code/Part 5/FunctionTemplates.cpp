#include <iostream>

// A function template describes what a function looks like
// It can be used to generate as many overloaded functions as needed, each using different data types
int maxC(int x, int y){
    return (x > y) ? x : y;
}
double maxC(double x, double y){
    return (x > y) ? x : y;
}
char maxC(char x, char y){
    return (x > y) ? x : y;
}
template <typename T, typename U>
auto max(T x, U y){
    return (x > y) ? x : y;
}

int main(){
    std::cout << maxC(1, 2) << " Integers \n";
    std::cout << maxC(1.1, 2.1) << " Doubles \n";
    std::cout << maxC('1', '2') << " Chars \n";
    std::cout << max('1', 2.1) << " Template \n";//It returns 49, which is 1 in the ASCII, since 49 is bigger than 2.1, but if we turns the 2.1 into an character too, the result will be 3288625 
    return 0;
}
