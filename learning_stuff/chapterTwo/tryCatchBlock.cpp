#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "Решение уравнения Ax = B\n";
    // Параметры уравнения:
    double a, b;
    // Считывание значений для параметров уравнения:
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;
    // Контролируемый блок кода:
    try
    {
        if (a != 0)
        {
            // Генерирование исключения:
            throw a;
        }
        else if (b != 0)
        {
            // Генерирование исключения:
            throw "Решений нет";
        }
        cout << "Решение - это любое число" << endl;
    }
    // Обработка числового исключения:
    catch (double e)
    {
        cout << "Решение уравнения: " << a / e << endl;
    }
    // Обработка текстового исключения:
    catch (char* e)
    {
        cout << e << endl;
    }

    return 0;
}