#include <iostream>
#include <string>

// ������� ��� ���������� ����� � ����������� �������
std::string encryptWord(const std::string& word) {
    std::string encryptedWord = word;

    // �������� ����� �����
    size_t wordLength = word.length();

    // ����������� ����� ������ ����� �� ����� �����
    for (size_t i = 0; i < wordLength; ++i) {
        char& currentChar = encryptedWord[i];

        // ���� ������� ������ - �������� �����
        if (islower(currentChar)) {
            currentChar = 'a' + (currentChar - 'a' + wordLength) % 26;
        }
        // ���� ������� ������ - ��������� �����
        else if (isupper(currentChar)) {
            currentChar = 'A' + (currentChar - 'A' + wordLength) % 26;
        }
    }

    return encryptedWord;
}

int main() {
    std::string inputString;

    // ������ ������
    std::cout << "";
    std::getline(std::cin, inputString);

    std::string encryptedString;

    // ���������� ��� �������� �������� �����
    std::string currentWord;

    // ������������ ������ ������ � ������
    for (char& c : inputString) {
        // ���� ������ - ���������� �����, ��������� � �������� �����
        if (isalpha(c)) {
            currentWord += c;
        }
        else {
            // ���� ������ �� �������� ������, ������� ������� ����� � ��������� � ������������� ������
            if (!currentWord.empty()) {
                encryptedString += encryptWord(currentWord);
                currentWord.clear();
            }
            // ��������� ������, �� ���������� ������, � ������������� ������
            encryptedString += c;
        }
    }

    // ���������, �������� �� ����� � ����� ������
    if (!currentWord.empty()) {
        encryptedString += encryptWord(currentWord);
    }

    // ������� ������������� ������
    std::cout << "" << encryptedString << std::endl;

    return 0;
}
