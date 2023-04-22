// complex_number.h
#pragma once
#include <iostream>
#include <cmath>

class ComplexNumber {
private:
    double x; // действительная часть
    double y; // мнимая часть

public:
    // Конструктор
    ComplexNumber(double x = 0.0, double y = 0.0);

    // Деструктор
    ~ComplexNumber();

    // Методы
    double magnitude() const;
    ComplexNumber power(int exponent) const;
    void print() const;

    // Перегружаемые операции
    ComplexNumber operator+(const ComplexNumber& other) const;
    ComplexNumber operator-(const ComplexNumber& other) const;
    ComplexNumber operator*(const ComplexNumber& other) const;
    ComplexNumber operator/(const ComplexNumber& other) const;
};
