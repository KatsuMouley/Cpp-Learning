#include <stdio.h>
#include <math.h>
#include <iostream>

int main(void)
{
    double R, A, n = 3.14159;
    scanf(" %lf", &R);
    A = n * pow(R, 2);
    printf("Double Value = %.4lf\n", A);
    return 0;
}