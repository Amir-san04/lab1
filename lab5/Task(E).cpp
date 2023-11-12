#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;

    int A[50][50];  // Исходный массив
    int B[50][50];  // Новый массив после поворота

    // Ввод исходного массива
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cin >> A[i][j];
        }
    }

    // Поворот массива
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            B[i][j] = A[N - j - 1][i];
        }
    }

    // Вывод повернутого массива
    std::cout << M << " " << N << "\n";
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << B[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
