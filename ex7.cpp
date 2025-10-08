#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double x = scanf_s("%lf", &x);
    double a = scanf_s("%lf", &a);
    double y = ((pow(x + a, 5)) + (abs(x + 2 * a)) / (5 * a + sqrt(pow(a, 5))));
    printf_s("%lf", y);
}
