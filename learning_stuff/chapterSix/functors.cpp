#include <iostream>
#include <cmath>

// Размер массив:
const int n=10;
// Класс для реализации ряда Тейлора:
class Taylor
{
private:
    // Поле массива:
    double a[n];
public:
    // Операторный метод для индексирования объекта:
    double $operator[](int k)
    {
        return a[k];
    }
    // Конструктор с одним числовым аргументом:
    Taylor(double p=0)
    {
        for(int k=0;k<n;++k)
        {
            (*this)[k]=p; // Индексирование объекта
        }
    }
    // Конструктор с аргументом - указателем:
    Taylor(double *b)
    {
        for(int k=0;k<n;++k)
        {
            (*this)[k]=b[k]; // Индексирование объекта
        }
    }
    // Операторный метод для вычисления значения ряда:
    double operator()(double x)
    {
        double s=0,q=1;
        for(int k=0;k<n;++k)
        {
            s+=(*this)[k]*q; // Индексирование объекта
            q*=x;
        }
        return s;
    }
};

// Главная функция программы:
int main()
{
    using namespace std;
    // Числовой массив:
    double b[n]={0,1,0,1./3,0,2./15,0,17./315,0,62./2835};
    // Создание объектов:
    Taylor myexp,f(1),mytan(b);
    // Индексирование объекта:
    myexp[0]=1;
    // Заполнение массива - поля объекта:
    for(int k=1;k<n;++k)
    {
        myexp[k]=myexp[k-1]/k; // Индексирование объекта
    }
    // Аргумент для вычисления значения функции и ряда:
    double x=1.0;
    // Вычисление значений для ряда и функции:
    cout<<myexp(x)<<" vs. "<<exp(x)<<endl;
    cout<<mytan(x)<<" vs. "<<tan(x)<<endl;
    cout<<f(x/2)<<" vs. "<<1/(1-x/2)<<endl;

    return 0;
}
