#include <iostream>
#include <cmath>

int func(int n)
{
    return n;
}

int func(int n, int m)
{
    return n*n+m*m;
}

int func(int n, int m, int l)
{
    return pow(n, 3)+pow(m, 3)+pow(l, 3);
}

int main()
{
    using namespace std;

    cout<<"Один аргумент: "<<func(10)<<endl;
    cout<<"Два аргумента: "<<func(2, 5)<<endl;
    cout<<"Три аргумента :"<<func(3, 5, 4)<<endl;

    return 0;
}