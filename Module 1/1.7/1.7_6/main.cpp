/*
Написать программу, которая определяет максимальное число 
из введённой с клавиатуры последовательности положительных чисел.
(длина последовательности неограниченна)
*/

#include <iostream>
using namespace std;

int main()
{
    //Variables
    bool cycle = true;
    int max_num = 0;
    do {
        int num;
        cin >> num;
        if (num == 0){
            cycle = false;
        }
        else{
            if (num > max_num){
                max_num = num;
            }
            else{
                continue;
            }
        }
    }
    while (cycle);
    
    // Print out the max number
    cout << max_num <<endl;

    return 0;
}