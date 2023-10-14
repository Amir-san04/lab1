#include <iostream>
#include <cmath> // ���������� ���������� ��� ������������� ������� abs
using namespace std;

int main() {
    int knightRow, knightCol, otherRow, otherCol;
    cin >> knightRow >> knightCol >> otherRow >> otherCol;

    // ���������, ���� ������� ����� �������� ����� � �������� ������������� �������� ���� ����
    if (abs(knightRow - otherRow) == 2 && abs(knightCol - otherCol) == 1 ||
        abs(knightRow - otherRow) == 1 && abs(knightCol - otherCol) == 2) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
