/*
 * PROGRAMM: lab02z1
 * Проверить, является ли данное натуральное число
 * числом Армстронга. Натуральное число из n цифр
 * называется числом Армстронга, если сумма его цифр,
 * возведенных в n-ю степень, равна самому
 * числу, например, 153=13+53+33.
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/kcwFlrjcgGMG
 *
 * Copyright [2023] Mikhail Savin
 */

#include <iostream>

int main()
{
    int number = 0, originalNumber = 0, remainder = 0, result = 0, n = 0;
    std::cout << "Введите целое число: ";
    std::cin >> number;
    originalNumber = number;

    // Считаем количество цифр в числе
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }

    // Проверяем, является ли число числом Армстронга
    originalNumber = number;
    while (originalNumber != 0)
    {
        remainder = originalNumber % 10;
        int poweredRemainder = 1;
        for (int i = 0; i < n; ++i)
        {
            poweredRemainder *= remainder;
        }
        result += poweredRemainder;
        originalNumber /= 10;
    }

    if (result == number)
    {
        std::cout << number << " - число Армстронга" << std::endl;
    }
    else
    {
        std::cout << number << " - не число Армстронга" << std::endl;
    }

    return 0;
}
