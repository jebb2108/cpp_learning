#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //
    const double mileInKm = 1.6;
    /* переменные для записи расстояния
    в милях и километрах */
    double distKm, distMile;
    // Запрос на ввод расстояния в милях
    cout << "Введите количество миль: ";
    // Считывания значения для расстояния в милях
    cin >> distMile;
    // Вычисление расстояния в километрах
    distKm = distMile * mileInKm;
    // Отображение результата вычислений
    cout << "Получившееся расстояние в километрах: " << distKm << endl;

    return 0;
}