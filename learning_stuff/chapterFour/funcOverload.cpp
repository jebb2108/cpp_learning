#include <iostream>

// Функция с двумя аргументами:
double getMoney(double m, double r)
{
    return m*(1+r/100);
}

// Функция с тремя аргументами:
double getMoney(double m, double r, int y)
{
    double s=m;
    for (int k=1; k<=y; k++)
    {
        s*=(1+r/100);
    }
    return s;
}

// Функция с четырьмя аргументами:
double getMoney(double m, double r, int y, int n)
{
    return getMoney(m, r/n, y*n);
}

// Главная функция программы:
int main()
{
    // Начальная сумма вклада:
    double money=1000;
    // Процентная ставка:
    double rate=5;
    std::cout<<"Начальная сумма: "<<money<<std::endl;
    std::cout<<"Годовая ставка: "<<rate<<"%\n";
    // Вычисление дохода за разные промежутки времени:
    std::cout<<"Вклад на один год: "<<getMoney(money, rate)<<std::endl;
    std::cout<<"Вклад на 7 лет:"<<getMoney(money, rate, 7)<<std::endl;
    std::cout<<"Вклад на 7 лет\n(начисляется 3 раза в год): ";
    std::cout<<getMoney(money, rate, 7, 3)<<std::endl;

    return 0;
}