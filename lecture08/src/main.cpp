/*
Сумма и разность комплексных чисел через ООП
*/

#include <iostream>

class ComplexNum {
public:
    ComplexNum(double a = 0.0, double b = 0.0) : a_(a), b_(b) {}

    ComplexNum operator+(const ComplexNum& x) const {
        return ComplexNum(a_ + x.a_, b_ + x.b_);
    }

    ComplexNum operator-(const ComplexNum& x) const {
        return ComplexNum(a_ - x.a_, b_ - x.b_);
    }

    ComplexNum operator*(const ComplexNum& x) const {
        return ComplexNum(a_ * x.a_ - b_ * x.b_, a_ * x.b_ + b_ * x.a_);
    }

    ComplexNum operator/(const ComplexNum& x) const {
        double d = x.a_ * x.a_ + x.b_ * x.b_;
        return ComplexNum((a_ * x.a_ + b_ * x.b_) / d, (b_ * x.a_ - a_ * x.b_) / d);
    }

    void print() const {
        if (b_ == 0) {
            std::cout << a_ << std::endl;
        } else if (a_ == 0) {
            std::cout << b_ << "i" << std::endl;
        } else {
            std::cout << a_ << (b_ > 0 ? " + " : " - ") << std::abs(b_) << "i" << std::endl;
        }
    }

private:
    double a_;
    double b_;
};

int main() {
    double real1, imag1, real2, imag2;

    std::cout << "Enter the real part of the first complex number: ";
    std::cin >> real1;
    std::cout << "Enter the imaginary part of the first complex number: ";
    std::cin >> imag1;

    std::cout << "Enter the real part of the second complex number: ";
    std::cin >> real2;
    std::cout << "Enter the imaginary part of the second complex number: ";
    std::cin >> imag2;

    ComplexNum Num1(real1, imag1);
    ComplexNum Num2(real2, imag2);

    std::cout << "Sum: ";
    (Num1 + Num2).print();

    return 0;
}
