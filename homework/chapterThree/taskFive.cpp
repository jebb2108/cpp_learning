#include <iostream>
#include <cstdio>
#include <cmath>

const int size=10;

void show(int M[size][size])
{
    int elem;
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            printf("%4d", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void transform(int M[size][size])
{
    int elem;
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            printf("%4d", M[j][i]);
        }
        printf("\n");
    }
    printf("\n");
}


int main()
{
    srand(2);
    int arr[size][size];
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }

    std::cout<<"\n\t Матрица в первоначальном виде:\n\n";
    show(arr);

    std::cout<<"\n\t Матрица в транспортированном виде:\n\n";
    transform(arr);
    return 0;
}