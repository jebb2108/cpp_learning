#include <iostream>
#include <string>

// Описание класса:
class MyClass
{
public:
    // Текстовое поле:
    std::string name;
    // Целочисленное поле:
    int number;
    // Метод для отображения значений полей:
    void show()
    {
        using namespace std;
        cout<<"Поле name: "<<name<<endl;
        cout<<"Поле number: "<<number<<endl;
    }
};
// Главная функция программы:
int main()
{
    using namespace std;
    // Создание объектов:
    MyClass objA, objB;
    // Объявление указателя на объект:
    MyClass* p;
    // Адрес объекта записывается в указатель:
    p=&objA;
    // Приваивание значений полям объкта:
    // через указатель
    p->name="Объект А";
    p->number=111;
    // Вызов метода через указатель:
    p->show();
    // Новое значение указателя:
    p=&objB;
    // Присваивание значений полям объекта 
    // через указатель:
    p->name="Объект В";
    p->number=222;
    // Вызов метода через указатель:
    p->show();
    cout<<"Проверяем объекты:\n";
    // Проверка значений полей объектов:
    objA.show();
    objB.show();

    return 0;
}
