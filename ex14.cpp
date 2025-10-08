#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	double a;
	scanf_s("%lf", &a);
	double b;
	scanf_s("%lf", &b);
	double c;
	scanf_s("%lf", &c);
   double p = ((a + b + c) / 2);
   double S = sqrt(p * (p - a) * (p - b) * (p - c));
   printf_s("p = %lf\n", p);
   printf_s("S = %lf", S);
}

