#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double x = scanf_s("%lf", &x);
    double y = (5 - pow(x, 5) / 3) - x + 1;
    printf_s("%lf", y);
}
