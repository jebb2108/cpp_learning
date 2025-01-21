#include <cstdio>
#include <ctime>
#include <iostream>

const int width=10;

void show(int M[][width], int n)
{
    printf("Массив:\n");
    for (int i=0;i<n;++i)
    {
        for (int j=0;j<width;++j)
        {
            printf("%4d", M[i][j]);
        }
        printf("\n");
    }
}

int computeArithmeticMean(int M[][width], int n)
{
    int summ=0;
    for (int i=0;i<n;++i)
    {
        for (int j=0;j<width;++j)
        {
            summ+=M[i][j];
        }
    }
    return summ/(n*width);
}

int main()
{
    srand(time(0));
    const int height=5;
    int arr[height][width];

    for (int i=0;i<height;++i)
    {
        for (int j=0;j<width;++j)
        {
            arr[i][j]=rand()%100;
        }
    }

    show(arr, height);

    printf("Средне арифмитическое массива: %4d\n", computeArithmeticMean(arr, height));

    return 0;

}