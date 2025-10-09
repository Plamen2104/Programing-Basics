#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    double a;
    scanf_s("%lf", &x);
    scanf_s("%lf", &a);
    double answer = (sqrt((x + 1) / (2 * a))) + (((2 * a) - x) / 2);
    printf_s("%lf", answer);
}

