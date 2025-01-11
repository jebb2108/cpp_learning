#include <iostream>

void show(int M[], int* size, char symb)
{
    std::cout<<"\nМассив "<<symb<<":\n";
    for (int k=0; k<*size; k++)
    {
        std::cout<<M[k]<<" ";
    }
    std::cout<<std::endl;
}

int main()
{
    srand(2);
    int *size;
    size = new int;
    std::cout<<"Введите размеры массивов: ";
    std::cin>>*size;

    int *A, *B, *C;

    A = new int[*size];
    B = new int[*size];
    C = new int[*size];

    for (int k=0; k<*size; k++)
    {
        A[k] = rand()%10;
        B[k] = rand()%10;

        if (A[k] > B[k])
        {
            C[k] = A[k];
        }

        else {C[k] = B[k];}
    }
    
    show(A, size, 'A');
    show(B, size, 'B');
    show(C, size, 'C');

    delete size;
    delete [] A;
    delete [] B;
    delete [] C;

    return 0;
}