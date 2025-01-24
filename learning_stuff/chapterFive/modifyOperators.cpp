#include <iostream>
#include <string>

// Описание класса:
class MyMoney
{
    public:
        std::string name;
        double money;
        double rate;
        int time;
        // Конструктор без аргументов:
        MyMoney()
        {
            name="";
            money=0;
            rate=0;
            time=0;
        }
        // Конструктор с четырьмя аргументами:
        MyMoney(std::string n, double m, double r, int t)
        {
            setAll(n, m, r, t);
        }
        // Методы класса:
        double getMoney()
        {
            double s=money;
            for (int k=1;k<=time;++k)
            {
                s*=(1+rate/100);
            }
            return s;
        }
        void showAll()
        {
            using namespace std;
            cout<<"Имя: "<<name<<endl;
            cout<<"Вклад: "<<money<<endl;
            cout<<"Ставка (%): "<<rate<<endl;
            cout<<"Период (лет): "<<time<<endl;
            cout<<"Итоговая сумма: "<<getMoney()<<endl;
            for (int i=0;i<=35;++i)
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
        // Префиксная форма оператора инкремента:
        MyMoney operator++()
        {
            money+=1000;
            return *this;
        }
        // Постфиксная форма оператора инкремента:
        // Для постфикса ФОРМАЛЬНО обязательно указывать
        // тип данных, как аргумент, изменяемого аргумента экземпляра
        MyMoney operator++(int)
        {
            time++;
            // Ключевое слово this это указатель
            // на вызываемый методом экземляр класса
            // * - разыменование его
            return *this;
        }

        // Операторный метод для сложения двух объектов:
        // В прототипе метода используется вызываемый метод объекта,
        // а в аргумент передается рядом стоящий экземпляр.
        MyMoney operator+(MyMoney obj)
        {
            MyMoney tmp;
            tmp.name="Почтальон Печкин";
            tmp.money=money+obj.money;
            // Тернарный оператор!! (? - условие истинно, : - условие ложно)
            tmp.rate=(rate>obj.rate)?rate:obj.rate;
            tmp.time=(time+obj.time)/2;
            return tmp;
        }
};

// Операторная функция для вычитания объектов:
double operator-(MyMoney objX, MyMoney objY)
{
    return objX.getMoney()-objY.getMoney();
}

// Префиксная форма оператора декремента:
MyMoney operator--(MyMoney &obj)
{
    if (obj.money>1000) obj.money-=1000;
    else obj.money=0;
    return obj;
}

// Постфиксная форма оператора декремента:
MyMoney operator--(MyMoney &obj, int)
{
    if (obj.time>0) obj.time--;
    else obj.time=0;
    return obj;
}

// Главная функция программы:
int main()
{
    // Создание объекта:
    MyMoney objA("Кот Матроскин", 1200, 7, 1);
    objA.showAll();
    // Уменьщение значение поля time:
    objA--;
    objA.showAll();
    // Уменьшение значения поля time:
    objA--;
    objA.showAll();
    // Увеличение значения поля time:
    objA++;
    objA.showAll();
    // Уменьшение значения поля money:
    --objA;
    objA.showAll();
    // Уменьшение значения поля money:
    --objA;
    objA.showAll();
    // Увеличение значения поля money:
    ++objA;
    objA.showAll();
    // Создание объекта:
    MyMoney objB("Пес Шарик", 1100, 8, 5);
    objB.showAll();
    // Создание объекта:
    MyMoney objC;
    // Вычисление суммы объектов:
    objC=objA+objB;
    objC.showAll();
    // Вычисление разности объектов:
    std::cout<<"Разница в доходах: "<<objC-objB<<std::endl;

    return 0;
}

