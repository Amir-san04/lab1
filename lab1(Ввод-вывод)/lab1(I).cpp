#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "������� ����������� �����: ";
    cin >> number;

    // ��������� �����
    int hundreds = number / 100;
    int tens = (number % 100) / 10;
    int ones = number % 10;

    // ��������� ����� ����
    int sum = hundreds + tens + ones;

    cout << "����� ����: " << sum << endl;

    return 0;
}
