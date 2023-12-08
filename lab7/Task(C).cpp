#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string inputString;

    // Вводим строку
    std::cout << "";
    std::getline(std::cin, inputString);

    // Используем stringstream для разделения строки на слова
    std::istringstream iss(inputString);

    // Переменная для хранения количества слов
    int wordCount = 0;

    // Считаем слова из строки
    std::string word;
    while (iss >> word) {
        wordCount++;
    }

    // Выводим количество слов
    std::cout << "" << wordCount << std::endl;

    return 0;
}
