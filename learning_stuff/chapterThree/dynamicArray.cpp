#include <iostream>

int main() 
{
    // Указатель на целое число:
    int* size;
    // Динамическое выделение памяти под переменную:
    size = new int;
    std::cout<<"Введите размер массива: ";
    // Считывание значения с клавиатуры:
    std::cin>>*size;
    // Указатель на символьное значение:
    char* symbs;
    // Создание символьного массива:
    symbs = new char[*size];
    // Заполнение массива:
    for (int k = 0; k<*size; k++)
    {
        symbs[k] = 'a' + k;
        std::cout<<symbs[k]<<" ";
    }
    // Удаление массива:
    delete [] symbs;
    // Удаление переменной:
    delete size;
    std::cout<<"\nМассив и переменная удалены\n";
    return 0;

}