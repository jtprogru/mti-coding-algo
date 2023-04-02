/*
 * PROGRAMM: lab02z3
 * Проверить, является ли данное натуральное число
 * палиндромом (перевертышем). Натуральное число
 * называется палиндромом, если его запись читается
 * одинаково с начала и с конца, например, 2332, 313, 6.
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/VxNdezKcLpXU
 *
 * Copyright [2023] Michael Savin
 */

#include <iostream>

int main()
{
    int number = 0, reversedNumber = 0, remainder = 0, originalNumber = 0;
    std::cout << "Введите натуральное число: ";
    std::cin >> number;
    originalNumber = number;

    // Переворачиваем число
    while (number != 0)
    {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    // Сравниваем исходное число с перевернутым числом
    if (originalNumber == reversedNumber)
    {
        std::cout << originalNumber << " - палиндром" << std::endl;
    }
    else
    {
        std::cout << originalNumber << " - не палиндром" << std::endl;
    }

    return 0;
}
