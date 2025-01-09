#include <iostream>
#include <cstdlib>

int main() 
{
    // std::system("chcp 1251>nul");
    // Символьный массив:
    char str[100]="Coding in C++";
    // Отображение содержимого символьного массива:
    std::cout<<str<<std::endl;
    // Поэлементное отображение содержимого
    // символьного массива:
    for ( int k=0; str[k]; k++ )
    {
        std::cout<<str[k]<<"_";
    }
    std::cout<<std::endl;
    // Отображение содержимого начиная
    // с определенной позиции:
    for ( char* p=str; *p; p++ )
    {
        std::cout<<p<<std::endl;
    }
    // Изменение символа в массиве:
    str[13]='\0';
    // Отображение содержимого массива:
    std::cout<<str<<std::endl;
    // Отображение, начиная с указанной позиции:
    std::cout<<str+14<<std::endl;
    // Отображение текста, к которому прибавляется число:
    std::cout<<"One two three"<<std::endl;
    // Указатель на сивольное значение:
    const char* q="One two three";
    // Значение символа, на который ссылается указатель
    std::cout<<q[0]<<std::endl;
    // Отображение значения указателя:
    std::cout<<q<<std::endl;
    return 0;
}