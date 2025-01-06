#include <iostream>

int main()
{
    srand(2);
    const int n = 10;
    int array[n+1];

    for (int k = 0; k <= n; k++ )
    {
        array[k] = rand() % 10;
        std::cout<<array[k]<<" | ";
    }

    std::cout<<"\n";

    for (int k = 0; k <= (int) n / 2; k++ )
    {
        int temp = array[k];
        array[k] = array[n-k];
        array[n-k] = temp;
    }

    for ( int &x: array )
    {
        std::cout<<x<<" | ";
    }
    std::cout<<"\n";
    return 0;
}