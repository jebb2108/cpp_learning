#include <iostream>

void fillArr(int M[], int *size)
{
    srand(2);
    for (int k=0; k<*size; k++)
    {
        M[k] = rand() % 10;
        std::cout<<M[k]<<" ";
    }
    std::cout<<std::endl;
}

int main()
{
    srand(2);
    int *sizeOne, *sizeTwo, *sizeThree;
    sizeOne = new int;
    sizeTwo = new int;
    sizeThree = new int;

    std::cout<<"Сколько элементов в первом массиве: ";
    std::cin>>*sizeOne;
    std::cout<<"Сколько элементов во втором массиве: ";
    std::cin>>*sizeTwo;

    int s;
    s = *sizeOne + *sizeTwo;
    *sizeThree = s;

    int *A = new int [*sizeOne];
    int *B = new int [*sizeTwo];
    int *C = new int [*sizeThree];

    std::cout<<"Массив A:\n";
    fillArr(A, sizeOne);
    std::cout<<"Массив B:\n";
    fillArr(B, sizeTwo);

    std::cout<<"Массив C:\n";
    for (int k=0, j=0; k<*sizeThree; k++)
    {
        if (k < *sizeOne)
        {
            C[k] = A[k];
            std::cout<<C[k]<<" ";
        }
        else 
        {
            C[k] = B[j];
            std::cout<<C[k]<<" ";
            j++;
        }
    }

    delete sizeOne; delete sizeTwo; delete sizeThree;
    delete [] A; delete [] B; delete [] C;
    std::cout<<std::endl;
    return 0;

}