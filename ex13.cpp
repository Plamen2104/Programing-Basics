#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    scanf_s("%lf", &x);
    double A = sqrt(x) + (3 * pow(x, 3));
    double B = abs((sqrt(2 + (x * 3))) / (pow(x, 4) - 2));
    printf_s("%lf\n", A);
    printf_s("%lf", B);
}

