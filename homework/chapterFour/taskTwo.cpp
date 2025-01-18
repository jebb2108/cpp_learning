#include <iostream>

int f(int n)
{
    if (n==1)
        return n;
    else if (n % 2 != 0)
        return f(n-1);
    else {
        return n*f(n-1);
    }
}

int main()
{
    std::cout<<"Результат двойного факториала 6: "<<f(6)<<std::endl;
    std::cout<<"Результат двойного факториала 8: "<<f(8)<<std::endl;
    return 0;
}