#include <iostream>
#include <string>

// Описание класса:
class MyMoney
{
    private: // Закрытые члены класса
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
    public:  // Открытые члены класса:
    // Конструктор без аргументов:
    MyMoney()
    {
        name="Кот Матроскин";
        money=100;
        rate=5;
        time=1;
        std::cout<<"Создан новый объект:\n";
        showAll();
    }
    // Конструктор с четырьмя аргументами:
    MyMoney(std::string n, double m, double r, int t)
    {
        setAll(n,m,r,t);
        std::cout<<"Создан новый объект:\n";
        showAll();
    }
    // Деструктор:
    ~MyMoney()
    {
        std::cout<<"Объект для \""<<name<<"\" удален\n";
        for (int k=1;k<=35;++k)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }

    // Методы класса:
    void showAll()
    {
        using namespace std;
        cout<<"Имя: "<<name<<endl;
        cout<<"Вклад: "<<money<<endl;
        cout<<"Ставка (%): "<<rate<<endl;
        cout<<"Период (лет): "<<time<<endl;
        cout<<"Итоговая сумма: "<<getMoney()<<endl;
        for (int k=1;k<=35;++k)
        {
            cout<<"-";
        }
        cout<<endl;
    }
    void setAll(std::string n, double m, double r, int t)
    {
        name=n;
        money=m;
        rate=r;
        time=t;
    }
};

// Функция:
void postman()
{
    // Создание локального объекта:
    MyMoney objD("Почтальон Печкин", 200, 3, 2);
}

// Главная функция программы:
int main()
{
    using namespace std;
    // Создание объектов:
    MyMoney objA;
    MyMoney objB("Дядя Федор",1500,8,7);
    // Вызов функции:
    postman();
    // Создание динамического объекта:
    MyMoney* objC= new MyMoney("Пес Шарик", 1200, 6, 9);
    cout<<"Все объекты созданы\n";
    // Удаление динамического объекта:
    delete objC;
    cout<<"Выполнение программы завершено\n";
    cout<<endl;
    return 0;
}