#include <iostream>

int main() 
{
    const int size=9;
    int matrix[size][size];
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            if (j!=size-i-1 && j!=i)
            {
                matrix[i][j] = 0;
                std::cout<<matrix[i][j]<<" ";
            }
            else
            {
                matrix[i][j] = 1;
                std::cout<<matrix[i][j]<<" ";
            }
        }
        std::cout<<std::endl;
    }

}