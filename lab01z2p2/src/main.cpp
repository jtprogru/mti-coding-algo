/*
 *
 * Запросите у пользователя четыре числа. Отдельно сложите первые
 * два и отдельно вторые два. Разделите первую сумму на вторую.
 * Выведите результат на экран так, чтобы ответ содержал две
 * цифры после запятой.
 *
 * Copyright [2023] Michael Savin
*/

#include <iostream>
#include <ostream>

int main()
{
  std::string example = "4 * 100 - 54";
  int answer;
  std::cout << "Please calculate this and enter the answer:" << std::endl;
  std::cout << example << " = ";
  std::cin >> answer;
  std::cout << "Your answer is: " << answer << std::endl;
  std::cout << "Right answer is: " << 4 * 100 - 54 << std::endl;
  return 0;
}
