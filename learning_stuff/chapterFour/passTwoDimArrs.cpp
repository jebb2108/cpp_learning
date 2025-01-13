#include <iostream>
#include <ciso646>

// Размер массива по второму индексу:
const int n=3;

// Функция для обработки двумерного 
// статичтического массива:
void show(int M[][n], int p)
{
    using namespace std;
    for (int i=0; i<p; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
}

// Главная функция программы:
int main()
{
    using namespace std;

    // Первый массив:
    int A[2][n]={{1,2,3},{4,5,6}};
    // Второй массив:
    int B[][n]={{11,12,13},{14,15,16},{17,18,19},{20,21,22}};
    cout<<"Первый массив:\n";
    show(A, 2);
    cout<<"Второй массив:\n";
    show(B, 4);

    return 0;
}