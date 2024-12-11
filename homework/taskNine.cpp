#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    int fathoms, arsh;
    cout<<"Введи сажини: ";
    cin>>fathoms;
    cout<<"Введи аршени: ";
    cin>>arsh;

    // Объявляю константы:
    const double metersInFathoms = 2.16;
    const int arshansInFathoms = 3;
    
    // Подчситываю кол-во метров:
    int distM, distCm;
    int all_fathoms = fathoms + (arsh / arshansInFathoms);
    distM = all_fathoms * metersInFathoms;

    // Подсчитываю кол-во сантиметров:
    distCm = (arsh % arshansInFathoms) / arshansInFathoms * 100;

    // Вывожу результат:
    cout<<"Итого метров: "<<distM<<" сантметров: "<<distCm<<endl;
    return 0;
}