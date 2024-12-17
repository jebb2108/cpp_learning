#include <iostream>
#include <cstdlib>
using namespace std;

double getKilometers()
{
    double kilos;
    cout << "Enter kilometers to convert into miles: ";
    cin >> kilos;
    return kilos;
}

double getMeters()
{
    double meters;
    cout << "Enter meters to convert into feet: ";
    cin >> meters;
    return meters;
}

double calcMiles(double dKm)
{
    const double kmInMile = 0.621371;
    double miles = dKm * kmInMile;
    return miles;
}

double calcFeet(double dM)
{
    const double metersInFeet = 3.28084;
    double ft = dM * metersInFeet;
    return ft;
}

int main()
{
    double distMiles = calcMiles(getKilometers());
    double distFeet = calcFeet(getMeters());
    cout << "Here is the result: " << distMiles << "   " << distFeet << endl;
    return 0;
}