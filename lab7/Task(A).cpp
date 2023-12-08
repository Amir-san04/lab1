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

    // Переменная для хранения первого слова
    std::string firstWord;

    // Читаем первое слово из строки
    iss >> firstWord;

    // Выводим первое слово
    std::cout << "" << firstWord << std::endl;

    return 0;
}
