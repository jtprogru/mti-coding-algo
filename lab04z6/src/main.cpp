/*
 * PROGRAMM: lab04z6
 * В заданной строке дописать после
 * каждого символа «*» символ « ».
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/ZgiApz1Wdz0a
 * Copyright [2023] Michael Savin
 */

#include <iostream>
#include <string>

int main() {
    std::string str, newStr = "";
    std::cout << "Введите строку: ";
    getline(std::cin, str);

    // Добавляем пробел после каждого символа '*'
    for (std::string::size_type i = 0; i < str.length(); i++) {
        if (str[i] == '*') {
            newStr += "* ";
        } else {
            newStr += str[i];
        }
    }

    // Выводим измененную строку
    std::cout << "Измененная строка: " << newStr << std::endl;

    return 0;
}
