/*
 * PROGRAMM: lab10z1
 * Построить блок-схему и написать программу
 * пузырьковой сортировки. Посчитать эффективность алгоритма.
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/KQy9pdDBs6b4
 * Copyright [2023] Mikhail Savin
 */

#include <iostream>
#include <vector>
#include <chrono>

void bubble_sort(std::vector<int>& arr) {
    bool swapped;
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

int main() {
    int n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Введите " << i << " элемент: ";
        std::cin >> arr[i];
    }

    auto start = std::chrono::high_resolution_clock::now();
    bubble_sort(arr);
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Отсортированный массив: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Время выполнения пузырьковой сортировки: " << duration.count() << " микросекунд" << std::endl;

    return 0;
}
