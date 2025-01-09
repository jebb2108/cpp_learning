#include <iostream>

const int size=5;

void findTrace(int M[size][size])
{
    int s=0;
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            if (i == j || j+1 == size - i)
            {
                s+=M[i][j];
            }

        }
    }
    std::cout<<"The result: "<<s<<std::endl;
}

int main() 
{
    srand(2);
    int A[size][size];
    std::cout<<"Матрица:"<<std::endl;
    for(int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            A[i][j] = rand() % 10;
            std::cout<<A[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;

    findTrace(A);

}