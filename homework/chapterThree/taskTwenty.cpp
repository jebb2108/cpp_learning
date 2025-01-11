#include <iostream>
#include <cstdlib>
#include <ctime>

void fillArray(int** arr, int rows, int cols) {
    // Заполнение массива случайными числами
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = rand() % 100; // случайные числа от 0 до 99
        }
    }
}

void printArray(int** arr, int rows, int cols) {
    // Вывод массива на экран
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

int main() {
    srand(time(0)); // Инициализация генератора случайных чисел

    int rows = 5, cols = 5; // Размерность массива

    // Создание динамического двумерного массива
    int** arr = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new int[cols];
    }

    // Заполнение массива случайными числами
    fillArray(arr, rows, cols);

    std::cout << "Исходный массив:" << std::endl;
    printArray(arr, rows, cols);

    int rowToDelete, colToDelete;

    // Ввод индексов строки и столбца для удаления
    std::cout << "Введите индекс строки для удаления (0-" << rows - 1 << "): ";
    std::cin >> rowToDelete;
    std::cout << "Введите индекс столбца для удаления (0-" << cols - 1 << "): ";
    std::cin >> colToDelete;

    // Удаление строки
    int** newArr = new int*[rows - 1];
    for (int i = 0, newRow = 0; i < rows; ++i) {
        if (i == rowToDelete) continue; // Пропускаем удаляемую строку
        newArr[newRow] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            newArr[newRow][j] = arr[i][j];
        }
        ++newRow;
    }

    // Удаление столбца в новом массиве
    int** finalArr = new int*[rows - 1];
    for (int i = 0; i < rows - 1; ++i) {
        finalArr[i] = new int[cols - 1];
        for (int j = 0, newCol = 0; j < cols; ++j) {
            if (j == colToDelete) continue; // Пропускаем удаляемый столбец
            finalArr[i][newCol] = newArr[i][j];
            ++newCol;
        }
    }

    // Вывод измененного массива
    std::cout << "\nМассив после удаления строки и столбца:" << std::endl;
    printArray(finalArr, rows - 1, cols - 1);

    // Освобождение памяти
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    for (int i = 0; i < rows - 1; ++i) {
        delete[] newArr[i];
    }
    delete[] newArr;

    for (int i = 0; i < rows - 1; ++i) {
        delete[] finalArr[i];
    }
    delete[] finalArr;

    return 0;
}