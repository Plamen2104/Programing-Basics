#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    scanf_s("%lf", &a);
    double x;
    scanf_s("%lf", &x);
    double z;
    scanf_s("%lf", &z);
    double answer = (4 * pow(a, 2) + (34 * x) + pow(z, 5));
    printf_s("%lf", answer);
}
