#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    int A[100][100];

    for (int i = 0; i < n * m; ++i) {
        A[i / m][i % m] = (i / m) * (i % m);
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
