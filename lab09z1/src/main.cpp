/*
 * PROGRAMM: lab09z1
 * Построить блок-схему и написать программу
 * линейного поиска. Посчитать эффективность алгоритма.
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/XXXXXXXXXXXX
 * Copyright [2023] Michael Savin
 */

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

int main() {
    srand(static_cast<unsigned>(time(0)));

    int n, x;
    std::cout << "Введите длину массива: ";
    std::cin >> n;
    std::cout << "Введите искомый элемент: ";
    std::cin >> x;

    std::vector<int> A(n);
    // TODO: Уточнить по части наполнения массива;
    for (int i = 0; i < n; ++i) {
        A[i] = rand() % 1000; // Генерация случайных чисел в диапазоне от 0 до 999
    }

    std::cout << "Сгенерированный массив: ";
    for (const auto& el : A) {
        std::cout << el << ' ';
    }
    std::cout << std::endl;

    int index = -1;
    int comparisons = 0;

    for (size_t i = 0; i < A.size(); ++i) {
        ++comparisons;
        if (A[i] == x) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        std::cout << "Элемент найден на позиции: " << index << std::endl;
    } else {
        std::cout << "Элемент не найден" << std::endl;
    }

    std::cout << "Число сравнений: " << comparisons << std::endl;

    return 0;
}
