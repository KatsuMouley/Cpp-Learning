#include <iostream>


double getTotal(double prices[], int size);

int main () {
    double prices[] = {51.5, 15.41, 156.3, 41.89};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);
    std::cout << "$"<< total;
    return 0;
}
//when a function recieves an array, it decays to a pointer, so the function no longer knows the size of the array, so we can pass it as an aditional value to the function so that we can solve the problem
double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}