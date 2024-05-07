#include <iostream>
void passByVariable1(std::string nameOfPerson,std::string nameOfAnimal);
void passByVariable2(std::string nameOfPerson,std::string nameOfAnimal);
void passByReference(std::string &nameOfPerson,std::string &nameOfAnimal);
int main(){
    int option;
    using std::string, std::cout;
    string nameOfPerson = "Victor";
    string nameOfAnimal = "cupcake";
    string temp = "Nothing";

    cout << "VALUES BEFORE SWAP" << '\n';
    cout << "*****************" << '\n';
    cout << nameOfAnimal << '\n';
    cout << nameOfPerson << '\n';
    cout << temp << '\n';
    cout << "*****************\n\n";
    std::cout << "1)Pass by reference\n2)Pass by variable\n3)Pass by variable with output inside the function\n";
    std::cin >> option;
    switch (option)
    {
    case 1:
            passByReference(nameOfPerson, nameOfAnimal);
            cout << "VALUES AFTER SWAP" << '\n';
            cout << "*****************" << '\n';
            cout << nameOfAnimal << '\n';
            cout << nameOfPerson << '\n';
            cout << temp << '\n';
            cout << "*****************\n\n";
        break;
    case 2:
            passByVariable1(nameOfPerson, nameOfAnimal);
            cout << "VALUES AFTER SWAP" << '\n';
            cout << "*****************" << '\n';
            cout << nameOfAnimal << '\n';
            cout << nameOfPerson << '\n';
            cout << temp << '\n';
            cout << "*****************\n\n";
        break;
    case 3:
            passByVariable2(nameOfPerson, nameOfAnimal);
        break;
    default:
            passByReference(nameOfPerson, nameOfAnimal);
            cout << "VALUES AFTER SWAP" << '\n';
            cout << "*****************" << '\n';
            cout << nameOfAnimal << '\n';
            cout << nameOfPerson << '\n';
            cout << temp << '\n';
            cout << "*****************\n\n";
        break;
    }
    return 0;
}

void passByVariable1(std::string nameOfPerson,std::string nameOfAnimal){
    using std::string, std::cout;
    string temp = "Nothing";
    temp = nameOfAnimal;
    nameOfAnimal = nameOfPerson;
    nameOfPerson = temp;
    temp = "Nothing";
}

void passByVariable2(std::string nameOfPerson,std::string nameOfAnimal){
    using std::string, std::cout;
    string temp = "Nothing";

    temp = nameOfAnimal;
    nameOfAnimal = nameOfPerson;
    nameOfPerson = temp;
    temp = "Nothing";
    cout << "VALUES AFTER SWAP| THE COPY OF THE VARIABLES SWAPPED" << '\n';
    cout << "*****************" << '\n';
    cout << nameOfAnimal << '\n';
    cout << nameOfPerson << '\n';
    cout << temp << '\n';
    cout << "*****************\n\n";
}

void passByReference(std::string &nameOfPerson,std::string &nameOfAnimal){
    using std::string, std::cout;
    string temp = "Nothing";
    temp = nameOfAnimal;
    nameOfAnimal = nameOfPerson;
    nameOfPerson = temp;
    temp = "Nothing";
}