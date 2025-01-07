#include <iostream>

int main() 
{
    int num;
    // Ссылка на переменную:
    int &ref=num;
    // Присваивание значения переменной:
    num=100;
    // Проверка значения переменной и ссылки:
    std::cout<<"num = "<<num<<std::endl;
    std::cout<<"ref = "<<ref<<std::endl;

    // Присваивание значения ссылке:
    ref=200;

    // Проверка значения переменной и ссылки:
    std::cout<<"num = "<<num<<std::endl;
    std::cout<<"ref = "<<ref<<std::endl;

    return 0;
}