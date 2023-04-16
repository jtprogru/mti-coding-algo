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
#include <algorithm>
#include "sortArray.h"
#include "findMinIndex.h"
#include "findMaxIndex.h"


int main() {
    double arr[] = {2.5, 4.6, 1.2, 6.4, 9.1, 3.8, 7.2, 5.7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int minIndex = findMinIndex(arr, size);
    int maxIndex = findMaxIndex(arr, size);

    // Сортируем элементы массива
    sortArray(arr, size, minIndex, maxIndex);

    // Выводим отсортированный массив
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

