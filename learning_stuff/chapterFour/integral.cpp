#include <iostream>

// Функция для вычисления интеграла. Первым аргументом
// передается указатель на функцию:
double integrate(double (*F) (double), double a, double b)
{
    int n=1000;
    double dx=(b-a)/n;
    double s=(F(a)+F(b))*dx/2;
    for (int k=1;k<=n-1;++k)
    {
        s+=F(a+dx*k)*dx;
    }
    return s;
}

double F(double x)
{
    return x*(1-x);
}
double g(double x)
{
    return 1/x;
}
// Главная функция программы:
int main()
{
    using namespace std;
    // Первый интеграл:
    cout<<integrate(F,0,1)<<endl;
    // Второй интеграл:
    cout<<integrate(g,1,2)<<endl;

    return 0;
    
}