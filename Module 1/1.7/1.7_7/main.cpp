/*
Написать программу, которая выводит таблицу значений функции
y = -2 * x^2 - 5 * x - 8
в диапазоне от range(–4, 4), step = 0,5
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Variables
    float x = -4.0;
    float y;
    // Cycle
    while (x <= 4.0){
        y = (-2 * pow(x, 2)) - (5 * x) - 8;
        x = x + 0.5;
        printf ("x = %.1f; y = %.1f\n", x, y); 
    }

    return 0;
}