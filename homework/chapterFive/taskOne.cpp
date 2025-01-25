#include <iostream>
#include <string>

class Parallelepiped
{
    public:
        double height, width, length;
        std::string name;
        Parallelepiped()
        {
            name="Параллелепипед";
            height=0;
            width=0;
            length=0;
        }
        Parallelepiped(double h, double w, double l, std::string n="Параллелепипед")
        {
            name=n;
            height=h;
            width=w;
            length=l;
        }

        ~Parallelepiped()
        {
            // using namespace std;
            // cout<<"Параллелопипед удален!"<<endl;
            // cout<<endl;

        }

        void showName()
        {
            using namespace std;
            cout<<name<<":"<<endl;
        }

        void showAll()
        {
            using namespace std;
            cout<<"Высота: "<<height<<endl;
            cout<<"Ширина: "<<width<<endl;
            cout<<"Длина: "<<length<<endl;
            cout<<"Объем: "<<getVolume()<<endl;
        }

    private:
        int getVolume()
        {
            return height*width*length;
        }

};

class PhysicalParallelepiped: public Parallelepiped
{
    public:
        double mass;
        std::string name;
        PhysicalParallelepiped(): Parallelepiped()
        {
            name="Физический параллелопипед";
            mass=0;
        }
        PhysicalParallelepiped(std::string n, double m, double h, double w, double l): Parallelepiped(h, w, l)
        {
            mass=m;
            name=n;
        }

        void showName()
        {
            using namespace std;
            cout<<name<<":"<<endl;
        }
        void showAll()
        {
            using namespace std;
            Parallelepiped::showAll();
            cout<<"Масса: "<<mass<<endl;
            cout<<"Плотность: "<<getDensity()<<endl;
        }
        PhysicalParallelepiped operator++()
        {
            ++height;
            ++width;
            ++length;
            return *this;
        }
        PhysicalParallelepiped operator++(int)
        {
            mass+=100.0;
            return *this;
        }
        PhysicalParallelepiped operator+(PhysicalParallelepiped obj)
        {
            PhysicalParallelepiped tmp("Физический параллелопипед", obj.mass, obj.height, obj.width, obj.length);
            return tmp;
        }
        PhysicalParallelepiped operator/(int n)
        {
            height/=n;
            width/=n;
            length/=n;
            mass=mass/(n*n*n);
            return *this;
        }

    private:
        double getDensity()
        {
            return mass/(height*width*length);
        }
};

int main()
{
    using namespace std;

    Parallelepiped objA(3, 4, 5);
    objA.showName();
    objA.showAll();
    cout<<endl;
    
    PhysicalParallelepiped objB("Физический параллепипид B", 1000, 3, 4, 5);
    objB.showName();
    objB.showAll();
    cout<<endl;

    cout<<"Уменьшение размеров:"<<endl;
    objB/2;
    objB.showAll();
    cout<<endl;

    PhysicalParallelepiped objC;
    objC = objC+objB;
    objC.showName();
    objC.showAll();
    cout<<endl;

    return 0;
}