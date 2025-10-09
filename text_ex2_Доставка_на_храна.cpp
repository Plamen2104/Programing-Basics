#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double chicken_menu;
    printf_s("Enter Chicken menus(10lev) amount:                             ");
    scanf_s("%lf", &chicken_menu);
    double fish_menu; 
    printf_s("Enter Fish menus(9lev) amount:                                 ");
    scanf_s("%lf", &fish_menu);
    double vegetarian_menu;
    printf_s("Enter Vegetarian menus(12lev) amount:                          ");
    scanf_s("%lf", &vegetarian_menu);
    double desert;
    printf_s("Enter the amount of desterts you would like to order:          ");
    scanf_s("%lf", &desert);
    //-------------------------------------------------------------------------
    double chicken_menu_price = chicken_menu *10;
    double fish_menu_price = fish_menu*9;
    double vegetarian_menu_price = vegetarian_menu*12;
    double desert_price = ((chicken_menu_price + fish_menu_price + vegetarian_menu_price) * 20) / 100;
    double delivery = 2.50;
    double Total = chicken_menu_price + fish_menu_price + vegetarian_menu_price + desert_price + delivery;

    //--------------------------------------------------------------------------
    printf_s("------------------------------------------------------------------\n");
    printf_s("Chicken menus total price        = %.2lflev\n", chicken_menu_price);
    printf_s("Fihs menus total price           = %.2lflev\n", fish_menu_price);
    printf_s("Vegetarian menus total price     = %.2lflev\n", vegetarian_menu_price);
    printf_s("Desetrs total price              = %.2lflev\n", desert_price);
    printf_s("Delivery                         = %.2lflev\n", delivery);
    printf_s("------------------------------------------------------------------\n");
    printf_s("Total                            = %.2lflev", Total);
}