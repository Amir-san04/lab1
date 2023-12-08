#include <iostream>
#include <string>

// ��������� ��� ������ ��������� � ������
void replaceSubstring(std::string& str, const std::string& pattern, const std::string& replacement) {
    size_t startPos = 0;

    // ���� ��� ��������� ���������-�������
    while ((startPos = str.find(pattern, startPos)) != std::string::npos) {
        // �������� ���������-������� �� ���������-������
        str.replace(startPos, pattern.length(), replacement);

        // ������������ � ���������� ���������� ���������
        startPos += replacement.length();
    }
}

int main() {
    std::string inputString, pattern, replacement;

    // ������ ������, ���������-������� � ���������-������
    std::cout << "";
    std::getline(std::cin, inputString);

    std::cout << "";
    std::getline(std::cin, pattern);

    std::cout << "";
    std::getline(std::cin, replacement);

    // �������� ��������� ��� ������ ���������
    replaceSubstring(inputString, pattern, replacement);

    // ������� ���������
    std::cout << "" << inputString << std::endl;

    return 0;
}
