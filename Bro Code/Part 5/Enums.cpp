#include <iostream>
// enums are a user-defined data type that consists of paired named-integer constants. Great if you have a set of potential options

enum Day{sunday = 0, monday = 1, tuesday = 2, wednesday = 3,
         thursday, friday, saturday = 6};

int main(){

    Day today = friday;
    switch (today)
    {
    case sunday: std::cout << "It is Sunday!\n";
        break;
    case monday: std::cout << "It is Monday!\n";
        break;
    case tuesday: std::cout << "It is Tuesday!\n";
        break;
    case wednesday: std::cout << "It is Wednesday!\n";
        break;
    case 4: std::cout << "It is Thursday!\n";
        break;
    case 5: std::cout << "It is Friday!\n";
        break;
    case saturday: std::cout << "It is Saturday!\n";
        break;
    
    default:
        break;
    }

    return 0;
}