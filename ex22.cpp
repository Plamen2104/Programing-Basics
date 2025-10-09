#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    scanf_s("%lf", &x);
    double answer = pow(((sqrt(3 - x)) - (sqrt(2 + x))),2);
    printf_s("%lf", answer);
}
