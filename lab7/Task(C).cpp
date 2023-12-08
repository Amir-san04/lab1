#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string inputString;

    // ������ ������
    std::cout << "";
    std::getline(std::cin, inputString);

    // ���������� stringstream ��� ���������� ������ �� �����
    std::istringstream iss(inputString);

    // ���������� ��� �������� ���������� ����
    int wordCount = 0;

    // ������� ����� �� ������
    std::string word;
    while (iss >> word) {
        wordCount++;
    }

    // ������� ���������� ����
    std::cout << "" << wordCount << std::endl;

    return 0;
}
