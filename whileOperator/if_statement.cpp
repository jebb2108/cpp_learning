#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    int n, s=0;
    cout<<"Верхняя границы суммы: ";
    cin>>n;
    if(n>0) {
        while(n){
            s+=n*n;
            n--;
        }
        cout<<"Сумма квадратов:"<<s<<endl;
    }
    else{
        cout<<"Указанно некорректное значение"<<endl;
    }
    return 0;
}