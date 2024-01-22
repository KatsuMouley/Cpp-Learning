#include <iostream>

void NameSpaSecond();

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    int x = 0;

    std::cout << x << std::endl;        // if the namespace is not specified, it'll print the local variable
    std::cout << first::x << std::endl; // else, if we specify the namespace, we'll print it.
    NameSpaSecond();
    return 0;
}

void NameSpaSecond()
{
    using namespace second; // Other way to use namespace is using "using" prefix
    using std::cout;
    using std::endl;
    using std::string;
    // Now, you won't necessarly use this all the time, but when it's there, you'll know for what purpose it's there.
    string name = "This is the 'using' prefix";
    cout << x << endl;
    cout << name << endl;
}

/*
Namespace = provides a solution for preveting name conflicts in large projects. Each entity needs an unique name.
A namespace allows for identically named entities as long as the namespaces are different.
*/