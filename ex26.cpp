#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    double a;
    scanf_s("%lf", &x);
    scanf_s("%lf", &a);
    double answer = ((3 * x) + 2) / (a - 1);
    printf_s("%lf", answer);
}
