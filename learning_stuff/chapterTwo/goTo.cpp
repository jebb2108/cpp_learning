#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    // Целочисленные переменные:
    int n=10, s=0, k=1;
    start: // Метка:
    s+=k*k;
    if (k<n)
    {
        k++;
        // Переход к месту, обозначенному меткой:
        goto start;
    }
    // Отображение результата вычислений:
    cout<<"Сумма квадратов чисео от 1 до "<<n<<": "<<s<<endl;
    return 0;

}