#include <iostream>
using namespace std;

int main() {
    // ��� 1: ��������� ���������� ��� �������� ���������
    int queenRow, queenCol, otherRow, otherCol;

    // ��� 2: ������ ���������� � ����������
    cout << "������� ���������� ����� (������ �������): ";
    cin >> queenRow >> queenCol;

    cout << "������� ���������� ������ ������ (������ �������): ";
    cin >> otherRow >> otherCol;

    // ��� 3: ���������, ����� �� ����� ��������� ������ ������
    if (queenRow == otherRow || queenCol == otherCol ||
        abs(queenRow - otherRow) == abs(queenCol - otherCol)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    // ��� 4: ��������� ���������
    return 0;
}
