#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    int A[50][50];

    int value = 0;

    // Заполнение массива змейкой
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; ++j) {
                A[i][j] = value++;
            }
        }
        else {
            for (int j = m - 1; j >= 0; --j) {
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