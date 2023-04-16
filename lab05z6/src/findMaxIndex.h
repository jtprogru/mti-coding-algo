/*
 * Блок-схема доступна тут:
 * https://app.code2flow.com/yXRIqCxU0rIr
 *
 * Copyright [2023] Michael Savin
 */
#include <iostream>
#include <vector>

// Функция для нахождения индекса максимального элемента
inline int find_max_index(const double* arr) {
    int max_index = 0;
    for (int i = 1; i < int(sizeof(arr)); ++i) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
    }
    return max_index;
}
