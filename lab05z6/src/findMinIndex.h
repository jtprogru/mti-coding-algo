/*
 * Блок-схема доступна тут:
 * https://app.code2flow.com/UEqB1awDbaYf
 *
 * Copyright [2023] Michael Savin
 */

// Функция для нахождения индекса минимального элемента
inline int findMinIndex(double arr[], int size) {
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}
