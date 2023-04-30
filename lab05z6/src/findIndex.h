/*
 * Copyright [2023] Michael Savin
 */

#include <iostream>
#include <vector>

// TODO: Нарисовать правильную блок-схему для функции
// Функция для нахождения индекса максимального элемента
inline void findMaxIndex(const double* arr, int* max_index) {
    for (int i = 1; i < int(sizeof(arr)); ++i) {
        if (arr[i] > arr[*max_index]) {
            *max_index = i;
        }
    }
    return;
}

// TODO: Нарисовать правильную блок-схему для функции
// Функция для нахождения индекса минимального элемента
inline void findMinIndex(const double* arr, int* min_index) {
    for (int i = 1; i < int(sizeof(arr)); ++i) {
        if (arr[i] < arr[*min_index]) {
            *min_index = i;
        }
    }
}

