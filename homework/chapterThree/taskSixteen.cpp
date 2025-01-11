#include <iostream>

int main()
{
    srand(2);
    for (int k=0; k<5; k++)
    {
        int *size;
        size=new int;
        *size = rand() % 10;

        int *arr = new int[*size];
        int *q = &arr[*size-1];


        for (int k=0; k<*size/2; k++)
        {
            arr[k] = k+1;
            *q = k+1;
            q--;
        }

        for (int k=0; k<*size; k++)
        {
            if (arr[k] == 0)
            {
                arr[k] = k+1;
            }
            std::cout<<arr[k]<<" ";
        }
        std::cout<<std::endl;

        delete size;
        delete [] arr;


    }

    return 0;
}