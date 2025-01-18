#include <iostream>
#include <ctime>
#include <ciso646>

// В функцию передается массив для заполнения
// числами фибаначи:
void fibs(int* nums,int n)
{
    for (int i=0;i<n;++i)
    {
        if (i==0 or i==1)
            nums[i]=1;
        else {
            nums[i]=nums[i-1]+nums[i-2];
        }
    }
}

// В функцию передается массив для заполнения
// случайными числами:
void myrand(int* nums, int m)
{
    for (int i=0;i<m;++i)
    {
        nums[i]=rand()%10;
    }
}

// Главная функция программы:
int main()
{
    using namespace std;
    // Инициализация генератора случайных чисел:
    srand(time(0));
    // Размер массива:
    const int n=15;
    // Массив:
    int f[n];
    // Заполнение массива числами Фибаначи:
    fibs(f,n);
    // Отображение значений элементами массива:
    for (int i=0;i<n;++i)
    {
        cout<<f[i]<<" ";
    }
    cout<<endl;
    // Заполнение массива случайными числами:
    myrand(f, n);
    // Отображение значений элементами массива:
    for (int i=0;i<n;++i)
    {
        cout<<f[i]<<" ";
    }
    cout<<endl;
    return 0;
}