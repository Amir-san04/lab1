#include <iostream>
using namespace std;

int main() {
    int v, t;

    // ������ �������� v
    cout << "������� �������� (� ��/�): ";
    cin >> v;

    // ������ �������� t
    cout << "������� ����� (� �����): ";
    cin >> t;

    // ���������� ����������
    int s = v * t;

    // ���������� ������� ����
    int position = s % 109;

    // �������� � ��������� ������������� �������
    if (position < 0) {
        position = 109 + position;
    }

    // ����� ����������
    cout << "���� ����������� �� �������: " << position << endl;

    return 0;
}
