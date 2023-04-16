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

#include "sortArray.h"
#include "findMinIndex.h"
#include "findMaxIndex.h"
#include <iostream>
#include <algorithm>


int main() {
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    // Выделяем память для массива
    double* arr = new double[size];

    // Вводим элементы массива
    for (int i = 0; i < size; i++) {
        std::cout << "Введите элемент массива " << i << ": ";
        std::cin >> arr[i];
    }

    int minIndex = findMinIndex(arr, size);
    int maxIndex = findMaxIndex(arr, size);

    // Сортируем элементы массива
    sortArray(arr, size, minIndex, maxIndex);

    // Выводим отсортированный массив
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    // Освобождаем память, выделенную для массива
    delete[] arr;

    return 0;
}
