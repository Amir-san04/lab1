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

    // ���������� ��� �������� ���������� �����
    std::string lastWord;

    // ������ ����� �� ������
    while (iss >> lastWord);

    // ������� ��������� �����
    std::cout << lastWord << std::endl;

    return 0;
}
