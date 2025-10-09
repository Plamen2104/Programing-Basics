#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    double y;
    scanf_s("%lf", &x);
    scanf_s("%lf", &y);
    double answer = pow(x, 3) + (3 * pow(x, 2) * y) + (3 * x * pow(y, 2)) + pow(y, 3);
    printf_s("%lf", answer);
}
