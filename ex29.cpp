#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    double x;
    scanf_s("%lf", &a);
    scanf_s("%lf", &x);
    double answer = (pow((x + (2 * a)), 2) / sqrt(5)) * pow((a - x), 2);
    printf_s("%lf", answer);
}
