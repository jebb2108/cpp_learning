#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    int k = 0, i = 2;
    const int n = 10;
    int bin_exp_ls[n + 1];
    bin_exp_ls[0] = 1;
    cout << bin_exp_ls[k] << " ";
    k++;
    while (k < n)
    {
        int power = pow(i, k);
        bin_exp_ls[k + 1] = power;
        cout << power << " ";
        k++;
    }

    return 0;
}