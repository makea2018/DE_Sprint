/*
Необходимо создать двумерный массив 5 х 5.
Далее написать функцию, которая заполнит его случайными числами
от 30 до 60. Создать еще две функции, которые находят максимальный
и минимальный элементы этого двумерного массива.
*/

#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

// Global variable
int array[5][5];

// Add elements to the array through range (30, 60)
void add_elements_to_array(){
    //Define a range
    int upper = 60;
    int lower = 30;
    for (int i = 0; i < size(::array); i++){
        for (int j = 0; j < size(::array); j++){
            ::array[i][j] = (rand() % (upper - lower + 1)) + lower;
            printf("%d\t", ::array[i][j]); 
        }
        cout <<endl;
    }

    return void();
}

// Find max element of array
void maxElementArray(){
    int maxEl = 0;
    for (int i = 0; i < size(::array); i++){
        for (int j = 0; j < size(::array); j++){
            maxEl = (::array[i][j] >= maxEl) ? ::array[i][j] : maxEl;
        }
    }
    cout << "Max element of array = " << maxEl <<endl;
    return void();
}
// Find min element of array
void minElementArray(){
    int minEl = 0;
    for (int i = 0; i < size(::array); i++){
        for (int j = 0; j < size(::array); j++){
            if (minEl == 0) minEl = ::array[i][j];
            minEl = (::array[i][j] >= minEl) ? minEl : ::array[i][j];
        }
    }
    cout << "Min element of array = " << minEl <<endl;
    return void();
}
// Main function
int main()
{
    add_elements_to_array();
    maxElementArray();
    minElementArray();
    return 0;
}