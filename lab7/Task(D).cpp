#include <iostream>
#include <string>

int main() {
    std::string word;

    // ������ �����
    std::cout << "";
    std::cin >> word;

    // ���������� ��� �������� ����������
    std::string result = "YES";

    // ���������, �������� �� ����� �����������
    for (size_t i = 0; i < word.length() / 2; ++i) {
        if (word[i] != word[word.length() - 1 - i]) {
            result = "NO";
            break;
        }
    }

    // ������� ���������
    std::cout << result << std::endl;

    return 0;
}
