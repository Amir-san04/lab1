#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string filePath;

    // Вводим путь к файлу
    std::cout << "";
    std::getline(std::cin, filePath);

    // Используем stringstream для разделения пути на части
    std::istringstream iss(filePath);

    // Переменная для хранения частей пути
    std::string pathPart;

    // Читаем части пути из строки и выводим их
    while (std::getline(iss, pathPart, '\\')) {
        std::cout << pathPart << std::endl;
    }

    return 0;
}
