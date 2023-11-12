#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int A[50][50];

    int value = 0;
    int i = n + 1, j = n + 1;

    // ���������� ������� ��������
    for (int k = 1; k <= n; ++k) {
        // �����
        for (int p = 0; p < 2 * k - 1; ++p) {
            A[i--][j] = value++;
        }
        // �����
        for (int p = 0; p < 2 * k; ++p) {
            A[i][j--] = value++;
        }
        // ����
        for (int p = 0; p < 2 * k; ++p) {
            A[i++][j] = value++;
        }
        // ������
        for (int p = 0; p < 2 * k + 1; ++p) {
            A[i][j++] = value++;
        }
    }

    // ����� ����������� �������
    for (int i = 1; i <= 2 * n + 1; ++i) {
        for (int j = 1; j <= 2 * n + 1; ++j) {
            std::cout << A[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}