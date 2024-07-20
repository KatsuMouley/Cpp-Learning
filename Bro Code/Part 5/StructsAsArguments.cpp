#include <iostream>
struct Car{
    std::string name;
    int year;
    std::string color;
};

void printCarByCopy(Car car);
void printCarByAdress(Car &car);
void paintCar(Car &car, std::string color);

int main(){
    Car car1, car2;
    car1.name = "Mustang";
    car1.year = 2024;
    car1.color = "Red";
    
    car2.name = "Corvette";
    car2.year = 2019;
    car2.color = "Blue";
    
    std::cout << &car1 << '\n';
    printCarByCopy(car1);
    paintCar(car2, "Red");
    std::cout << &car2 << '\n';
    printCarByAdress(car2);
    
    return 0;
}

void printCarByCopy(Car car){
    std::cout << "----------------------\n";
    std::cout << &car << '\n';
    std::cout << car.name << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}
void printCarByAdress(Car &car){
    std::cout << "----------------------\n";
    std::cout << &car << '\n';
    std::cout << car.name << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}
void paintCar(Car &car, std::string color){
    car.color = color;
}