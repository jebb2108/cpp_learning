#include <iostream>

// Функция с аргументами, имеющие
// значения по умолчанию
double getMoney(double m, double r, int y=1, int n=1)
{
    double s=m;
    double z=n*y;
    double q=r/n;
    for (int k=1; k<=z; k++)
    {
        s*=(1+q/100);
    }
    return s;
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