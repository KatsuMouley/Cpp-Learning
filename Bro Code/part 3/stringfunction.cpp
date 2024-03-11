#include <iostream>

std::string name(std::string firstName, std::string lastName);

int main(){
    std::string firstName = "Katsu";
    std::string lastName = "Mouley";
    std::cout << name( firstName, lastName);
    return 0;
}
//Quando uma função retorna um valor, ela deve ter o seu tipo definido de acordo com o valor que ela vai retornar.
//Exemplo: se uma função vai retornar uma string, então o seu tipo deveria ser o de uma string.
std::string name(std::string firstName, std::string lastName){
    return firstName + " " + lastName;
}