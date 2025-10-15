#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    double y;
    double b;
    scanf_s("%lf", &x);
    scanf_s("%lf", &b);
    y = ((3 * x) - (4 * b)) / (2 * (sqrt(x - b)));
    printf_s("%.2lf", y);
}

 