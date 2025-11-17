/*
 * PROGRAMM: lab02z7
 * Проверить, можно ли представить данное натуральное
 * число в виде суммы квадратов двух натуральных чисел.
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/IcExIfq57MUK
 *
 * Copyright [2023] Mikhail Savin
 */

#include <iostream>
#include <cmath>

int main()
{
    int number = 0;
    bool isSumOfSquares = false;
    std::cout << "Введите натуральное число: ";
    std::cin >> number;

    // Перебираем все пары натуральных чисел, начиная с 1 и до корня из данного числа
    for (int i = 1; i <= sqrt(number); i++)
    {
        for (int j = 1; j <= sqrt(number); j++)
        {
            // Проверяем, является ли сумма квадратов этих чисел равной данному числу
            if (i * i + j * j == number)
            {
                isSumOfSquares = true;
                break;
            }
        }
        if (isSumOfSquares)
        {
            break;
        }
    }

    // Проверяем, можно ли представить данное число в виде суммы квадратов двух натуральных чисел
    if (isSumOfSquares)
    {
        std::cout << "Данное число можно представить в виде суммы квадратов двух натуральных чисел" << std::endl;
    }
    else
    {
        std::cout << "Данное число нельзя представить в виде суммы квадратов двух натуральных чисел" << std::endl;
    }

    return 0;
}
