#include <iostream>
#include <cstdlib>
#include <cmath>

const int n = 12;
int oddNums[n + 1];

bool isPrime(int num)
{
    for (int &x : oddNums)
    {
        if (num % x == 0 && num != x)
        {
            return false;
        }
    }

    return true;
}

int makeOddArray()
{
    // Массив первых десяти простых чисел:
    for (int k = 2, num = 3; k <= n; num++)
    {
        // Формуда простых чисел:
        if (num * num % 24 == 1)
        {
            if (num == 5 || num % 5 != 0)
            {
                oddNums[k] = num;
                k++;
            }
        }
    }
    return 0;
}

int main()
{

    oddNums[0] = 2;
    oddNums[1] = 3;

    // Создает цикл из пяти запросов:
    for (int step = 0, x1, x2; step < 5; step++)
    {
        std::cout << "Введите два числа и программа выведит наибольгий общий делитель" << std::endl;
        std::cout << "Первое число: ";
        std::cin >> x1;
        std::cout << "Второе число: ";
        std::cin >> x2;

        int smallest, biggest;
        if (x2 >= x1)
        {
            smallest = x1;
            biggest = x2;
        }
        else
        {
            smallest = x2;
            biggest = x1;
        }

        makeOddArray();

        // Объявляет перееменные меньшего и большего,
        // а также общее произведение простых чисел и, наконец, коэффицент цикла:
        int s = 1, k = 0;

        do
        {
        start:
            if (smallest % oddNums[k] == 0 && biggest % oddNums[k] == 0)
            {
                s *= oddNums[k];
                smallest /= oddNums[k];
                biggest /= oddNums[k];
                goto start;
            }

            else if (smallest == 2 and biggest % 2 != 0)
            {
                smallest = 0;
            }

            else if (isPrime(biggest))
            {
                if (smallest == biggest)
                {
                    s *= smallest;
                }
                smallest = 0;
            }

            else
            {
                k++;
            }

        } while (smallest >= oddNums[k]);

        // Выводит результат вычислений:
        std::cout << s << std::endl;
    }

    return 0;
}