#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b;
    scanf_s("%lf", &a);
    scanf_s("%lf", &b);
    if (a >= b) {
        printf_s("%lf",a);
    }
  
    else {
        printf_s("%.2lf", b);
    }
}

