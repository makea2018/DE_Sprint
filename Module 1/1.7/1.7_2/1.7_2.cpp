/*
�������� ���������, ������� ��������� �������� �� ��� ����������.
*/

#include <iostream>
using namespace std;

// ���������� �������
void leap_year(){
    // ������ ���
    int year;
    cout << "������� ��� (����� �����): ";
    cin >> year;

    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0) {
                cout << to_string(year) + " - ���������� ���";
            }
            else{
                cout << to_string(year) + " - ������������ ���";
            }
        }
        else{
            cout << to_string(year) + " - ���������� ���";
        }
    }
    else {
        cout << to_string(year) + " - ������������ ���";
    }
    return void();
}

int main() {
    // ���������� ������� ���� � ��������� ������
    setlocale(LC_ALL, "Russian");

    // ���������� �������
    leap_year();

    return 0;
}
