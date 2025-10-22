#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    scanf_s("%lf", &a);
    scanf_s("%lf", &b);
    scanf_s("%lf", &c);
    if ((a == b)&&(b == c)) {
        printf_s("ravnostranen");
    }
    else if(((a==b)&&(b!=c))||((c==b)&&(a!=c))||((a==c)&&(a!=b)))  {
        printf_s("revnobedren");
    }
    else {
        printf_s("raznostranen");
    }
 
}

