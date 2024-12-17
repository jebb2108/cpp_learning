#include <iostream>
#include <cstdlib>
using namespace std;

int getNumber()
{
    int n;
    cout << "Введите количество чисел, что при делении на 4 дает в остатке 3: ";
    cin >> n;
    return n;
}

int main()
{
    int res = getNumber(), k = 1, tmp;
    while (res)
    {
        tmp = 4 * k + 3;
        cout << tmp << " ";
        k++;
        res--;
    }
    cout << endl;
    return 0;
}