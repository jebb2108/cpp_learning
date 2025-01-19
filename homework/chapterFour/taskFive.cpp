#include <iostream>
#include <cmath>

int mySum(int n, int s)
{
    s+=n;
    if (n==0)
        return s;
    else {
        return mySum(n-1, s);
    }
}

int mySum(int n, int k, int s)
{
    s+=pow(n, k);
    if (n==0)
        return s;
    else {
        return mySum(n-1, k, s);
    }
}

int main()
{
    using namespace std;

    int s=0;

    cout<<"Результат без приведения числа в степень: "<<mySum(10, s)<<endl;
    cout<<"Результат с приведением числв в степень: "<<mySum(4, 2, s)<<endl;

    return 0;
}