/*
 * PROGRAMM: lab09z2
 * Построить блок-схему и написать программу
 * поиска с барьером. Посчитать эффективность алгоритма.
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/KBteX65tnfi6
 * Copyright [2023] Michael Savin
 */

#include <iostream>
#include <vector>
#include <ctime>

int linearSearchWithBarrier(std::vector<int>& data, int key) {
    int n = data.size();
    int last = data[n - 1];
    data[n - 1] = key;

    int i = 0;
    while (data[i] != key) {
        i++;
    }

    data[n - 1] = last;

    if (i < n - 1 || data[n - 1] == key) {
        return i;
    }

    return -1;
}

int main() {
    int n, x;
    std::cout << "Введите длину массива: ";
    std::cin >> n;
    std::cout << "Введите искомый элемент: ";
    std::cin >> x;

    std::vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Введите " << i << " элемент: ";
        std::cin >> A[i];
    }

    clock_t start = clock();
    int index = linearSearchWithBarrier(A, x);
    clock_t end = clock();
    double barrierSearchTime = static_cast<double>(end - start) / CLOCKS_PER_SEC;

    if (index != -1) {
        std::cout << "Искомый элемент найден на позиции " << index << std::endl;
    } else {
        std::cout << "Искомый элемент не найден" << std::endl;
    }

    return 0;
}

