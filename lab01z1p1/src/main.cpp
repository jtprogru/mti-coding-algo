/*
 * PROGRAMM: lab01z1p1
 * Пользователь должен ввести 2 числа. Вам надо показать на
 * экран произведение этих чисел, сумму и разницу.
 * Покажите так же среднее арифметическое этих введенных чисел.
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/XirGozucQMtL
 *
 * Copyright [2023] Mikhail Savin
 */

#include <iomanip>
#include <iostream>

int main() {
  float a = 0, b = 0;
  float ma;

  std::cout << "Введите первое число: ";
  std::cin >> a;
  std::cout << "Введите второе число: ";
  std::cin >> b;

  ma = (a + b) / 2;

  std::cout << std::fixed << std::setw(3) << std::setprecision(2) << ma
            << std::endl;
  return 0;
}
