#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    scanf_s("%lf", &x);
    double answer = pow(x, 2) - (1 / x);
    printf_s("%lf", answer);
    //Не работи и не знам как да го оправя
}
