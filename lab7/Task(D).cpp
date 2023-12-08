#include <iostream>
#include <string>

int main() {
    std::string word;

    // Вводим слово
    std::cout << "";
    std::cin >> word;

    // Переменная для хранения результата
    std::string result = "YES";

    // Проверяем, является ли слово палиндромом
    for (size_t i = 0; i < word.length() / 2; ++i) {
        if (word[i] != word[word.length() - 1 - i]) {
            result = "NO";
            break;
        }
    }

    // Выводим результат
    std::cout << result << std::endl;

    return 0;
}
