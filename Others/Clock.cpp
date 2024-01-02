#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(void)
{
    int m = 0, h = 0;
    do
    {
        while (m <= 60) // decimals
        {
            for (int s = 0; s <= 60000; s++) // unity
            {
                printf("%d:", h);
                printf("%d:", m);
                printf("%d\n", s / 1000);
            }
            m++;
        }
        h++;
    } while (h <= 60);

    return 0;
}
