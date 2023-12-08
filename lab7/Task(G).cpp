#include <iostream>
#include <string>

int countSubstrings(const std::string& str, const std::string& substring) {
    size_t count = 0;
    size_t startPos = 0;

    // Ищем все вхождения подстроки-образца
    while ((startPos = str.find(substring, startPos)) != std::string::npos) {
        // Увеличиваем счетчик и переходим к следующему возможному вхождению
        count++;
        startPos += substring.length();
    }

    return count;
}

int main() {
    std::string inputString, pattern;

    // Вводим строку и подстроку-образец
    std::cout << "";
    std::getline(std::cin, inputString);

    std::cout << "";
    std::getline(std::cin, pattern);

    // Вызываем функцию для подсчета вхождений подстроки
    int result = countSubstrings(inputString, pattern);

    // Выводим результат
    std::cout << "" << result << std::endl;

    return 0;
}
