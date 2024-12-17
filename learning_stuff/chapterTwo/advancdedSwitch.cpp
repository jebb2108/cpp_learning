#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    // Целочисленная переменная:
    int num;
    // Инициализация генератора случайных чисел:
    srand(2);
    // Оператор цикла:
    for (int k=1; k<=10; k++) {
        // Случайное число от 2 до 8:
        num=2+rand()%7;
        // Оператор выбора:
        switch(num){
            case 3:
            case 6:
                cout<<num<<": число делится на три"<<endl;
                break;
            case 2:
            case 4:
            case 8:
                cout<<num<<": степень двойки"<<endl;
                break;
            case 5:
                cout<<num<<": пятерка"<<endl;
                break;
            case 7:
                cout<<num<<": семерка"<<endl;
                break;

        }
    }
    
    return 0;
}