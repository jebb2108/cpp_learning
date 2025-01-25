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
            auto result = multipleComplexNumbers(*this, obj);
            tmp.real = result[0];
            tmp.imaginary = result[1];
            showEquation(*this, '*', obj, tmp);
            return tmp;
        }

        ComplexNumber operator/(ComplexNumber obj)
        {
            ComplexNumber tmpOne, result;
            // Преобразовываю делитель в комплексно-сопряженное число:
            tmpOne.real=obj.real;
            tmpOne.imaginary=-obj.imaginary;
            // Умножаю числитель на комплексно-сопряженное число:
            auto numerator=multipleComplexNumbers((*this), tmpOne);
            // Умножаю знаменатель на комплексно-сопряженное число:
            auto denominator=multipleComplexNumbers(obj, tmpOne);
            // Делю первый чиситель на знаменатель:
            result.real=(double)numerator[0]/denominator[0];
            result.real=round(result.real*100)/100;
            // Делю второй числитель на знаменатель:
            result.imaginary=(double)numerator[1]/denominator[0];
            result.imaginary=round(result.imaginary*100)/100;
            showEquation(*this, '/', obj, result);
            return result;
        }

        private:

            std::array<int, 2> multipleComplexNumbers(ComplexNumber objA, ComplexNumber objB)
            {
                int a, b, c, d;
                // Умножаю первый множитель на множители objB:
                a=objA.real*objB.real;
                b=objA.real*objB.imaginary;
                // Умножаю второй множитель на множители objB:
                c=objA.imaginary*objB.real;
                d=objA.imaginary*objB.imaginary;
                // Результат умножения комплексных чисел:
                std::array<int, 2> result;
                // Действительная часть массива:
                result[0]=(a + d * (-1));
                // Мнимая часть массива:
                result[1]=(b + c);
                return result;
            }
            
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

    objC=objA/objB;
    cout<<endl;

    return 0;
}