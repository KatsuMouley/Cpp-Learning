#include <iostream>

void bakeCake();
void bakeCake(std::string topping1);
void bakeCake(std::string topping1, std::string topping2);

int main(){
    bakeCake();
    bakeCake("Chocolate");
    bakeCake("Chocolate","Strawberries");
    return 0;
}

void bakeCake(){
    std::cout << "Here's your cake!\n";
}
void bakeCake(std::string topping1){
    std::cout << "Here's your "<< topping1<<" cake!\n";
}
void bakeCake(std::string topping1, std::string topping2){
    std::cout << "Here's your with "<< topping1 <<" cake with "<< topping2<<" topping!\n";
}
//Multiple functions can have the same name as long as their paramaters are different!