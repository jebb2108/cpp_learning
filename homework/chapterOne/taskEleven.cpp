#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int metersPerSecond;
    cout << "Enter a speed in meters per second (m/s): ";
    cin >> metersPerSecond;
    // Умножаю метры на кол-во секунд в часе и делю это на километр:
    int kmPerHour = metersPerSecond * 3600 / 1000;
    cout << "The result will be: " << kmPerHour << " km/h" << endl;
    return 0;
}