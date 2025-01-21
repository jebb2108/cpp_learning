#include <iostream>
#include <ciso646>
#include <ctime>

const int width=10;

void show(int M[][width], int n)
{
    for (int i=0;i<n;++i)
    {
        std::cout<<"| ";
        for (int j=0;j<width;++j)
        {
            std::cout<<M[i][j]<<" | ";
        }
        std::cout<<std::endl;
    }
}

int* findLargest(int M[][width], int n)
{
    bool flag=false;
    int* biggest = &M[0][0];
    for (int i=0;i<n;++i)
    {
        for (int j=0;j<width;++j)
        {
            if (not flag)
            {
                biggest=&M[i][j];
                flag=true;
            }
            else if (M[i][j]>*biggest)
            {
                biggest=&M[i][j];
            }
        }
    }
    return biggest;
}

int main()
{
    const int heigth=5;

    int arr[heigth][width];

    srand(time(0));

    for (int i=0;i<heigth;++i)
    {
        for (int j=0;j<width;++j)
        {
            arr[i][j]=rand()%99;
        }
    }

    show(arr, heigth);

    std::cout<<"Самый большой элемент двумерного массива: "<<*findLargest(arr, heigth)<<std::endl;
    
    return 0;
}