#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int prev = 1, next, num, k = 0;
    cout << "Enter how many Fibanachi numbers do you want in an array: ";
    cin >> num;
    const int n = num;
    int fibs_ls[n + 1];
    fibs_ls[0] = 1;
    cout << fibs_ls[k] << " ";
    while (num)
    {
        next = fibs_ls[k - 1] + prev;
        fibs_ls[k + 1] = next;
        prev = next;
        cout << fibs_ls[k + 1] << " ";
        k++;
        num--;
    }
    cout << endl;
    return 0;
}