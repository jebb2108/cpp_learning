#include <iostream>
#include <ciso646>

// В функции используется рекурсивный вызов:
double getMoney(double m, double r, int y)
{

    if(y==0 and double(y)/2==0)
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
    using namespace std;
    // Начальная сумма вклада:
    double money=1000;
    // Процентная ставка:
    double rate=5;
    cout<<"Начальная сумма: "<<money<<endl;
    cout<<"Годовая ставка: "<<rate<<"%\n";
    // Вычисление дохода за разные промежутки времени:
    cout<<"Вклад на один год: "<<getMoney(money, rate, 1)<<endl;
    cout<<"Вклад на 7 лет:"<<getMoney(money, rate, 7)<<endl;
    cout<<"Вклад на 10 лет: ";
    cout<<getMoney(money, rate, 10)<<endl;

    return 0;
}