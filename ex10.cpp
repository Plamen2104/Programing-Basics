#include <iostream>
#include <stdio.h>'
#include <math.h>

int main()
{
	double a;
	scanf_s("%lf", &a);
	double b;
	scanf_s("%lf", &b);
	double c;
	scanf_s("%lf", &c);
	double d;
	scanf_s("%lf", &d);
	double y = a + (b / (c + 2 * d)) - ((a + b) / (a * c)) + d;
	printf_s("%lf", y);
}
