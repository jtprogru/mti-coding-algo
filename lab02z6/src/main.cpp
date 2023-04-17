/*
 * PROGRAMM: lab02z6
 * Проверить, является ли данное натуральное число числом Мерсена
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/KfEigkXZaE1J
 *
 * Copyright [2023] Michael Savin
 */

#include <cmath>
#include <iostream>

// Функция для проверки, является ли число простым
static bool isPrime(int number)
{
    if (number <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Функция для проверки, является ли число числом Мерсена
static bool isMersenne(int number)
{
    if (number <= 0)
    {
        return false;
    }
    int p = 2;
    while (true)
    {
        int mersenne = int(pow(2, p) - 1);
        if (mersenne == number)
        {
            return true;
        }
        else if (mersenne > number)
        {
            return false;
        }
        // Если число 2^p-1 не равно данному числу, проверяем следующее простое число
        p++;
        while (!isPrime(p))
        {
            p++;
        }
    }
}

int main()
{
    int number;
    std::cout << "Введите натуральное число: ";
    std::cin >> number;

    // Проверяем, является ли число числом Мерсена
    if (isMersenne(number))
    {
        std::cout << "Число является числом Мерсена";
    }
    else
    {
        std::cout << "Число не является числом Мерсена";
    }

    return 0;
}
