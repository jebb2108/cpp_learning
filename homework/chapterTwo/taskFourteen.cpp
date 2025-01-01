#include <iostream>
#include <cmath>

int main() 
{
    std::cout<<"Решение уравнения типа Ax^2 + Bx + C = 0"<<std::endl;
    int a, b, c;
    std::cout<<"Введите A: ";
    std::cin>>a;
    std::cout<<"Введите B: ";
    std::cin>>b;
    std::cout<<"Введите C: ";
    std::cin>>c;

    double d = pow(b, 2) - 4 * a * c;
    double x1 = ( - b - sqrt(d) ) / 2 * a;
    double x2 = ( - b + sqrt(d) ) / 2 * a;

    std::cout<<"Результат вычисления x1 = "<<x1<<std::endl;
    std::cout<<"Результат вычисления x2 = "<<x2<<std::endl;

    return 0;
}