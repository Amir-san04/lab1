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

    // Переменная для хранения последнего слова
    std::string lastWord;

    // Читаем слова из строки
    while (iss >> lastWord);

    // Выводим последнее слово
    std::cout << lastWord << std::endl;

    return 0;
}
