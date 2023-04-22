// complex_number.cpp
#include "complex_number.h"

// Конструктор
ComplexNumber::ComplexNumber(double real, double imaginary) : x(real), y(imaginary) {}

// Деструктор
ComplexNumber::~ComplexNumber() {}

// Вычисление модуля комплексного числа
double ComplexNumber::magnitude() const {
    return sqrt(x * x + y * y);
}

// Возведение комплексного числа в степень
ComplexNumber ComplexNumber::power(int exponent) const {
    double r = magnitude();
    double theta = atan2(y, x);
    double new_r = pow(r, exponent);
    double new_theta = theta * exponent;

    return ComplexNumber(new_r * cos(new_theta), new_r * sin(new_theta));
}

// Вывод комплексного числа
void ComplexNumber::print() const {
    std::cout << x << " + " << y << "i" << std::endl;
}

// Перегружаемые операции
ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const {
    return ComplexNumber(x + other.x, y + other.y);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& other) const {
    return ComplexNumber(x - other.x, y - other.y);
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& other) const {
    return ComplexNumber(x * other.x - y * other.y, x * other.y + y * other.x);
}

ComplexNumber ComplexNumber::operator/(const ComplexNumber& other) const {
    double denominator = other.x * other.x + other.y * other.y;
    return ComplexNumber((x * other.x + y * other.y) / denominator,
                         (y * other.x - x * other.y) / denominator);
}
