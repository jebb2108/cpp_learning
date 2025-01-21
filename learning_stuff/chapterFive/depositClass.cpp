#include <iostream>
#include <string>

// Описание класса:
class MyMoney{
    public:
    // Поля:
    std::string name;
    double money;
    double rate;
    int time;
    // МетодыЖ
    double getMoney()
    {
        double s=money;
        for (int k=1;k<=time;++k)
        {
            s*=(1+(rate/100));
        }
        return s;
    }
    void showAll()
    {
        using namespace std;
        cout<<"Имя: "<<name<<endl;
        cout<<"Вклад: "<<money<<endl;
        cout<<"Ставка (%): "<<rate<<endl;
        cout<<"Период: "<<time<<endl;
        cout<<"Итоговая сумма: "<<getMoney()<<endl;
    }
};

// Главная функция программы:
int main()
{
    // Создание объекта:
    MyMoney obj;
    // Присваивание значений полям:
    obj.name="Иванов Иван Иванович";
    obj.money=1000;
    obj.rate=8;
    obj.time=5;
    // Вызов метода:
    obj.showAll();
    
    return 0;
}