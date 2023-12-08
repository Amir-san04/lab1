#include <iostream>
#include <string>

// Процедура для замены подстроки в строке
void replaceSubstring(std::string& str, const std::string& pattern, const std::string& replacement) {
    size_t startPos = 0;

    // Ищем все вхождения подстроки-образца
    while ((startPos = str.find(pattern, startPos)) != std::string::npos) {
        // Заменяем подстроку-образец на подстроку-замену
        str.replace(startPos, pattern.length(), replacement);

        // Перемещаемся к следующему возможному вхождению
        startPos += replacement.length();
    }
}

int main() {
    std::string inputString, pattern, replacement;

    // Вводим строку, подстроку-образец и подстроку-замену
    std::cout << "";
    std::getline(std::cin, inputString);

    std::cout << "";
    std::getline(std::cin, pattern);

    std::cout << "";
    std::getline(std::cin, replacement);

    // Вызываем процедуру для замены подстроки
    replaceSubstring(inputString, pattern, replacement);

    // Выводим результат
    std::cout << "" << inputString << std::endl;

    return 0;
}
