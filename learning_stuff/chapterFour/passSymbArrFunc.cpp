#include <iostream>
#include <ciso646>

// Функция для определения длины строки:
int getLength(char *str)
{
    int s=0;
    for (int i=0; str[i]; ++i)
    {
        ++s;
    }
    return s;
}

// Функция для определения количества пробелова в строке:
int getSpace(char *str)
{
    int s=0;
    for (int i=0; str[i]; ++i)
    {
        if (str[i] == ' ')
            ++s;
    }
    return s;
}

// Функция для отображения строки и некоторых
// дополнительных характеристик:
void show(char *str)
{
    using namespace std;
    
    cout<<"Фраза: "<<str<<endl;
    cout<<"Символов: "<<getLength(str)<<endl;
    cout<<"Пробелов: "<<getSpace(str)<<endl;
    for (int k=0; k<35; ++k)
    {
        cout<<"-";
    }
    cout<<endl;
}

// Главная функция программы:
int main()
{
    // Символьный массив:
    char text[100]={"Изучаем язык программирования С++"};
    // Передача аргументом функции символьного массива:
    show(text);
    // Передача аргументом функции текстового литерала:
    show("There are classes and instances in C++");

    return 0;
}