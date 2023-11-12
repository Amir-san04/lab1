#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int matrix[100][100];

    // Ввод элементов матрицы
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // Проверка симметричности относительно главной диагонали
    bool isSymmetric = true;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    // Вывод результата
    if (isSymmetric) {
        std::cout << "yes\n";
    }
    else {
        std::cout << "no\n";
    }

    return 0;
}
