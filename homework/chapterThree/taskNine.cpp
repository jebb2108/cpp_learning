#include <iostream>

int main() 
{
    srand(2);
    int arr[2][10];
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<10; j++)
        {
            arr[i][j] = rand() % 10;
        }

        std::cout<<i+1<<" строка массива:\n";
        for (int k=0; k<10; k++)
        {
            std::cout<<arr[i][k]<<" ";
        }
        std::cout<<std::endl;
    }

    return 0;
}