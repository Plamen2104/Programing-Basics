#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double answer = (pow(((1 - sqrt(2)) / sqrt(3)), 2)) - (pow(((sqrt(3) - 2) / sqrt(2)), 2));
    printf_s("%lf", answer);
}
