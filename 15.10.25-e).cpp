#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, x;
    scanf_s("%lf", &x);
    scanf_s("%lf", &a);
    scanf_s("%lf", &b);
    double y = (((5 * a * b) + (3 * pow(x, 5))) / sqrt((pow(a,2)+(2*a*b)-pow(b,2)) + 1 / 2)) * ((8 * x) / pow(b, 5));
    printf_s("%.2lf", y);

}

