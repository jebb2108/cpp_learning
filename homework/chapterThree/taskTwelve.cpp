#include <iostream>

int main() 
{
    srand(2);
    const int height=3, width=5;
    int i, j;
    int A[height][8];
    int B[5][width];

    std::cout<<" Матрица A:\n";
    for (i=0; i<height; i++)
    {
        for (j=0; j<8; j++)
        {
            A[i][j] = rand()%10;
            std::cout<<" | "<<A[i][j];
        }
        std::cout<<" |"<<std::endl;
    }
    
    std::cout<<"\n Матрица B:\n";
    for (i=0; i<5; i++)
    {
        for (j=0; j<width; j++)
        {
            B[i][j] = rand()%10;
            std::cout<<" | "<<B[i][j];
        }
        std::cout<<" |"<<std::endl;
    }

    int C[height][width];
    std::cout<<"\n Матрица C:\n";
    for (i=0; i<height; i++)
    {
        for (j=0; j<width; j++)
        {
            C[i][j] = A[i][j] * B[i][j]; 
            std::cout<<" | "<<C[i][j];
        }
        std::cout<<" |"<<std::endl;
    }

    return 0;

}