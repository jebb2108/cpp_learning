#include <iostream>
#include <cmath>

class Vector
{
    public:
        double x, y;
        Vector()
        {
            x=0;
            y=0;
        }
        Vector(double a, double b)
        {
            x=a;
            y=b;
        }
        Vector operator+(Vector obj)
        {
            Vector tmp;
            tmp.x=x+obj.x;
            tmp.y=y+obj.y;
            return tmp;
        }
        Vector operator-(Vector obj)
        {
            Vector tmp;
            tmp.x=x-obj.x;
            tmp.y=y-obj.y;
            return tmp;
        }
        Vector operator*(int n)
        {
            Vector tmp;
            tmp.x=x*n;
            tmp.y=y*n;
            return tmp;
        }
        Vector operator/(int n)
        {
            Vector tmp;
            tmp.x=x/n;
            tmp.y=y/n;
            return tmp;
        }
        Vector operator*(Vector obj)
        {
            Vector tmp;
            tmp.x=x*obj.x;
            tmp.y=y*obj.y;
            using namespace std;
            cout<<"Скалярное произведение векторов: ";
            cout<<tmp.x+tmp.y<<endl;
            return tmp;
        }

        double getLength()
        {
            double length=sqrt(pow(x,2)+pow(y,2));
            return round(length*100)/100;
        }

        void showAll()
        {
            using namespace std;
            cout<<"Координаты вектора: ("<<x<<";"<<y<<")"<<endl;
            cout<<"Длина вектора: "<<getLength()<<endl;
        }
};

class ThreeDimensionalVector: public Vector
{
    public:
        double z, scalarProduct;
        ThreeDimensionalVector (double a=0, double b=0, double c=0): Vector(a,b) 
        {
            scalarProduct=a+b+c;
            z=c;
        }
        ThreeDimensionalVector operator+(ThreeDimensionalVector obj)
        {
            ThreeDimensionalVector tmp;
            tmp.x=x+obj.x;
            tmp.y=y+obj.y;
            tmp.z=z+obj.z;
            return tmp;
        }
        ThreeDimensionalVector operator-(ThreeDimensionalVector obj)
        {
            ThreeDimensionalVector tmp;
            tmp.x=x-obj.x;
            tmp.y=y-obj.y;
            tmp.z=z-obj.z;
            return tmp;
        }
        ThreeDimensionalVector operator*(int n)
        {
            ThreeDimensionalVector tmp;
            tmp.x=x*n;
            tmp.y=y*n;
            tmp.z=z*n;
            return tmp;
        }
        ThreeDimensionalVector operator*(ThreeDimensionalVector obj)
        {
            ThreeDimensionalVector tmp;
            tmp.x=x*obj.x;
            tmp.y=y*obj.y;
            tmp.z=z*obj.z;
            tmp.scalarProduct=tmp.x+tmp.y+tmp.z;
            return tmp;
        }
        ThreeDimensionalVector operator/(int n)
        {
            ThreeDimensionalVector tmp;
            tmp.x=x/n;
            tmp.y=y/n;
            tmp.z=z/n;
            return tmp;
        }
        ThreeDimensionalVector multiplyByScalars(ThreeDimensionalVector objFirst, ThreeDimensionalVector objSec, int k, int l)
        {
            ThreeDimensionalVector tmp;
            tmp.x=k*objFirst.x+objSec.x*l;
            tmp.y=k*objFirst.y+objSec.y*l;
            tmp.z=k*objFirst.z+objSec.z*l;
            tmp.scalarProduct=tmp.x+tmp.y+tmp.z;
            return tmp;
        }

        void showAll()
        {
            using namespace std;
            cout<<"Координаты трехмерного вектора: ("<<x<<";"<<y<<";"<<z<<")"<<endl;
            cout<<"Скалярное произведение векторов: "<<scalarProduct<<endl;
        }
};

int main()
{
    using namespace std;
    cout<<"Вектор А:"<<endl;
    Vector objA(3,4);
    objA.showAll();
    cout<<endl;

    cout<<"Вектор Б:"<<endl;
    Vector objB(5,6);
    objB.showAll();
    cout<<endl;

    cout<<"Вектор В - сложение А и Б:"<<endl;
    Vector objC;
    objC=objA+objB;
    objC.showAll();
    cout<<endl;

    cout<<"Вектор Д - вычитание А и Б:"<<endl;
    Vector objD;
    objD=objA-objB;
    objD.showAll();
    cout<<endl;

    cout<<"Вектор E - умножение В и Д:"<<endl;
    Vector objE;
    objE=objC*objD;
    objE.showAll();
    cout<<endl;

    cout<<"Трехмерный вектор А:"<<endl;
    ThreeDimensionalVector objOne(3,4,5);
    objOne.showAll();
    cout<<endl;

    cout<<"Трехмерный вектор Б:"<<endl;
    ThreeDimensionalVector objTwo(5,6,7);
    objTwo.showAll();
    cout<<endl;

    cout<<"Трехмерный вектор А умножаю на вектор Б:"<<endl;
    ThreeDimensionalVector objThree;
    objThree=objOne*objTwo;
    objThree.showAll();
    cout<<endl;

    cout<<"Трехмерный вектор А умножаю на вектор Б с коэффицентами 2 и 7:"<<endl;
    ThreeDimensionalVector objFour;
    objFour=objFour.multiplyByScalars(objOne, objTwo, 2, 7);
    objFour.showAll();
    cout<<endl;

    return 0;
    
}