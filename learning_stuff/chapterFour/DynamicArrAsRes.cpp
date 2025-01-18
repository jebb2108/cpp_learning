#include <iostream>
#include <ciso646>
#include <ctime>

// Результатом функции - динамический массив
// с числами Фибоначи:
int* fibs(int n)
{
    int temp1, temp2;
    int* nums=new int[n];
    for (int i=0;i<n;++i)
    {
        if (i==0 or i==1) {
            nums[i]=1;
        }
        else {
            nums[i]=nums[i-1] + nums[i-2];
        }
    }
    return nums;
}

// Результат функции - динамический массив
// со случайными числами:
int* myrand(int m)
{
    int* nums=new int[m];
    for (int i=0;i<m;++i)
    {
        nums[i]=rand()%10;
    }
    return nums;
}

// Главная функция программы:
int main()
{
    using namespace std;
    // Инициализация генератора случайных чисел:
    srand(time(0));
    // Переменные:
    int n=10,m=15,i;
    // Указатель на целочисленное значение:
    int* f;
    // Создается динамический массив:
    f=fibs(n);
    // Отображение значений элементов
    // динамического массива:
    for (i=0;i<n;++i)
    {
        cout<<f[i]<<" ";
    }
    cout<<endl;
    // Удаление динамического массива:
    delete [] f;

    // Новый динамический массив:
    f=myrand(m);
    // Отображение динамического массива:
    for (i=0;i<m;++i)
    {
        cout<<f[i]<<" ";
    }
    cout<<endl;
    // Удаление динамического массива:
    delete [] f;

    return 0;
        
}