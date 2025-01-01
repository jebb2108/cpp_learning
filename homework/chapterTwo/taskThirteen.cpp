#include <iostream>
#include <cmath>

int main()
{
    double res;
    double a, b, c;
    std::cout<<"Введите значения для сторон прямоугольного треугольника."<<std::endl;
    std::cout<<"Чтобы найти неизвестную, нужно ввести нулевое значение этой стороне"<<std::endl;

    std::cout<<"Сторона 1: ";
    std::cin>>a;
    std::cout<<"Сторона 2: ";
    std::cin>>b;
    std::cout<<"Сторона 3: ";
    std::cin>>c;

    if (a == 0)
    {
        res = (c * c) - (b * b);
    }
    else if (b == 0)
    {
        res = (c * c) - (a * a);
    }
    else { res = (a * a) + (b * b); }

    std::cout<<"Неизвестная сторона прямоугольного треугольника равняется: "<<sqrt(res)<<std::endl;
    return 0;

}