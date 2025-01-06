#include <iostream>

int main() 
{
    srand(2);

    const int n = 10;
    int temp;
    int array[n+1];

    // создает массив с псевдо-случайными числами
    for (int k=0; k <= n; k++)
    {
        array[k] = rand() % 10;
        std::cout<<array[k]<<" | ";
    }
    std::cout<<"\n";

    // сортирует методом пузырька
    for (int k = 1; k <= n; k++ )
    {
        for ( int j = 0; j <= n - k; j++ )
        {
            if ( array[j] > array[j+1] )
            {
                temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
            }
        }
    }

    // Сортирует массив еще раз по признаку четности числа
    for ( int k = 1; k <= n; k++ )
    {
        for (int j = 0; j <= n - k; j++ )
        {
            if (array[j] % 2 == 0 && array[j+1] % 2 != 0)
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    // Отзеркаливает массив
    for (int k = 0; k <= (int) n / 2; k++ )
    {
        int temp = array[k];
        array[k] = array[n-k];
        array[n-k] = temp;
    }

    // Сортирует вторую половину массива с нечетными числами
    int start = n / 2 + 1;
    for ( int k = start; k <= n; k++)
    {
        for ( int j = start; j < n; j++ )
        {
            if (array[j] > array[j+1])
                {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
        }
    }

    // Выводит массив в терминал
    for ( int &x: array )
    {
        std::cout<<x<<" | ";
    }

    std::cout<<"\n";
    return 0;
}