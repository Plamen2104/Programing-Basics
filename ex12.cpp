#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    //Тук имам същия проблем като със ex11 затова пак изполвам Answer.
    double a;
    scanf_s("%lf", &a);
    double y;
    scanf_s("%lf", &y);
    double x;
    scanf_s("%lf", &x);
    double Answer = (a + (a / (x - 2)) * y);
    printf_s("%lf", Answer);
}
