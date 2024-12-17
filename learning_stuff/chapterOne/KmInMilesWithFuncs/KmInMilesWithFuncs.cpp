#include <iostream>
#include <cstdlib>
using namespace std;

// Функция для считывания расстояния в милях:
double getDistMile()
{
    // Переменная для записи результата функции:
    double dist;
    // Запрос на ввод расстояния в милях:
    cout << "Укажите расстояние в милях: ";
    // Считывание значения для расстояния в милях:
    cin >> dist;
    // Результат функции:
    return dist;
}
// Функция для перевода милей в киллометры:
double getDistKm(double dist)
{
    // В одной миле километров:
    double distMile = 1.609344;
    // Результат функции:
    return dist * distMile;
}

int main()
{
    // Переменная для записи расстояния в милях:
    double distMile = getDistMile();
    // Выполнение вычислений:
    cout << "Расстояние (в км): " << getDistKm(distMile) << endl;
    return 0;
}