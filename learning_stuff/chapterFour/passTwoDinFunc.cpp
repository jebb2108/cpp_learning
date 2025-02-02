#include <cstdio>
#include <ciso646>

// Функции аргументом передается двумерный 
// динамический массив:
void show(int **M, int p, int n)
{
    for(int i=0; i<p; ++i)
    {
        for (int j=0; j<n; ++j)
        {
            printf("%4d", M[i][j]);
        }
        printf("\n");
    }
}

// Главная функция программы:
int main()
{
    // Размеры динамического массива
    // и индексные переменные:
    int a=3, b=5, i, j;
    // Создание массива указателей:
    int **A = new int *[a];
    // Создание и заполнение внутренних массивов:
    for (i=0; i<a; ++i)
    {
        A[i] = new int [b];
        for (j=0; j<b; ++j)
        {
            // Значение элемента массива:
            A[i][j] = i*b+j+1;
        }
    }
    printf("Содержимое массива:\n");
    // Отображение содержимого массива:
    show(A,a,b);
    // Удаление внутренних массивов:
    for (i=0; i<a; ++i)
    {
        delete [] A[i];
    }
    // Удаление массива указателей:
    delete [] A;

    return 0;
}
