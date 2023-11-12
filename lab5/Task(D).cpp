#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    long long A[100][100];  // Используем long long, чтобы избежать переполнения для больших значений n и m

    // Заполнение массива по правилам треугольника Паскаля
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i == 0 || j == 0) {
                A[i][j] = 1;
            }
            else {
                A[i][j] = A[i - 1][j] + A[i][j - 1];
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
