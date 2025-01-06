#include <iostream>

int main() 
{
    srand(2);

    const int n = 10;
    int temp;
    int array[n+1];

    for (int k=0; k <= n; k++)
    {
        array[k] = rand() % 10;
        std::cout<<array[k]<<" | ";
    }
    std::cout<<"\n";

    for (int k = 1; k <= n; k++ )
    {
        for ( int j = 0; j <= n - k; j++ )
        {
            if ( array[j] > array[j+1] )
            {
                temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
            }
        }
    }

    for ( int k = 1; k <= n; k++ )
    {
        for (int j = 0; j <= n - k; j++ )
        {
            if (array[j] > 0 && array[j] % 2 == 0 && array[j+1] % 2 != 0)
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for ( int &x: array )
    {
        std::cout<<x<<" | ";
    }

    std::cout<<"\n";
    return 0;
}