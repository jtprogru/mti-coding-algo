/*
 * Задача данной программа выполнить скрипт
 * /path/to/your/script.py с аргументами arg1 и arg2
 * с помощью интерпретатора python3
 * и собрать весь вывод скрипта в переменную,
 * после чего вывести его в stdout.
 *
 * Copyright [2023] Mikhail Savin
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <stdexcept>

using namespace std;

int main() {
    string command = "python3 /path/to/your/script.py arg1 arg2";
    char buffer[128];
    string result = "";

    // Выполнение команды и получение результата
    FILE* pipe = popen(command.c_str(), "r");
    if (!pipe) {
        throw runtime_error("Ошибка выполнения команды");
    }
    while (fgets(buffer, sizeof(buffer), pipe) != NULL) {
        result += buffer;
    }
    pclose(pipe);

    // Вывод результата
    cout << result;

    return 0;
}
