#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    /* Переменная для записи верхней границы суммы,
    переменная для записи значения суммы и индексная,
    переменная для оператора цикла: */
    int n, s=0, k=1;
    cout<<"Введите верхнюю границу для суммы: ";
    // Считывание верхней границы для суммы:
    cin>>n;
    // Оператор цикла для вычисления суммы квадратов чисел: 
    for (;k<=n;) {
        // Прибавление к сумме очередного слагаемого:
        s+=k*k;
        k++;
    }
    // Отображение результата вычислений:
    cout<<"Сумма квадратов чисел от 1 до "<<n<<": "<<s<<endl;
    return 0;

}