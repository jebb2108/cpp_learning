#include <iostream>
#include <cstdlib>
using namespace std;

double getDist()
{
    double dist;
    cout << "Enter distance in km to convert into miles: ";
    cin >> dist;
    return dist;
}

double calcDist(double dist)
{
    const double kmInMile = 0.621371;
    double new_dist = dist * kmInMile;
    return new_dist;
}

int main()
{
    double this_dist = calcDist(getDist());
    cout << "Here is the result: " << this_dist << endl;
    return 0;
}