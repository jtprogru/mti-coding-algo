/*
 * Copyright [2023] Mikhail Savin
 */
#include <iostream>
#include <vector>

// TODO: Нарисовать правильную блок-схему для функции
// Функция сортировки пузырьком по возростанию
inline void bubbleSortAsc(double* arr, int start, int end) {
    for (int i = start; i < end; ++i) {
        for (int j = start; j < end - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// TODO: Нарисовать правильную блок-схему для функции
// Функция сортировки пузырьком по убыванию
inline void bubbleSortDesc(double* arr, int start, int end) {
    for (int i = start; i < end; ++i) {
        for (int j = start; j < end - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}
