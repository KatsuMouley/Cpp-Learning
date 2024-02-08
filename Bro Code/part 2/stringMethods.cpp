#include <string>
#include <iostream>

void emptyMethod(std::string name);
void lengthMethod(std::string name);
void appendMethod(std::string name);

int main()
{
    std::string name;
    std::cout << "Enter your name(Max 20 characters): ";
    std::getline(std::cin, name);
    emptyMethod(name);
    std::cout << "****************************************" << std::endl;

    return 0;
}

void emptyMethod(std::string name)
{
    if (name.empty())
    {
        std::cout << "****************************************" << std::endl;
        std::cout << "**Empty Method**" << std::endl;
        std::cout << "You didn't enter your name" << std::endl;
    }
    else
    {
        std::cout << "****************************************" << std::endl;
        std::cout << "**Length Method**" << std::endl;
        lengthMethod(name);
    }
}

void lengthMethod(std::string name)
{
    std::cout << "Your name is " << name.length() << " characters long" << std::endl;
    if (name.length() > 20)
    {
        std::cout << "Your name is too big!" << std::endl;
        name.clear(); // This will clear the variable
    }
    else
    {
        std::cout << "Welcome! " << std::endl;
        appendMethod(name);
        std::cout << "Welcome to the company " << name.insert(0, "@") << "!" << std::endl;
    }
}

void appendMethod(std::string name)
{
    std::cout << "****************************************" << std::endl;
    std::cout << "**Append Method**" << std::endl;
    // int findLocation = name.find(' '); // This method give the position of the first character that we gave it to find it;
    // name.erase(findLocation);
    //  Nesta linha de código, basicamente estou pedindo para o código apagar todo o nome a partir da primeira linha de espaço
    //  também poderiamos utilizar name.erase(findLocation, name.length()), porém o que foi utilizado é mais simples
    name.append("@LexLuthor.com");
    std::cout << "Your user name is now " << name << std::endl;
}