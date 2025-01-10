#include <iostream>

int main()
{
    int A[2][5]={{1, 2, 3, 4, 5}, {10, 20, 30, 40, 50}};
    int B[2][5]={{5, 10, 15, 20, 20}, {1, 1, 2, 3, 5}};

    int biggest;
    biggest = 0;

    int arr[2];
    std::cout<<"Результат: ";
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<5; j++)
        {
            if (A[i][j] > biggest)
            {
                biggest = A[i][j];
            }
            if (B[i][j] > biggest)
            {
                biggest = B[i][j];
            }
        }
        arr[i] = biggest;
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}