/*
 * PROGRAMM: lab01z1p2
 * Создайте 5 переменных типа char, предложите пользователю ввести слово
 * из пяти букв и покажите эти символы (слово) на экран.
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/cpWCYandlxFG
 *
 * Copyright [2023] Michael Savin
 */

#include <iostream>

int main()
{
    char q, w, e, r, t;

    std::cout << "Введите слово из пяти букв:" << std::endl;
    std::cin >> q >> w >> e >> r >> t;

    std::cout << q << w << e << r << t << std::endl;

    return 0;
}
