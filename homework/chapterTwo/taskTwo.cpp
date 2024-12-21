#include <iostream>
#include <cstdlib>

int main() {
    int n=10, s=0, k=1;
    do{
        if (k%2==0)
        {
            s+=k;
            k++;
        }
        else {k++;}
    } while (k<=10);
    std::cout<<"Сумма четных чисел от 1 до "<<n<<": "<<s<<std::endl;
    return 0;
}