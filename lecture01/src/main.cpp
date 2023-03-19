/*
Copyright [2023] Michael Savin
*/
#include <iostream>

int main() {
    int N = 0;
    int sum = 0;
    int i = 0;

    std::cout << "Введите количество элементов: ";
    std::cin >> N;
    for (i = 1; i <= N; i++) {
        if (i % 2 != 0) {
            sum += i;
        } else {
            std::cout << i << std::endl;
        }
    }

    printf("Сумма = %d\nПрограмма завершена.\n", sum);
    return 0;
}
