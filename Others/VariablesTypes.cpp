#include <stdio.h>
#include <math.h>
int main(void)
{
    // Por que double e não float?
    short int y = 1;
    printf("short int y = %hd\n", y);
    double R, A, n = 3.14159;
    scanf(" %lf", &R);
    A = n * pow(R, 2);
    printf("Double Value = %.4lf\n", A);
    return 0;
}

/*
Precisão:

float representa números de ponto flutuante de precisão simples. Ele oferece aproximadamente 7 dígitos de precisão.
double representa números de ponto flutuante de precisão dupla. Ele oferece aproximadamente 15 dígitos de precisão.
Tamanho do armazenamento:

Em muitas linguagens de programação, um float geralmente ocupa 4 bytes (32 bits).
Um double geralmente ocupa 8 bytes (64 bits).
Faixa de valores:

double tem uma faixa maior de valores que pode representar em comparação com float.
float é suficiente para muitas aplicações, mas double é preferido quando é necessária uma precisão maior ou quando se lidam com valores muito grandes ou muito pequenos.

*/

/*
Now lets see other variables types and their differences.

°integer or int
it weights 2 or 4 bytes
Stores whole numbers, without decimals

%d or %i	int

°float
it weights 4 bytes	Stores fractional numbers, containing one or more decimals.
Sufficient for storing 6-7 decimal digits

%f	float

°double
8 bytes	Stores fractional numbers, containing one or more decimals.
Sufficient for storing 15 decimal digits

%lf	double

char
1 byte	Stores a single character/letter/number, or ASCII values.

%c	char

%s for strings(Arrays)
-----------------------------------------------------------------------------------------------------------------
Data Type
Size (bytes)
Range
Format Specifier

short int
2
-32,768 to 32,767
%hd

unsigned short int
2
0 to 65,535
%hu

unsigned int
4
0 to 4,294,967,295
%u

int
4
-2,147,483,648 to 2,147,483,647
%d

long int
4
-2,147,483,648 to 2,147,483,647
%ld

unsigned long int
4
0 to 4,294,967,295
%lu

long long int
8
-(2^63) to (2^63)-1
%lld

unsigned long long int
8
0 to 18,446,744,073,709,551,615
%llu

signed char
1
-128 to 127
%c

unsigned char
1
0 to 255
%c

float
4
1.2E-38 to 3.4E+38	%f

double
8
1.7E-308 to 1.7E+308	%lf

long double
16
3.4E-4932 to 1.1E+4932	%Lf

*/