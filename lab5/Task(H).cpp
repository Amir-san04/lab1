#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int A[50][50];

    int value = 0;
    int i = n + 1, j = n + 1;

    // Заполнение массива спиралью
    for (int k = 1; k <= n; ++k) {
        // Вверх
        for (int p = 0; p < 2 * k - 1; ++p) {
            A[i--][j] = value++;
        }
        // Влево
        for (int p = 0; p < 2 * k; ++p) {
            A[i][j--] = value++;
        }
        // Вниз
        for (int p = 0; p < 2 * k; ++p) {
            A[i++][j] = value++;
        }
        // Вправо
        for (int p = 0; p < 2 * k + 1; ++p) {
            A[i][j++] = value++;
        }
    }

    // Вывод полученного массива
    for (int i = 1; i <= 2 * n + 1; ++i) {
        for (int j = 1; j <= 2 * n + 1; ++j) {
            std::cout << A[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}