#include <iostream>

int main() 
{

    int s, k, num;
    s = 0;
    k = 1;

    std::cout<<"Введите число: ";
    std::cin>>num;

    while (k <= num )
    {
        if (num % k == 0)
        {
            s += k;
            k++;
        }

        else { k++; }
    }


    std::cout<<"Результат: "<<s<<std::endl;
    return 0;
}