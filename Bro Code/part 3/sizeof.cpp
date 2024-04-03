#include <iostream>

int main(){
    std::string wow = "Hello";
    char cha= 'A';
    bool vdd = true;
    double fl = 1.4;
    float fl1 = 1.5;
    int in = 1;
    long lon = 100L;

    
    std::cout << sizeof(wow) << " Bytes inside String\n";
    std::cout << sizeof(fl) << " Bytes inside Double\n";
    std::cout << sizeof(lon) << " Bytes inside Long\n";
    std::cout << sizeof(fl1) << " Bytes inside Float\n";
    std::cout << sizeof(in) << " Bytes inside Int\n";
    std::cout << sizeof(vdd) << " Bytes inside boolean\n";
    std::cout << sizeof(cha) << " Bytes inside char\n";


    //to find the size of an array, we can divide the size of the array by the size of the data type, or the size of an index inside the array
    //follow the two examples
    char legal[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};//array with 7 chars
    std::cout << sizeof(legal) << " Bytes inside the char array\n";
    double caramba[] = {1.7, 2.4, 3.1, 4.4, 5.4, 6.1, 7.2, 8.2, 9.4, 9.4};
    std::cout << sizeof(caramba) << " Bytes inside the double array\n";
    std::cout << sizeof(caramba)/sizeof(caramba[0]) << " is equals to the size of the array above\n";
    return 0;
}