#include <iostream>
using namespace std;

int main() {
    int k, m, n;
    cin >> k >> m >> n;

    int time_per_cutlet = 2 * m; // ����� ��� ������������ ����� ������� � ����� ������
    int total_time = ((n + k - 1) / k) * time_per_cutlet; // ����� ����� ��� ���� ������

    cout << total_time << endl;

    return 0;
}


