#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    scanf_s("%lf", &x);
    double y;
    scanf_s("%lf", &y);
    double answer = 4 / (5 * x * y) + 12;
    printf_s("%lf", answer);
}
