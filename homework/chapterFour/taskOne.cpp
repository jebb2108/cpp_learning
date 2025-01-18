#include <iostream>

int f1(int n)
{
    if (n==1)
        return n;
    else {
        return n*f1(n-1);
    }
}

int f2(int n)
{
    int s=1;
    while (n)
    {
        s*=n;
        --n;
    }
    return s;
}

int main()
{
    using namespace std;

    int x=4;
    int res;
    res = f1(x);
    cout<<"Результат факториала "<<x<<" является: "<<res<<endl;
    res = f2(x);
    cout<<"Результат факториала "<<x<<" является: "<<res<<endl;

    return 0;

}