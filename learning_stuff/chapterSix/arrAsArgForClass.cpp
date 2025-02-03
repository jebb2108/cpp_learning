#include <iostream>
#include <cmath>

// Размер массиа:
const int n=10;
// Класс для реализации ряда Тейлора:
class Taylor
{
public:
    // Поле - массив:
    double a[n];
    // Конструктор с одним числовым аргументом:
    Taylor(double p=0)
    {
        for(int k=0;k<n;++k)
        {
            a[k]=p;
        }
    }
    // Конструктор с одним аргументом - указателем:
    Taylor(double* b)
    {
        for(int k=0;k<n;++k)
        {
            a[k]=b[k];
        }
    }
    // Метод для вычисления значения ряда:
    double value(double x)
    {
        double s=0,q=1;
        for(int k=0;k<n;++k)
        {
            s+=a[k]*q;
            q*=x;
        }
        return s;
    }
};

// Главная функция программы:
int main()
{
    // Числовой массив:
    double b[n]={0,1,0,1./3,0,2./15,0,17./315,0,62./2835};
    // Создание объектов:
    Taylor myexp,f(1),mytan(b);
    // Обращение к элементу массива - поля объекта:
    myexp.a[0]=1;
    // Заполнение массива - поля объекта:
    for(int k=1;k<n;++k)
    {
        myexp.a[k]=myexp.a[k-1]/k;
    }
    // Аргумент для вычисления значения функции и ряда:
    double x=1.0;
    // Вычисление значений для ряда и функции:
    std::cout<<myexp.value(x)<<" vs. "<<exp(x)<<std::endl;
    std::cout<<mytan.value(x)<<" vs. "<<tan(x)<<std::endl;
    std::cout<<f.value(x/2)<<" vs. "<<1/(1-x/2)<<std::endl;
    return 0;
}
