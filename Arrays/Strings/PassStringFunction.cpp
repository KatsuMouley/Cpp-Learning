
#include <stdio.h>

void printStr(char str[]) { printf("String equals to: %s", str); }

int main()
{
    // declare and initialize string
    char str[] = "Hello Wold! How's your mother?";

    // print string by passing string
    // to a different function
    printStr(str);

    return 0;
}