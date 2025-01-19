#include <iostream>
#include <ciso646>

int fibs(int n, int prev, int curr)
{
    if (n==1)
    {
        return curr;
    }
    else if (curr==0 or curr==1)
    {
        curr++;
        return fibs(n-1, prev, curr);
    }
    else{
        prev = curr - prev;
        return fibs(n-1, prev, curr+=prev);
    }
}

int main()
{
    using namespace std;

    int *i, curr=0, prev=1;
    i = new int;

    cout<<"Введите номер числа в порядке Фибаначи: ";
    cin>>*i;

    int n=*i;
    
    cout << fibs(n, prev, curr)<<endl;

    delete i;

    return 0;
}