#include <iostream>
#include <ciso646>

// Передача функции аргументом массива:
double mean(double *m, int n)
{
    using namespace std;

    // Локальная переменная для записи суммы
    // значений элементов массива:
    double s=0;
    // Вычисление суммы значений элементов массива:
    for (int k=0; k<n; ++k)
    {
        s+=m[k];
    }
    // Результат функции - среднее значение:
    return s/n;
}

// Главная функция программы:
int main()
{
    using namespace std;
    
    // Первый массив:
    double A[]={1,3,8,-2,4};
    // Второй массив:
    double B[]={4,6,2};
    // Вызов функции с передачей аргументов массива:
    cout<<"Среднее по массиву A: "<<mean(A, 5)<<endl;
    cout<<"Среднее по массиву B: "<<mean(B, 3)<<endl;
    return 0;
}