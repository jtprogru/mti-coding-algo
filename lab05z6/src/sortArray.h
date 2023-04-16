/*
 * Блок-схема доступна тут:
 * https://app.code2flow.com/7okuqwvhK4pA
 *
 * Copyright [2023] Michael Savin
 */

#include <iostream>
#include <algorithm>

// Функция для сортировки массива
inline void sortArray(double arr[], int size, int minIndex, int maxIndex) {
    std::sort(arr, arr + minIndex); // Сортировка элементов до минимального значения
    std::sort(arr + maxIndex + 1, arr + size, std::greater<double>()); // Сортировка элементов после максимального значения
}
