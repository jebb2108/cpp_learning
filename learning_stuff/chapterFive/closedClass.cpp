#include <iostream>
#include<string>

// Описание класса:
class MyMoney
{
    private:  // Закрытые члены класса
    std::string name;
    double money;
    double rate;
    int time;
    double getMoney()
    {
        double s=money;
        for (int k=1;k<=time;++k)
        {
            s*=(1+rate/100);
        }
        return s;
    }

    public:  // Открытые члены класса
    void showAll()
    {
        using namespace std;
        cout<<"Имя: "<<name<<endl;
        cout<<"Вклад: "<<money<<endl;
        cout<<"Ставка (%): "<<rate<<endl;
        cout<<"Период (лет): "<<time<<endl;
        cout<<"Итоговая сумма: "<<getMoney()<<endl;
    }
    void setAll(std::string n, double m, double r, int t)
    {
        name=n;
        money=m;
        rate=r;
        time=t;
    }
};

// Главная функция программы:
int main()
{
    // Создание объектовЖ
    MyMoney objA, objB;

    // Присваивание значений полям:
    objA.setAll("Иванов Иван Иванович", 1000, 8, 5);
    objB.setAll("Петров Петр Петрович", 120                                                                   0, 7, 4);

    // Отображение значений полей:
    objA.showAll();
    std::cout<<std::endl;

    objB.showAll();
    std::cout<<std::endl;

    return 0;
}