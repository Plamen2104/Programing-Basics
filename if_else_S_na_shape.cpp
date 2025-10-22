#include <iostream>
#include <stdio.h>
#include <math.h>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "bulgrian");
    double a, b, c;
    scanf_s("%lf", &a);
    scanf_s("%lf", &b);
    scanf_s("%lf", &c);
    if( ((a + b) > c) && ((b + a) > a) && ((a+c)>b)){
        printf_s("It is a threeangle");
    }
    else {
        printf_s("This isn't a threeangle");
    }
    double p = ((a + b + c) / 2);
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    printf_s("p = %lf\n", p);
    printf_s("S = %lf", S);
}
