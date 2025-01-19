#include <cstdio>

int Square(int num)
{
    return num*num;
}

void processArr(int (*func)(int), int M[], int n)
{
    for (int i=0;i<n;++i)
    {
        M[i]=func(M[i]);
        printf("%4d", M[i]);
    }
    printf("\n");
}

void processArr(int num, int M[], int n)
{
    for (int i=0;i<n;++i)
    {
        M[i]*=num;
        printf("%4d", M[i]);
    }
    printf("\n");
}

int main()
{
    int (*func)(int)=Square;
    const int size=10;
    int arrOne[size+1]={4,2,7,5,1,1,9,4,6,6};
    int arrTwo[size+1]={4,2,7,5,1,1,9,4,6,6};

    processArr(2, arrOne, size);
    processArr(func, arrTwo, size);

    return 0;
}