// Считать из двух файлов массивы длины 10 посчитать
// их сумму по-элеметно и записать в третий файл
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>

void createFile(const std::string& fileName);
std::vector<int> readFile(const std::string& fileName);
void writeFile(const std::string& fileName, const std::vector<int>& data);

int main() {
    std::srand(static_cast<unsigned>(std::time(0)));

    createFile("file1.txt");
    createFile("file2.txt");

    std::vector<int> arr1 = readFile("file1.txt");
    std::vector<int> arr2 = readFile("file2.txt");

    std::vector<int> arr_sum(10);
    for (size_t i = 0; i < 10; ++i) {
        arr_sum[i] = arr1[i] + arr2[i];
        std::cout << arr_sum[i] << "\t";
    }

    writeFile("file3.txt", arr_sum);

    return 0;
}

/**
+ * Creates a file with the given file name and writes 10 random numbers to it.
+ *
+ * @param fileName the name of the file to be created
+ *
+ * @return void
+ *
+ * @throws None
+ */
void createFile(const std::string& fileName) {
    std::ofstream file(fileName, std::ios::out);

    for (size_t i = 0; i < 10; ++i) {
        file << std::rand() % 101 << "\t";
    }
    file.close(); // Close the file after writing to it
}

std::vector<int> readFile(const std::string& fileName) {
    std::ifstream file(fileName, std::ios::in);
    std::vector<int> data(10);

    for (int& value : data) {
        file >> value;
    }

    return data;
}

void writeFile(const std::string& fileName, const std::vector<int>& data) {
    std::ofstream file(fileName, std::ios::out);

    for (const int& value : data) {
        file << value << "\t";
    }
}
