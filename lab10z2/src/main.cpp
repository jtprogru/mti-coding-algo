/*
 * PROGRAMM: lab10z2
 * Построить блок-схему и написать программу
 * сортировки подсчётом. Посчитать эффективность алгоритма.
 *
 * Подробности алгоритма доступны на Википедии
 * https://en.wikipedia.org/wiki/Counting_sort
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/nbftpxdKS2zc
 * Copyright [2023] Mikhail Savin
 */

#include <iostream>
#include <vector>
#include <chrono>
#include <algorithm>

void counting_sort(std::vector<int>& arr) {
    int max_element = *std::max_element(arr.begin(), arr.end());
    int min_element = *std::min_element(arr.begin(), arr.end());

    int range = max_element - min_element + 1;
    std::vector<int> count(range, 0);
    std::vector<int> output(arr.size());

    for (int i = 0; i < arr.size(); i++) {
        count[arr[i] - min_element]++;
    }

    for (int i = 1; i < count.size(); i++) {
        count[i] += count[i - 1];
    }

    for (int i = arr.size() - 1; i >= 0; i--) {
        output[count[arr[i] - min_element] - 1] = arr[i];
        count[arr[i] - min_element]--;
    }

    for (int i = 0; i < arr.size(); i++) {
        arr[i] = output[i];
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
    counting_sort(arr);
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Отсортированный массив: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Время выполнения сортировки подсчетом: " << duration.count() << " микросекунд" << std::endl;

    return 0;
}
