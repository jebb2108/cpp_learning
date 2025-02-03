#include <iostream>
#include <string>

// Описание класса:
class MyWords
{
public:
    // Текстовое поле:
    std::string word;
    // Поле логического типа:
    bool state;
    // Конструктор без аргументов:
    MyWords() {word=""; state=true;}
    // Метод для считывания значения текстового поля:
    void read()
    {
        // Отображение значения поля объекта:
        std::cout<<word<<" ";
        // Проверка значения поля state:
        if (state) (this+1)->read();
    }
};

// Главная функция программы:
int main()
{
    // Размер массива:
    const int n=5;
    // Текстовый массив:
    using namespace std;
    string numbers[n]={"один","два","три","четыре","пять"};
    // Массив объектов:
    MyWords words[n];
    // Значение для поля state последнего
    // объекта в массиве:
    words[n-1].state=false;
    // Присваивание значения полю word для 
    // объектов в массиве:
    for (int k=0;k<n;++k)
    {
        words[k].word=numbers[k];
    }
    // Вызов метода:
    words[0].read();
    cout<<endl;
    words[2].read();
    cout<<endl;
    return 0;
}
