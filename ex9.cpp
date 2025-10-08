#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double a = scanf_s("%lf", &a);
    double b = scanf_s("%lf", &b);
    double y = 2 + abs(a) + abs(1 - b);
    printf_s("%lf", y);
}
