#include <iostream>
#include <string>

// Функция для шифрования слова с циклическим сдвигом
std::string encryptWord(const std::string& word) {
    std::string encryptedWord = word;

    // Получаем длину слова
    size_t wordLength = word.length();

    // Циклический сдвиг каждой буквы на длину слова
    for (size_t i = 0; i < wordLength; ++i) {
        char& currentChar = encryptedWord[i];

        // Если текущий символ - строчная буква
        if (islower(currentChar)) {
            currentChar = 'a' + (currentChar - 'a' + wordLength) % 26;
        }
        // Если текущий символ - прописная буква
        else if (isupper(currentChar)) {
            currentChar = 'A' + (currentChar - 'A' + wordLength) % 26;
        }
    }

    return encryptedWord;
}

int main() {
    std::string inputString;

    // Вводим строку
    std::cout << "";
    std::getline(std::cin, inputString);

    std::string encryptedString;

    // Переменная для хранения текущего слова
    std::string currentWord;

    // Обрабатываем каждый символ в строке
    for (char& c : inputString) {
        // Если символ - английская буква, добавляем к текущему слову
        if (isalpha(c)) {
            currentWord += c;
        }
        else {
            // Если символ не является буквой, шифруем текущее слово и добавляем к зашифрованной строке
            if (!currentWord.empty()) {
                encryptedString += encryptWord(currentWord);
                currentWord.clear();
            }
            // Добавляем символ, не являющийся буквой, к зашифрованной строке
            encryptedString += c;
        }
    }

    // Проверяем, остались ли слова в конце строки
    if (!currentWord.empty()) {
        encryptedString += encryptWord(currentWord);
    }

    // Выводим зашифрованную строку
    std::cout << "" << encryptedString << std::endl;

    return 0;
}
