#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    double y;
    scanf_s("%lf", &x);
    scanf_s("%lf", &y);
    double answer = ((2 * x) * (-5 * x * pow(y, 3))) / (((y * pow(7, 2)) - y) / (x * 5));
    printf_s("%.2lf", answer);
}

