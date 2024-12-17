#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int distM;
    const double arshInMeters = 2.16;
    cout << "Сколько метров: ";
    cin >> distM;
    // Переводит метры в аршани и отбрасывает дробное значение:
    int res = distM * arshInMeters;
    cout << "Результат в аршанях: " << res << endl;
    return 0;
}