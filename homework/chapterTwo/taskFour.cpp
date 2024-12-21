#include <iostream>
#include <cstdlib>
#include <cmath>

const int n = 20;
int oddNums[n + 1];

bool isPrime(int num)
{

    if (num != 2 && num % 2 == 0)
    {
        return false;
    }

    for (int i = 2; i <= (int)sqrt(num); i++)
    {
        if (num % i == 0)
        {
            // вывести, что n  не простое, так как делится на i
            return false;
        }
    }
    // вывести что n простое.
    return true;
}

int makeOddArray()
{
    // Массив простых чисел:
    for (int k = 0, num = 2; k < n + 1; num++)
    {
        if (isPrime(num))
        {
            oddNums[k] = num;
            k++;
        }
    }

    return 0;
}

int main()
{

    makeOddArray();

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