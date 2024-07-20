#include <iostream>

// Structs are a structure that group related variables under one name
// structs can contain many different data types (String, Int, Double, Bool, etc.)
// Variables in a struct are known as "Members"
// Members can be access with . "Class member acess Operator"

struct student
{
    std::string name;
    double gpa;
    bool enrolled = true;
};

int main()
{
    student student1;
    student1.name = "Josh";
    student1.gpa = 2.1;
    if (student1.enrolled)
    {
        std::cout << "Student 1: \n";
        std::cout << student1.name << '\n';
        std::cout << student1.gpa << '\n';
    }
    student student2;
    student2.name = "Patrik";
    student2.gpa = 9.1;
    if (student2.enrolled)
    {
        std::cout << "Student 2: \n";
        std::cout << student2.name << '\n';
        std::cout << student2.gpa << '\n';
    }
    student student3;
    student3.name = "James";
    student3.gpa = 10;
    student3.enrolled = false;
    if (student3.enrolled)
    {
        std::cout << "Student 3: \n";
        std::cout << student3.name << '\n';
        std::cout << student3.gpa << '\n';
    }

    return 0;
}