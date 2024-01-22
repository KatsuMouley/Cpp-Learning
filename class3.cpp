#include <stdio.h>

int main()
{
    double A, B, C, avarage;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    avarage = (((A * 2) + (B * 3) + (C * 5)) / 10);
    printf("MEDIA = %.2lf\n", avarage);
    return 0;
}