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

    // ���������� ��� �������� ������� �����
    std::string firstWord;

    // ������ ������ ����� �� ������
    iss >> firstWord;

    // ������� ������ �����
    std::cout << "" << firstWord << std::endl;

    return 0;
}
