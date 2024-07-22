#include <iostream>
#include "Fac.h"

int Fac::fac(int value){
    if (value > 1)
    {
        return (value * fac(value - 1));
    } else {
        return 1;
    }
}