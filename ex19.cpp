#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double x,y;
    scanf_s("%lf", &x);
    scanf_s("%lf", &y);
    double answer = ((((2 * x) + 1)/5) + ((x+1)/((2*pow(y,2)) + x)));
    printf_s("%lf", answer);
}
