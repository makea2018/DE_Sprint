/*
Написать программу, которая выводит таблицу квадратов
десяти первых положительных чисел.
*/

#include <iostream>
#include <cmath>

int main()
{
    int arr[10];
    std::cout << "Array is:\n";
    for (int i = 1; i <= 10; i++){
        arr[i] = pow(i, 2);
        std::cout << arr[i] <<std::endl;
    }
}