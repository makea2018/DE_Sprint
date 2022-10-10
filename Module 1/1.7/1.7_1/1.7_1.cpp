/*
Написать программу, которая сравнивает два введённых с клавиатуры числа.
Программа должна указать, какое число больше или, если числа равны, вывести
соответствующее сообщение.
*/

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    float a, b;
    cout << "Введите число 1: ";
    cin >> a;
    cout << "Введите число 2: ";
    cin >> b;

    /**Сравниваем два числа**/
    if (a == b){
       cout << "Числа равны!";
    }
    else {
        if (a > b){
            cout << "Число 1 = " + to_string(a) + " больше числа 2 = " + to_string(b);
        }
        else {
            cout << "Число 2 = " + to_string(b) + " больше числа 1 = " + to_string(a);
        }
    }

    return 0;
}
