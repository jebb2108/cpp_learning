#include <iostream>

int main() 
{
    srand(2);
    const int n = 10;
    int randArray[n+1];

    for (int k = 0; k <= n; k++ )
    {
        int i = rand() % 10;
        randArray[k] = i;
        std::cout<<i<<" | ";
    }

    for ( int k = 0; k <= n; k++ )
    {
        for (int j = n; j >=  k; j-- )
        {
            if (randArray[j] > randArray[j - 1])
            {
                int temp = randArray[j-1];
                randArray[j-1] = randArray[j];
                randArray[j] = temp;
            }

        }

    }

    std::cout<<"\n";

    for ( int &x: randArray )
    {
        std::cout<<x<<" | ";
    }

    return 0;
}