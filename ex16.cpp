#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    scanf_s("%lf", &a);
    double x;
    scanf_s("%lf", &x);
    double answer = ((2 / 3) * pow(x, 2) - ((1 / 7) * x) + ((1 / 5) * a));
    printf_s("%lf", answer);
    //Не знам къде ми е грешката
}
