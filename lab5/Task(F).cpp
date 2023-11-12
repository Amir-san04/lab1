#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    int A[100][100];

    // Заполнение массива диагоналями
    int value = 0;
    for (int k = 0; k < n + m - 1; ++k) {
        for (int i = 0; i < n; ++i) {
            int j = k - i;
            if (j >= 0 && j < m) {
                A[i][j] = value++;
            }
        }
    }

    // Вывод полученного массива
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << A[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}