#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	double x;
	scanf_s("%lf", &x);
	double answer = ((1 / 2) * x) + (2 / x);
	printf_s("%lf", answer);
}
