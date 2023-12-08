#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string filePath;

    // ������ ���� � �����
    std::cout << "";
    std::getline(std::cin, filePath);

    // ���������� stringstream ��� ���������� ���� �� �����
    std::istringstream iss(filePath);

    // ���������� ��� �������� ������ ����
    std::string pathPart;

    // ������ ����� ���� �� ������ � ������� ��
    while (std::getline(iss, pathPart, '\\')) {
        std::cout << pathPart << std::endl;
    }

    return 0;
}
