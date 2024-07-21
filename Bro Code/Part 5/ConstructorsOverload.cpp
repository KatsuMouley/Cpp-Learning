#include <iostream>

class Student{
    public:
        std::string name = "Standard";
        int age = 0;
        double gpa = 0;
        Student(std::string name, int age, double nota){
            this->name = name;
            this->age = age;
            gpa = nota;// Se o parametro não é igual a variavel, então não há necessidade de utilizar a palavra chave "this".
        }
        Student(std::string name){
            this->name = name;
        }
        Student(int age, double gpa){
            this->age = age;
            this->gpa = gpa;
        }
        Student(){}
};

int main(){
    Student *student = NULL;
    Student student1(30, 9.5);
    Student student2("Vitor", 19, 9.1);
    Student student3("Katsu");
    student = new Student();
    
    std::cout << "--------------------\n";
    //Usando ponteiros e memoria dinâmica, se torna possível criar um objeto que muda durante a execução do código
    std::cout << student->name << '\n';
    std::cout << student->age << '\n';
    std::cout << student->gpa << '\n';
    std::cout << "--------------------\n";
    student = new Student("katsu", 19, 10);
    
    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << "--------------------\n";

    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << "--------------------\n";
    
    std::cout << student3.name << '\n';
    std::cout << student3.age << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << "--------------------\n";
    
    //Usando ponteiros e memoria dinâmica, se torna possível criar um objeto que muda durante a execução do código
    std::cout << student->name << '\n';
    std::cout << student->age << '\n';
    std::cout << student->gpa << '\n';
    std::cout << "--------------------\n";
    
    return 0;
}