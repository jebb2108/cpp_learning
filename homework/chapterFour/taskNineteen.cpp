#include <cstdio>
#include <ctime>
#include <iostream>

const int width=10;

int countChar(char M[][width], int n, char symb)
{
    int count=0;
    for (int i=0;i<n;++i)
    {
        for (int j=0;j<width;++j)
        {
            if (M[i][j]==symb)
                ++count;
        }
    }
    return count;
}

int main()
{
    srand(time(0));
    const int height=5;
    char arr[height][width];
    printf("Символьный массив:\n");
    for (int i=0;i<height;++i)
    {
        for (int j=0;j<width;++j)
        {
            arr[i][j]='A'+rand()%26;
            printf("| %c ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Буква 'Z' встречается в массиве %d раза\n", countChar(arr, height, 'Z'));
    return 0;
}