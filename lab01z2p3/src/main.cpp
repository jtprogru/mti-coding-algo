/*
 * PROGRAMM: lab01z2p3
 * Запросите у пользователя четыре числа.
 * Отдельно сложите первые два и отдельно вторые два.
 * Разделите первую сумму на вторую. Выведите результат на экран так,
 * чтобы ответ содержал две цифры после запятой.
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/nDqOpx0w2kZj
 *
 * Copyright [2023] Michael Savin
 */

#include <iomanip>
#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int ab = 0;
    int cd = 0;

    float ma = 0;

    std::cout << "Please input A: ";
    std::cin >> a;
    std::cout << "Please input B: ";
    std::cin >> b;
    std::cout << "Please input C: ";
    std::cin >> c;
    std::cout << "Please input D: ";
    std::cin >> d;

    ab = a + b;
    cd = c + d;

    ma = float(ab) / float(cd);

    std::cout << std::fixed << std::setw(3) << std::setprecision(2) << ma << std::endl;
    return 0;
}
