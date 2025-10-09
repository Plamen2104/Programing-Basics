#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double D;
    double x1;
    double x2;
    double x;
    double a = 1;
    double b = -9;
    double c = 2;
    D = pow(b, 2) - (4 * a * c);
    x1 = (-b + sqrt(D) / (2 * a));
    x2 = (-b - sqrt(D) / (2 * a));
    printf_s("D = %lf\n", D);
    printf_s("x1 = %lf\n", x1);
    printf_s("x2 = %lf\n", x2);
}
