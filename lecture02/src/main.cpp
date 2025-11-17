/*
 * Создать массив из N элементов типа int.
 * Посчитать произведение чисел расположенных
 * на местах, индекс которых равен 3 и сумму
 * четных чисел.
 *
 * Copyright [2023] Mikhail Savin
 */

#include <iostream>
int main() {
  int i = 0;
  int n = 0;
  int p = 1;
  int sum = 0;

  std::cout << "Please input N = ";
  std::cin >> n;

  int *arr = new int[n];

  for (i = 0; i < n; i++) {
    std::cout << "Input element " << i + 1 << " = ";
    std::cin >> arr[i];
  }

  for (i = 0; i < n; i++) {
    std::cout << arr[i] << " | ";
  }

  for (i = 0; i < n; i += 3) {
    p *= arr[i];
  }

  for (i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      sum += arr[i];
    }
  }

  std::cout << "\nПроизведение: " << p << std::endl;
  std::cout << "Сумма: " << sum << std::endl;

  delete[] arr;
  return 0;
}
