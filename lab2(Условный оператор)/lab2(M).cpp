#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int k;
    cin >> k;

    // ������ ���������� ������ �� k
    double n = sqrt(k);

    // ���� ������ - ����� �����, �� ����� ��������� �����
    if (n == int(n)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
