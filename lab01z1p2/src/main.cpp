/*
 *
 * Создайте 5 переменных типа char, предложите пользователю ввести слово
 * из пяти букв и покажите эти символы (слово) на экран.
 *
 * Copyright [2023] Michael Savin
*/

#include <iomanip>
#include <iostream>

int main()
{
    char q, w, e, r, t;

    std::cout << "Введите слово из пяти букв:\n";
    // TODO: Уточнить про ввод в одну строку или по символу на каждой строке
    std::cin >> q >> w >> e >> r >> t;

    std::cout << q << w << e << r << t << std::endl;

    return 0;
}

