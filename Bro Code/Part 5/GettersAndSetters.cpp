#include <iostream>

class Student{
    private:
        std::string name = "Standard";
        int age = 0;
        double gpa = 0;

    public:
        Student(std::string name, int age, double nota){
            setName(name);
            setAge(age);
            setGpa(nota);// Se o parametro não é igual a variavel, então não há necessidade de utilizar a palavra chave "this".
        }
        Student(std::string name){
            this->name = name;
        }
        Student(int age, double gpa){
            this->age = age;
            this->gpa = gpa;
        }
        Student(){}

        std::string getName(){
            return this->name;
        }
        int getAge(){
            return this->age;
        }
        double getGpa(){
            return this->gpa;
        }
        void setName(std::string name){
            this->name = name;
        }
        void setAge(int age){
            this->age = age;
        }
        void setGpa(double gpa){
            this->gpa = gpa;
        }

};

int main(){
    Student *student = NULL;
    Student student1(30, 9.5);
    Student student2("Vitor", 19, 9.1);
    Student student3("Katsu");
    student = new Student();
    
    std::cout << "--------------------\n";
    //Usando ponteiros e memoria dinâmica, se torna possível criar um objeto que muda durante a execução do código
    std::cout << student->getName() << '\n';
    std::cout << student->getAge() << '\n';
    std::cout << student->getGpa() << '\n';
    std::cout << "--------------------\n";
    student = new Student( 19, 10);
    
    std::cout << student1.getName() << '\n';
    std::cout << student1.getAge() << '\n';
    std::cout << student1.getGpa() << '\n';
    std::cout << "--------------------\n";
    student->setName("katsu");
    std::cout << student2.getName() << '\n';
    std::cout << student2.getAge() << '\n';
    std::cout << student2.getGpa() << '\n';
    std::cout << "--------------------\n";
    
    std::cout << student3.getName() << '\n';
    std::cout << student3.getAge() << '\n';
    std::cout << student3.getGpa() << '\n';
    std::cout << "--------------------\n";
    
    //Usando ponteiros e memoria dinâmica, se torna possível criar um objeto que muda durante a execução do código
    std::cout << student->getName() << '\n';
    std::cout << student->getAge() << '\n';
    std::cout << student->getGpa() << '\n';
    std::cout << "--------------------\n";
    
    return 0;
}