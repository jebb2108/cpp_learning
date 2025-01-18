#include <iostream>
#include <cmath>

// Функция с двумя аргументами (тип double u int)
// возвращает результат типа double:
double f(double x, int n)
{
    double s=1;
    for (int k=1;k<=n;++k)
    {
        s*=(1+k);
    }
    return s;
}

double g(double x, int n)
{
    double s=1;
    for (int k=1;k<=n;++k)
    {
        s*=x/k;
    }
    return s;
}

// Функции с одним аргументом (тип int)
// возвращение результат типа char:
char h(int n)
{
    return 'A'+n;
}

char u(int n)
{
    return 'Z'-n;
}

// Главная функция программы:
int main()
{
    using namespace std;
    // Переменные для передачи аргументами:
    double x=2;
    int n=3;
    // Указатели на функции:
    double (*p) (double, int);
    char (*q) (int);
    double (*r) (double);
    // Использование указателей на функции:
    p=f;
    cout<<p(x,n)<<" | ";
    p=g;
    cout<<p(x,n)<<" | ";
    q=h;
    cout<<q(n)<<" | ";
    q=u;
    cout<<q(n)<<" | ";

    r=exp;
    cout<<r(x/2)<<" | ";
    r=log;
    cout<<r(x)<<" |\n";
    
    return 0;
}