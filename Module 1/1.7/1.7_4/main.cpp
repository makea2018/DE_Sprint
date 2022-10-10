/*
Проверить на чётность введённое с клавиатуры число
*/


#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Input some integer number: ";
    cin >> number;
    if (number % 2 == 0){
        cout << "Number " + to_string(number) + " is even";
    }
    else{
        cout << "Number " + to_string(number) + " is odd";
    }

    return 0;
}