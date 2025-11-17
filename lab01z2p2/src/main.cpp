/*
 * PROGRAMM: lab01z2p2
 * Запросите у пользователя четыре числа. Отдельно сложите первые
 * два и отдельно вторые два. Разделите первую сумму на вторую.
 * Выведите результат на экран так, чтобы ответ содержал две
 * цифры после запятой.
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/5XqQXToSrlnz
 *
 * Copyright [2023] Mikhail Savin
 */

#include <iostream>

int main()
{
    std::string example = "4 x 100 - 54";
    int answer = 0;
    std::cout << "Please calculate this and enter the answer:" << std::endl;
    std::cout << example << " = ";
    std::cin >> answer;
    std::cout << "Your answer is: " << answer << std::endl;
    std::cout << "Right answer is: " << 4 * 100 - 54 << std::endl;
    return 0;
}
