/*
 * Блок-схема доступна тут:
 * https://app.code2flow.com/UEqB1awDbaYf
 *
 * Copyright [2023] Michael Savin
 */

#include <iostream>
#include <vector>

// Функция для нахождения индекса минимального элемента
inline int find_min_index(const double* arr) {
    int min_index = 0;
    for (int i = 1; i < int(sizeof(arr)); ++i) {
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }
    return min_index;
}
