/*
 * PROGRAMM: lab03z6
 * Дан массив вещественных чисел Z(16).
 * Определить разность между суммой элементов
 * c четными индексами и суммой элементов,
 * индексы которых кратны трем.
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/2bPYbZD7UMWl
 * Copyright [2023] Mikhail Savin
 */

#include <iostream>
#include <random>

int main() {
    const int n = 16;
    double Z[n];
    double sum_even = 0;
    double sum_multiple_3 = 0;

    // Генерируем случайные числа и заполняем ими массив Z
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0.0, 10.0);

    for (int i = 0; i < n; i++) {
        Z[i] = dis(gen);
    }

    // Выводим содержимое массива
    std::cout << "Массив Z: ";
    for (int i = 0; i < n; i++) {
        std::cout << Z[i] << " ";
    }
    std::cout << std::endl;

    // Вычисляем суммы элементов и разность между ними

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum_even += Z[i];
        }
        if (i % 3 == 0) {
            sum_multiple_3 += Z[i];
        }
    }

    double diff = sum_even - sum_multiple_3;

    // Выводим результат
    std::cout << "Разность между суммой элементов с четными индексами и кратными трем: " << diff << std::endl;

    return 0;
}
