#include <iostream>

class ComplexNumber
{
    public:
        double real, imaginary;
        ComplexNumber()
        {
            real=0;
            imaginary=0;
        }
        ComplexNumber(double r, double i)
        {
            real=r;
            imaginary=i;
        }

        ComplexNumber operator+(ComplexNumber obj)
        {
            ComplexNumber tmp;
            tmp.real=real+obj.real;
            tmp.imaginary=imaginary+obj.imaginary;
            showEquation(*this, '+', obj, tmp);
            return tmp;
        }
        ComplexNumber operator-(ComplexNumber obj)
        {
            ComplexNumber tmp;
            tmp.real=real-obj.real;
            tmp.imaginary=imaginary-obj.imaginary;
            showEquation(*this, '-', obj, tmp);
            return tmp;
        }
        ComplexNumber operator*(ComplexNumber obj)
        {
            ComplexNumber tmp;
            double a, b, c, d;
            a=real*obj.real;
            b=real*obj.imaginary;
            c=imaginary*obj.real;
            d=imaginary*obj.imaginary;
            tmp.real=a+d*(-1);
            tmp.imaginary=b+c;
            showEquation(*this, '*', obj, tmp);
            return tmp;
        }

        private:
            void showEquation(ComplexNumber objA, char sign, ComplexNumber objB, ComplexNumber objC)
            {
                using namespace std;
                cout<<objA.real<<((objA.imaginary>=0)?'+':'-')<<abs(objA.imaginary)<<"i ";
                cout<<sign<<" "<<objB.real<<((objB.imaginary>=0)?'+':'-')<<abs(objB.imaginary)<<"i = ";
                objC.imaginary!=0?cout<<objC.real<<((objC.imaginary>0)?'+':'-')<<abs(objC.imaginary)<<"i":cout<<objC.real<<endl;
            }
};

int main()
{
    using namespace std;
    ComplexNumber objA(3, -4);
    ComplexNumber objB(5, -6);
    ComplexNumber objC;

    objC=objA+objB;
    cout<<endl;

    objC=objA-objB;
    cout<<endl;

    objC=objA*objB;
    cout<<endl;

    return 0;
}