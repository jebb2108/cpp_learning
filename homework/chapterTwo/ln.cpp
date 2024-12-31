#include <iostream>

double my_ln (double x)
{
    // Обозачение, что означает 0.000001
    const double eps=1e-6;
    const double lnln=M_LN2; //ln2
    int k=0;
    // Здесь я получаю остаток от целого числа,
    // что необходимо будет вычислить после запятой
    while(x>2.0)
    { 
        x/=2.0;
        k++;
    }
    x-=1.;
    double s=0;
    int n=1;
    double an=x;
    // Вычисление после запятой
    while (fabs(an)>eps)
    {
        s+=an;
        n++;
        an*=-x*(n-1)/n;
    }

    // Теперь то кол-во двоек, чему отвечает значение k,
    // нужно превратить в числовой результат, как если бы вычислял натуральный логарифм
    s+=k*lnln;
    return s;
}

int main()
{
    double n;
    std::cout<<"Введите значение для вычисления натурального алгоритма: ";
    std::cin>>n;

    double res = my_ln(n);

    std::cout<<"Результат вычисления: "<<res<<std::endl;
    return 0;
}