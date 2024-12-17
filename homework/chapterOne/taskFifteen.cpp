#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int i = 1, k = 0;
    const int n = 10;
    int nat_ls[n + 1];
    while (k < n)
    {
        if (i % 2 != 0)
        {
            nat_ls[k] = i;
            cout << i << " ";
            k++;
            i++;
        }
        else
        {
            i++;
        }
    }
}