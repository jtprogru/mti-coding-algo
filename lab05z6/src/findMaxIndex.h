/*
 * Блок-схема доступна тут:
 * https://app.code2flow.com/yXRIqCxU0rIr
 *
 * Copyright [2023] Michael Savin
 */

// Функция для нахождения индекса максимального элемента
inline int findMaxIndex(double arr[], int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}
