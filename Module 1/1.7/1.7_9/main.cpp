/*
�������� ��������� � ������ student, ����������
����: ������� � ��������, ����� ������, ������������
(������ �� ���� ���������).
������� ������ �� ������ ��������� ������ ����,
����������� ������ �� ����������� �������� �����.
�������� ����������� ������ ������� � ������� ����� ���������,
������� ������, ������ ������ 4 ��� 5.
*/

#include <iostream>
#include <time.h>
using namespace std;

// ��������� ����� Person
class student{
public:
    // Variables
    string name;
    int group;
    int arr[5];

    // Funtions
    string help_message(){
        return "����� �� ���� �����������, ��� ������ ��� �������. ������� ������, ���� ���������������� ������ fill array � show array � ������� main";
    }
    /*int fill_array(int massive){
        arr = massive;
        return arr;
    }
    void print_array(){
        for (auto i: arr){
            cout << " " << i <<endl;
        }
        return void();
    }*/
};

int main()
{
    // ��������� ������� ����
    setlocale(LC_ALL, "Russian");

    student st1;
    st1.name = "������� �.�.";
    st1.group = 1;
    cout <<"���: " << st1.name <<endl;
    cout <<"����� ������: " << st1.group <<endl;
    cout << st1.help_message();
    /*st1.fill_array({1,3,2,5,4});
    st1.print_array();*/

    return 0;
}

