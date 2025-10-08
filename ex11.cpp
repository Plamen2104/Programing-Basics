#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	double a;
	scanf_s("%lf", &a);
	double b;
	scanf_s("%lf", &b);
	double x;
	scanf_s("%lf", &x);
	//Не мога да изчисля y използвайки y. Дава ми грашка. Затова използвам Answer.
	double y = scanf_s("%lf", &y);
	double Answer = (a + b) / (x - (2 * y));
	printf_s("%lf", Answer);
}
