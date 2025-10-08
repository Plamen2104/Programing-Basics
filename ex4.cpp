#include <iostream>
#include <math.h>
#include <stdio.h>

int main()
{
    double a ;
    scanf_s("%lf", &a);
    double b ;
    scanf_s("%lf", &b);
    double y = ((pow(a,2)+(2*a*b)+pow(b,2))-(4*a*b) / sqrt(3*abs(a)));
    printf("%lf", y);
}

