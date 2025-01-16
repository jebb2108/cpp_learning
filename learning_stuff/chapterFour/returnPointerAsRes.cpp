#include <iostream>
#include <ciso646>

// Функция результатом возвращает 
// указатель на элемент массива:
int* getMax(int *nums, int n)
{
    int i=0,k;
    // Определение индекса наибольшего элемента:
    for (k=0;k<n;++k)
    {
        if(nums[k]>nums[biggest])
            biggest=k;
    }
    // Результат функции - указатель на элемент:
    return nums+i;
}

// Функция для отображения содержимого массива:
void show(int *nums, int n)
{
    using namespace std; 

    for (int i=0; i<n; ++i)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}
// Главная функция программы:
int main()
{
    using namespace std;

    // Размер массива:
    const int size=10;
    // Создание массива:
    int numbers[size]={1,5,8,2,4,9,11,9,12,3};
    // Отображение содержимого массива:
    show(numbers, size);
    // Запись результата функции в указатель:
    int *maxPnt=getMax(numbers, size); 
    // Отображение максимального значения:
    cout<<"Максимальное значение: "<<*maxPnt<<endl;
    // Присваивание нового значения элементу:
    *maxPnt=-100;
    // Отображение содержимого массива:
    show(numbers, size);
    // Значение присваивается переменной:
    int maxNum=*getMax(numbers, size);
    // Проверка максимального значения:
    cout<<"Максимальное значение: "<<maxNum<<endl;
    // Присваивание нового значения переменной:
    maxNum-=200;
    // Проверка содержимого массива:
    show(numbers, size);
    cout<<"Максимальное значение: ";
    // Вычисление нового наибольшего значения:
    cout<<*getMax(numbers, size)<<endl;
    cout<<"Индекс элемента: ";
    // Вычисление индекса элемента с наибольшим значением:
    cout<<getMax(numbers, size)-numbers<<endl;

    return 0;
}