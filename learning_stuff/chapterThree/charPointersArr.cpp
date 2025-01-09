#include <iostream>

int main()
{
    // Массив символьных указателей:
    char *str[3]={{"red"}, {"blue"}, {"green"}};
    // Отбражение строк:
    for (int i=0;i<3;i++)
    {
        std::cout<<str[i]<<std::endl;
    }
    // Обращение к эдементам массива:
    std::cout<<str[1][1]<<str[1][2]<<str[2][1];
    std::cout<<str[2][2]<<std::endl;
    return 0;

}