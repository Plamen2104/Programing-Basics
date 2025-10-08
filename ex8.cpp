#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double a = scanf_s("%lf", &a);
    double b = scanf_s("%lf", &b);
    double y = (sqrt(a + b) - sqrt(a -b));
    printf_s("%lf", y);
}

