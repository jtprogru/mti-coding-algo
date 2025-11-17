/*
 * PROGRAMM: lab01z2p1
 * Напишите программу, которая запрашивала бы у пользователя:
 *    - его имя (например, "What is your name?")
 *    - возраст ("How old are you?")
 *    - место жительства ("Where are you live?")
 * После этого выводила бы три строки:
 *    "This is имя"
 *    "It is возраст"
 *    "(S)he live in место_жительства"
 * Вместо имя, возраст, место_жительства должны быть данные,
 * введенные пользователем.
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/g1c8V7vmRP4X
 *
 * Copyright [2023] Mikhail Savin
 */

#include <iostream>

int main()
{
    std::string name;
    std::string place;
    std::uint16_t age;
    std::cout << "What is your name?\n"
              << "-> " << std::endl;
    std::cin >> name;
    std::cout << "How old are you?\n"
              << "-> " << std::endl;
    std::cin >> age;
    std::cout << "Where are you live?\n"
              << "-> " << std::endl;
    std::cin >> place;
    std::cout << "This is " << name << std::endl;
    std::cout << "It is " << age << std::endl;
    std::cout << "(S)he live in " << place << std::endl;
    return 0;
}
