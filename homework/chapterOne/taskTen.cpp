#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int kmPerHour;
    cout << "Enter a speed in km per hour (km/h): ";
    cin >> kmPerHour;
    int inMetersPerSecond = kmPerHour * 1000 / 60 / 60;
    cout << "The result will be: " << inMetersPerSecond << " m/sec" << endl;
    return 0;
}