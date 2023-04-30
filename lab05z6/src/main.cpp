/*
 * PROGRAMM: lab05z6
 * Упорядочить элементы вещественного массива следующим образом:
 * по возрастанию элементы, расположенные в массиве до минимального,
 * по убыванию элементы, расположенные после максимального.
 * Создать функции для сортировки массива и определения номеров
 * максимального и минимального элементов.
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/vjqncUqOs7Kf
 *
 * Copyright [2023] Michael Savin
 */
#include <iostream>
#include <vector>
#include "sortArray.h"
#include "findIndex.h"

int main() {
    int min_index = 0;
    int max_index = 0;
    std::string::size_type n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;

    double* arr = new double[n];

    std::cout << "Введите элементы массива" << std::endl;
    for (int i = 0; i < int(n); ++i) {
        std::cout << "Введите " << i+1 << " элемент массива: ";
        std::cin >> arr[i];
    }

    findMinIndex(arr, &min_index);
    findMaxIndex(arr, &max_index);

    bubbleSortAsc(arr, 0, min_index);
    bubbleSortDesc(arr, max_index + 1, sizeof(arr));

    std::cout << "Отсортированный массив: ";
    for (int i = 0; i < int(n); i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}
