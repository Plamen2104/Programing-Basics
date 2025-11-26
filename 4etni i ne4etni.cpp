// 4etni i ne4etni.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
const int size = 10;
#include <iostream>

int main()
{
    float mA[size];
    float value;
    for (int i = 0; i < size;i++) {
        scanf_s("%f", &value);
        mA[i] = value;

    }
    for (int i = 0;i < size;i++) {
        printf("%d\n", i);
    }

}
