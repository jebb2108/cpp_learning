#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    // Размер массиваЖ
    const int n = 10;
    // Инициализация генератора случайных чисел:
    srand(2);
    // создание массива:
    int nums[n + 1];
    // Целочисленные переменные:
    int i, j, k, s;
    cout << "Массив для сортировки:\n| ";
    // Заполнение массива случайными числами:
    for (k = 0; k < n; k++)
    {
        nums[k] = rand() % 10;
        cout << nums[k] << " | ";
    }

    // Cортировка массива:
    for (i = 1; i <= n - 1; i++)
    {
        // Перебор элементов массива:
        for (j = 0; j < n - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                s = nums[j + 1];
                nums[j + 1] = nums[j];
                nums[j] = s;
            }
        }
    }
    cout << "\nМассив после сортировки:\n| ";
    // Отображение отсортированного массива:
    for (k = 0; k < n; k++)
    {
        cout << nums[k] << " | ";
    }
    cout << endl;
    return 0;
}