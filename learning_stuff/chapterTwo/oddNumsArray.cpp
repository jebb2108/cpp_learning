#include <iostream>
#include <cstdlib>
using namespace std;

const int n = 10;
int oddNums[n+1];

bool isPrime(int num) 
{

if (num != 2 && num % 2 == 0) {return false;}

for (int i = 2; i <= (int) sqrt(num); i++) {
    if (num % i == 0) {
        // вывести, что n  не простое, так как делится на i
        return false;
    }
}
//вывести что n простое. 
return true;
}

int main()
{

    // Массив простых чисел:
    for (int k=0, num=1; k<n+1; num++)
    {
            if (isPrime(num))
            {
                oddNums[k] = num;
                k++;
            }
        }
    

    for (int &x: oddNums)
    {
        cout<<x<<" | ";
    }
    return 0;
}
