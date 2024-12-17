#include <iostream>
#include <cstdlib>
using namespace std;

int getKilometers()
{
    int dKm;
    cout << "Enter distance in kilometers: ";
    cin >> dKm;
    return dKm;
}

int getMeters()
{
    int dM;
    cout << "Enter distance in meters: ";
    cin >> dM;
    return dM;
}

int convertMagnitudes(int distKm, int distMeters)
{
    double final_dist;
    const double kmInMiles = 0.621371;
    const double metersInFeet = 3.28084;
    const int feetInMile = 5280;
    // Преобразую метры в футы:
    double feet = distMeters / metersInFeet;
    // Преобразую километры в мили:
    double miles_in_total = distKm * kmInMiles * feetInMile;
    // Получаю в чистом виде кол-во футов:
    double feet_in_total = miles_in_total + feet;
    return feet_in_total;
}

int main()
{
    int dKm = getKilometers();
    int dM = getMeters();
    const int feetInMile = 5280;
    int total_feet = convertMagnitudes(dKm, dM);
    int miles = total_feet / feetInMile;
    int feet = total_feet - miles * feetInMile;
    cout << "Miles in total: " << miles << " and feet: " << feet << endl;
    return 0;
}