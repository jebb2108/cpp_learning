#include <iostream>
#include <ciso646>

int countChar(char M[], char symb, int n)
{
    int count=0;
    for (int i=0;i<n;++i)
    {
        if (M[i]!='\0' and M[i]==symb)
            ++count;
    }
    return count;
}

int main()
{
    using namespace std;

    // Инициализирую переменные:
    const int size=100;
    char symb='i';
    char arr[size]={"I find programming in C++ easy ;)"};
    
    // Передаю функции нужные аргументы:
    int res=countChar(arr, symb, size);
    cout<<arr<<endl;
    cout<<"There is this amount of '"<<symb<<"' in the string: "<<res<<endl;
    return 0;

}