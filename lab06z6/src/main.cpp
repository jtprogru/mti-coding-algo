/*
 * PROGRAMM: lab06z6
 * Необходимо написать и отладить программу по заданному
 * варианту с обязательным использованием классов.
 * Программа должна состоять из двух файлов: один с описанием
 * классов и методов (с обязательными конструкторами
 * и деструкторами), а второй – с демонстрацией работы
 * всех возможностей класса на примере конкретных объектов.
 * Для всех вариантов предусмотреть разработку
 * конструктора и деструктора.
 *
 * Класс: Комплексное число в алгебраической форме z=x+yi
 * Данные класса: Действительная часть (x) и мнимая часть (y) числа
 * Методы:
 *   1. Вычисление модуля комплексного числа;
 *   2. Возведение комплексного числа в степень;
 *   3. Вывод комплексного числа;
 * Перегружаемые операции: Сложение (+), Вычитание (-), Умножение (*) и Деление (/) двух чисел
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/XXXXXXXXXXXX
 * Copyright [2023] Mikhail Savin
 */

// main.cpp
#include <iostream>
#include "complex_number.h"

int main() {
    double real1, imag1, real2, imag2;
    int exponent;

    std::cout << "Enter the real and imaginary parts of the first complex number (separated by a space): ";
    std::cin >> real1 >> imag1;

    std::cout << "Enter the real and imaginary parts of the second complex number (separated by a space): ";
    std::cin >> real2 >> imag2;

    std::cout << "Enter the exponent to raise the first complex number to: ";
    std::cin >> exponent;

    ComplexNumber a(real1, imag1);
    ComplexNumber b(real2, imag2);

    std::cout << "a = ";
    a.print();
    std::cout << "b = ";
    b.print();

    std::cout << "a + b = ";
    (a + b).print();

    std::cout << "a - b = ";
    (a - b).print();

    std::cout << "a * b = ";
    (a * b).print();

    std::cout << "a / b = ";
    (a / b).print();

    std::cout << "Magnitude of a: " << a.magnitude() << std::endl;

    std::cout << "a^" << exponent << " = ";
    a.power(exponent).print();

    return 0;
}
