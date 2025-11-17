/*
 * PROGRAMM: lab08z6
 * Создать текстовый файл в текстовом редакторе.
 * Организовать просмотр содержимого файла и выполнения
 * действий в соответствии с условием индивидуального
 * задания. Обеспечить сохранение всех полученных
 * результатов в новый файл.
 *
 * Дан файл f, компоненты которого являются действительными
 * числами. Найти модуль суммы и квадрат
 * произведения компонент файла.
 *
 * Блок-схема доступна тут:
 * https://app.code2flow.com/T6iMNr3f397k
 * Copyright [2023] Mikhail Savin
 */

#include <iostream>
#include <fstream>
#include <cmath>

int main() {
    std::string inputFilename = "input.txt";
    std::ifstream inputFile(inputFilename);

    if (!inputFile) {
        std::cerr << "Cannot open file: " << inputFilename << std::endl;
        return 1;
    }

    double sum = 0;
    double product = 1;
    double number;

    while (inputFile >> number) {
        sum += number;
        product *= number;
    }

    inputFile.close();

    double absoluteSum = std::abs(sum);
    double squaredProduct = product * product;

    std::string outputFilename = "output.txt";
    std::ofstream outputFile(outputFilename);

    if (!outputFile) {
        std::cerr << "Cannot open file: " << outputFilename << std::endl;
        return 1;
    }

    outputFile << "Absolute sum: " << absoluteSum << std::endl;
    outputFile << "Squared product: " << squaredProduct << std::endl;

    outputFile.close();

    return 0;
}
