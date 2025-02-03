#include <iostream>
#include <string>

class LightVehicle
{
public:
    std::string brand;
    std::string color;
    double volume, consumption;
    LightVehicle(std::string b, std::string col, double v, double c)
    {
        brand=b;
        color=col;
        volume=v;
        consumption=c;
    }
    void showAll()
    {
        using namespace std;
        cout<<"Color of the car: "<<color<<endl;
        cout<<"Volume of the fuel tank: "<<volume<<endl;
        cout<<"Consumption (per 100 km): "<<consumption<<endl;
    }

};
class HeavyVehicle: public LightVehicle
{
public:
    double capacity;
    HeavyVehicle(std::string b, std::string col, double v, double c, double cap) :
                  LightVehicle(b, col, v, c) { capacity=cap; }
   
    double getPricePerKm(double m)
    {
        return consumption/100*m/capacity;
    }
    void show(double m)
    {
        using namespace std;
        cout<<"Brand of the car: "<<brand<<endl;
        cout<<"Color of the car: "<<color<<endl;
        cout<<"The maximum volume of fuel: "<<volume<<endl;
        cout<<"Fuel consumption: "<<consumption<<endl;
        cout<<"Weight capacity: "<<capacity<<endl;
        cout<<"The cost of working per one km: "<<getPricePerKm(m)<<endl;
    }

};
int main()
{
    using namespace std;
    LightVehicle carOne("toyota", "red", 150, 2);
    carOne.showAll();
    HeavyVehicle carTwo("Cat", "black", 150, 2, 5);
    carTwo.show(0.10);
    return 0;
}
