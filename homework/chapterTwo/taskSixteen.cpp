#include <iostream>

int main() 
{
    int num;
    std::cout<<"Введите число в диапозоне от 1 до 10: ";
    std::cin>>num;

    switch (num)
    {
    case 1:
    case 2:
    case 3:
    case 5:
    case 8:
        std::cout<<"Это число Фибаначи."<<std::endl;
        break;
    
    default:
        std::cout<<"Это не является числом Фибаначи"<<std::endl;
        break;
    }

    return 0;
}