#include <iostream>
#include <cstdlib>

// Передача аргументов по значению:
void swap(char &a, char &b)
{
    using namespace std;

    cout<<"Вызывается функция swap()"<<endl;
    // Проверяются значения аргументов функции:
    cout<<"Первый аргумент: "<<a<<endl;
    cout<<"Второй аргумент: "<<b<<endl;
    // Изменение значений аргументов функции:
    char t=b;
    b=a;
    a=t;
    for (int i=1; i<=10; i++)
    {
        cout<<"-";
    }
    cout<<endl;
    // Проверяются значения аргументов функции:
    cout<<"Первый аргумент: "<<a<<endl;
    cout<<"Второй аргумент: "<<b<<endl;
    cout<<"Выполнение функции swap() завершено"<<endl;
}

// Главная функция программы:
int main()
{
    using namespace std;

    // Переменная для передачи аргументами функции:
    char x='A', y='B';

    // Проверяются значения аргументов функции:
    cout<<"Первая переменная: "<<x<<endl;
    cout<<"Вторая переменная: "<<y<<endl;
    // Вызов функции:
    swap(x, y);
    // Проверяются значения аргументов функции:
    cout<<"Первая переменная: "<<x<<endl;
    cout<<"Вторая переменная: "<<y<<endl;

    return 0;
}