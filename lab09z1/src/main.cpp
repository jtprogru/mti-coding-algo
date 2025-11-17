/*
 * PROGRAMM: lab09z1
 * Построить блок-схему и написать программу
 * линейного поиска. Посчитать эффективность алгоритма.
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/D369a98P1LLq
 * Copyright [2023] Mikhail Savin
 */

#include <iostream>
#include <vector>
#include <ctime>

int main() {
    srand(static_cast<unsigned>(time(0)));

    int n, x;
    int index = -1;
    int comparisons = 0;

    std::cout << "Введите длину массива: ";
    std::cin >> n;
    std::cout << "Введите искомый элемент: ";
    std::cin >> x;

    std::vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Введите " << i << " элемент: ";
        std::cin >> A[i]; // Наполнение массива данными;
    }

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
