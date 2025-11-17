/*
 * PROGRAMM: lab02z5
 * Даны два натуральных числа.
 * Выяснить, имеют ли они хотя бы два общих множителя.
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/Zx5ksDxBJnsR
 *
 * Copyright [2023] Mikhail Savin
 */

#include <iostream>

int main()
{
    int number1, number2, minNumber, commonFactors = 0;
    std::cout << "Введите первое натуральное число: ";
    std::cin >> number1;
    std::cout << "Введите второе натуральное число: ";
    std::cin >> number2;

    minNumber = (number1 < number2) ? number1 : number2;

    // Перебираем числа от 2 до наименьшего из двух чисел
    for (int i = 2; i <= minNumber; i++)
    {
        // Проверяем, является ли i общим множителем
        if ((number1 % i == 0) && (number2 % i == 0))
        {
            commonFactors++;
        }
        // Если мы нашли два общих множителя, то выходим из цикла
        if (commonFactors == 2)
        {
            break;
        }
    }

    // Проверяем, имеют ли числа хотя бы два общих множителя
    if (commonFactors >= 2)
    {
        std::cout << "Числа имеют хотя бы два общих множителя" << std::endl;
    }
    else
    {
        std::cout << "Числа не имеют хотя бы двух общих множителей" << std::endl;
    }

    return 0;
}
