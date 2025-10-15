#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    double y;
    scanf_s("%lf", &x);
    y = pow(x, 2) - (9 * x) + (1 / 2);
    printf_s("%lf", y);
}

