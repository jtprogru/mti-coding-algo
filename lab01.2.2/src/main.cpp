/* ЛАБОРАТОРНАЯ РАБОТА 1. Ввод и вывод
Задание 2.2.
Напишите программу, которая предлагала бы пользователю решить
пример 4 * 100 - 54. Потом выводила бы на экран правильный ответ и ответ
пользователя.

Copyright [2023] Michael Savin
*/

#include <iostream>
#include <ostream>

int main() {
  std::string example = "4 * 100 - 54";
  int answer;
  std::cout << "Please calculate this and enter the answer:" << std::endl;
  std::cout << example << " = ";
  std::cin >> answer;
  std::cout << "Your answer is: " << answer << std::endl;
  std::cout << "Right answer is: " << 4 * 100 - 54 << std::endl;
  return 0;
}
