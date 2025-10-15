#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    double y;
    scanf_s("%lf", &x);
    scanf_s("%lf", &y);
    double answer = (((2 / 3) * pow(x, 3)) + ((1 / y) * x)) / (pow(x, 2) - (1 / x));
    printf_s("%.2lf", answer);

}

