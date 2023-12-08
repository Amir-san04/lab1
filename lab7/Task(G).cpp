#include <iostream>
#include <string>

int countSubstrings(const std::string& str, const std::string& substring) {
    size_t count = 0;
    size_t startPos = 0;

    // ���� ��� ��������� ���������-�������
    while ((startPos = str.find(substring, startPos)) != std::string::npos) {
        // ����������� ������� � ��������� � ���������� ���������� ���������
        count++;
        startPos += substring.length();
    }

    return count;
}

int main() {
    std::string inputString, pattern;

    // ������ ������ � ���������-�������
    std::cout << "";
    std::getline(std::cin, inputString);

    std::cout << "";
    std::getline(std::cin, pattern);

    // �������� ������� ��� �������� ��������� ���������
    int result = countSubstrings(inputString, pattern);

    // ������� ���������
    std::cout << "" << result << std::endl;

    return 0;
}
