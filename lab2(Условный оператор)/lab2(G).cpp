#include <iostream>
using namespace std;

int main() {
    int rookRow, rookCol, otherRow, otherCol;

    cout << "������� ���������� ����� (������ �������): ";
    cin >> rookRow >> rookCol;

    cout << "������� ���������� ������ ������ (������ �������): ";
    cin >> otherRow >> otherCol;

    if (rookRow == otherRow || rookCol == otherCol) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
