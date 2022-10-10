/*
Написать программу, которая проверяет является ли год високосным.
*/

#include <iostream>
using namespace std;

// Определяем функцию
void leap_year(){
    // Вводим год
    int year;
    cout << "Введите год (Целое число): ";
    cin >> year;

    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0) {
                cout << to_string(year) + " - високосный год";
            }
            else{
                cout << to_string(year) + " - невисокосный год";
            }
        }
        else{
            cout << to_string(year) + " - високосный год";
        }
    }
    else {
        cout << to_string(year) + " - невисокосный год";
    }
    return void();
}

int main() {
    // Подключаем Русский язык в командной строке
    setlocale(LC_ALL, "Russian");

    // Используем функцию
    leap_year();

    return 0;
}
