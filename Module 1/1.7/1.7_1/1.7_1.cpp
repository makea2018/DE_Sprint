/*
�������� ���������, ������� ���������� ��� �������� � ���������� �����.
��������� ������ �������, ����� ����� ������ ���, ���� ����� �����, �������
��������������� ���������.
*/

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    float a, b;
    cout << "������� ����� 1: ";
    cin >> a;
    cout << "������� ����� 2: ";
    cin >> b;

    /**���������� ��� �����**/
    if (a == b){
       cout << "����� �����!";
    }
    else {
        if (a > b){
            cout << "����� 1 = " + to_string(a) + " ������ ����� 2 = " + to_string(b);
        }
        else {
            cout << "����� 2 = " + to_string(b) + " ������ ����� 1 = " + to_string(a);
        }
    }

    return 0;
}
