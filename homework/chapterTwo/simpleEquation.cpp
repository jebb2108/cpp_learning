#include <iostream>
#include <cmath>

int main() 
{
    double a, b;
    double x;
    std::cout<<"Для решения уравнения типа Ax = B введите соответсвующие значения"<<std::endl;
    std::cout<<"Введите A: ";
    std::cin>>a;
    std::cout<<"Введите B: ";
    std::cin>>b;

   try
   {
    if (a != 0)
    {
        throw a;
    }

    if ( b != 0 )
    {
        throw "Решений нет";
    }

    std::cout<<"Решением будет любое число"<<std::endl;

   }

   catch ( double e ) 
   {
        std::cout<<"X равняется: "<<b/a<<std::endl;
   }
   catch ( const char* e )
   {
        std::cout << e << std::endl;
   }

   return 0;
}