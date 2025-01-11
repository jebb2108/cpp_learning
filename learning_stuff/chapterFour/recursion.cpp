#include <iostream>

// В функции используется рекурсивный вызов:
double getMoney(double m, double r, int y)
{
    if(y==0)
    {
        return m;
    }
    else 
    {
        return (1+r/100) * getMoney(m, r, y-1);
    }
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
    std::cout<<"Вклад на один год: "<<getMoney(money, rate, 1)<<std::endl;
    std::cout<<"Вклад на 7 лет:"<<getMoney(money, rate, 7)<<std::endl;
    std::cout<<"Вклад на 10 лет: ";
    std::cout<<getMoney(money, rate, 10)<<std::endl;

    return 0;
}