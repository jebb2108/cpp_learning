#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    int num, k = 0;
    cout << "Enter a number of how many there will be numbers in an array: ";
    cin >> num;
    const int n = num;
    int indx_ls[n + 1];
    indx_ls[0] = 0;
    k++;
    while (num)
    {
        cout << indx_ls[k] << " ";
        if (k % 2 != 0)
        {
            indx_ls[k + 1] = pow(k, 2);
            k++;
            num--;
        }
        else
        {
            indx_ls[k + 1] = k;
            k++;
            num--;
        }
    }
    cout << endl;
    return 0;
}