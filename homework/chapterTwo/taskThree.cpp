#include <iostream>
#include <cstdlib>

int getNum()
{
    int num;
    std::cout<<"Введите число: ";
    std::cin>>num;
    return num;
}

int main()
{
   int givenNum = getNum();
   int n = 100;
   for (int k=1; k<=n; k++)
   {
        if (k % givenNum == 0)
        {
            std::cout<<k<<" | ";
        }
   }
}