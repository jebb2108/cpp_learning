#include <iostream>
#include <cstdlib>

int main() {
    int n=10, s, k;
    for (s=0, k=1; k<=10; k++) 
    {
        if (k%2!=0) 
        {
            s+=k;
        }
    }
    std::cout<<"Сумма нечетных чисел от 1 до "<<n<<": "<<s<<std::endl;
    return 0;
}