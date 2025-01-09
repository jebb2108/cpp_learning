#include <iostream>

int main() 
{
    // Инициализация генератора случайных чисел:
    srand(2);
    // Количество "столбцов" в массиве:
    const int width=9;
    // Количество "строк" массива:
    const int height=5;
    // Создание двумерного массива:
    char Lts[height][width];
    // Заполнение двумерного массива:
    for (int i=0; i<height;i++)
    {
        for (int j=0;j<width;j++)
        {
            // Случайно буква от 'A' до 'Z':
            Lts[i][j] = 'A' + rand() % 25;
            // Отображение значения элемента массива:
            std::cout<<Lts[i][j]<<" ";
        }
        // Переход к новой строке:
        std::cout<<std::endl;
    }
    return 0;
}