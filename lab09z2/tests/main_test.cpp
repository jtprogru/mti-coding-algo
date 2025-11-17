/*
 * PROGRAMM: lab09z2
 * Построить блок-схему и написать программу
 * поиска с барьером. Посчитать эффективность алгоритма.
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/XXXXXXXXXXXX
 * Copyright [2023] Mikhail Savin
 */

#include <iostream>
#include <vector>
#include <ctime>
#include <random>

int linearSearchWithBarrier(std::vector<int>& data, int key) {
    std::vector<int>::size_type n = data.size();
    std::vector<int>::size_type last = data[n - 1];
    data[n - 1] = key;

    std::vector<int>::size_type i = 0;
    while (data[i] != key) {
        i++;
    }

    data[n - 1] = last;

    if (i < n - 1 || data[n - 1] == key) {
        return i;
    }

    return -1;
}

void runTest(std::vector<int>& data, int key) {
    clock_t start = clock();
    std::vector<int>::size_type index = linearSearchWithBarrier(data, key);
    clock_t end = clock();
    double barrierSearchTime = static_cast<double>(end - start) / CLOCKS_PER_SEC;

    std::cout << "Время поиска с барьером: " << barrierSearchTime * 1000 << " миллисекунд" << std::endl;

    if (index != -1) {
        std::cout << "Искомый элемент найден на позиции " << index << std::endl;
    } else {
        std::cout << "Искомый элемент не найден" << std::endl;
    }
}

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> arraySizeDist(2000000, 5000000);
    std::uniform_int_distribution<> elementDist(0, 1000000);

    int testIterations = 10;

    for (int test = 0; test < testIterations; ++test) {
        std::cout << "Тест " << test + 1 << std::endl;
        int n = arraySizeDist(gen);
        std::vector<int> A(n);
        for (int i = 0; i < n; ++i) {
            A[i] = elementDist(gen);
        }
        int x = elementDist(gen);
        std::cout << "Искомый элемент: " << x << std::endl;
        runTest(A, x);
        std::cout << "-------------------------------------" << std::endl;
    }

    return 0;
}
