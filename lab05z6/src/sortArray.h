/*
 * Блок-схема доступна тут:
 * https://app.code2flow.com/7okuqwvhK4pA
 *
 * Copyright [2023] Michael Savin
 */
#include <iostream>
#include <vector>

// FIX: Нарисовать правильную блок-схему для функции
inline void bubble_sort_asc(double* arr, int start, int end) {
    for (int i = start; i < end; ++i) {
        for (int j = start; j < end - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// FIX: Нарисовать правильную блок-схему для функции
inline void bubble_sort_desc(double* arr, int start, int end) {
    for (int i = start; i < end; ++i) {
        for (int j = start; j < end - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}
