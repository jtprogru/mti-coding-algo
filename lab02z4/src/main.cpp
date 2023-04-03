/*
 * PROGRAMM: lab02z4
 * Две точки на плоскости заданы своими координатами.
 * Выяснить, образуют ли эти точки вместе с центром
 * координат прямоугольный треугольник.
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/syltm3ydE8k5
 *
 * Copyright [2023] Michael Savin
 */

#include <iostream>
#include <cmath>

int main()
{
    float x1 = 0, y1 = 0, x2 = 0, y2 = 0, distance1 = 0, distance2 = 0, distance3 = 0;
    std::cout << "Введите координаты первой точки (x1): ";
    std::cin >> x1;
    std::cout << "Введите координаты первой точки (y1): ";
    std::cin >> y1;
    std::cout << "Введите координаты второй точки (x2): ";
    std::cin >> x2;
    std::cout << "Введите координаты второй точки (y2): ";
    std::cin >> y2;

    // Вычисляем расстояния от каждой точки до центра координат
    distance1 = float(sqrt(pow(x1, 2) + pow(y1, 2)));
    distance2 = float(sqrt(pow(x2, 2) + pow(y2, 2)));
    distance3 = float(sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));

    // Проверяем, образуют ли точки вместе с центром координат прямоугольный треугольник
    if (float(pow(distance1, 2)) + float(pow(distance2, 2)) == float(pow(distance3, 2)))
    {
        std::cout << "Точки образуют прямоугольный треугольник" << std::endl;
    }
    else
    {
        std::cout << "Точки не образуют прямоугольный треугольник" << std::endl;
    }

    return 0;
}
