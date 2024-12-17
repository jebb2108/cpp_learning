#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    // Целочисленные переменные:
    int num, k;
    // Выполняется оператор цикла:
    for (k = 1; k <= 5; k++)
    {
        cout << "Укажите число от 1 до 3: ";
        // Считывание значения переменной:
        cin >> num;
        // Внешний условный оператор (1-й уровень):
        if (num == 1)
        {
            cout << "Это единица" << endl;
        }
        // Блок else внешнего
        // условного оператора (1-й уровень)
        else
        {
            // Внутренний условный оператор (2-й уровень):
            if (num == 2)
            {
                cout << "Это двойка" << endl;
            }
            // Блок else внутреннего оператора (2-й уровень):
            else
            {
                // Внутренний условный оператор (3-й уровень):
                if (num == 3)
                {
                    cout << "Это тройка" << endl;
                }
                // Блок else внутреннего
                // условного оператора (3-й уровень)
                else
                {
                    cout << "Я не знаю такого числа" << endl;
                }
            }
        }
    }

    return 0;
}