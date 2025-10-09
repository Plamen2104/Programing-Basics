#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    double y;
    scanf_s("%lf", &x);
    scanf_s("%lf", &y);
    double answer;
    answer = pow(x, 2) - (2 * x * y) - pow(y,2);
    printf_s("%lf", answer);
}

 