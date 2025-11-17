/*
 * PROGRAMM: lab02z2
 * Проверить, является ли данное натуральное
 * число числом Фибоначчи.
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/f2JHSsAhxUQe
 *
 * Copyright [2023] Mikhail Savin
 */

#include <iostream>

int main()
{
    int number, a = 0, b = 1, c = 0;
    bool isFibonacci = false;
    std::cout << "Введите целое число: ";
    std::cin >> number;

    while (b <= number)
    {
        if (b == number)
        {
            isFibonacci = true;
            break;
        }
        c = a + b;
        a = b;
        b = c;
    }

    if (isFibonacci)
    {
        std::cout << number << " - число Фибоначчи" << std::endl;
    }
    else
    {
        std::cout << number << " - не число Фибоначчи" << std::endl;
    }

    return 0;
}
