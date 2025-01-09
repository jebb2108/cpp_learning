#include <iostream>
#include <cmath>

int main()
{
    srand(2);
    const int size=10;
    int arr[size];

    for (int k=0; k<size; k++)
    {
        arr[k] = rand()%10;
        std::cout<<pow(arr[k], 2)<<" ";
    }
    std::cout<<std::endl;
    return 0;
}