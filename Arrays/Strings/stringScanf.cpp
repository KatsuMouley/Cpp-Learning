#include <stdio.h>

// driver code
int main()
{
    char str[20];

    // using scanset in scanf
    scanf("%[^\n]s", str);

    // printing read string
    printf("%s", str);

    return 0;
}