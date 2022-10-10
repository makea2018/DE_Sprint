/*
Создайте структуру с именем student, содержащую
поля: фамилия и инициалы, номер группы, успеваемость
(массив из пяти элементов).
Создать массив из десяти элементов такого типа,
упорядочить записи по возрастанию среднего балла.
Добавить возможность вывода фамилий и номеров групп студентов,
имеющих оценки, равные только 4 или 5.
*/

#include <iostream>
#include <time.h>
using namespace std;

// Определим класс Person
class student{
public:
    // Variables
    string name;
    int group;
    int arr[5];

    // Funtions
    string help_message(){
        return "Далее не могу разобраться, как делать это задание. Получаю ошибку, если раскоментировать методы fill array и show array в функции main";
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
    // Подключаю Русский язык
    setlocale(LC_ALL, "Russian");

    student st1;
    st1.name = "Макутин Е.А.";
    st1.group = 1;
    cout <<"ФИО: " << st1.name <<endl;
    cout <<"Номер группы: " << st1.group <<endl;
    cout << st1.help_message();
    /*st1.fill_array({1,3,2,5,4});
    st1.print_array();*/

    return 0;
}

