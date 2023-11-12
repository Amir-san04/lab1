#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == n - i - 1) {
                arr[i][j] = 1; // диагональ
            }
            else if (j > n - i - 1) {
                arr[i][j] = 2; // ниже диагонали
            }
            else {
                arr[i][j] = 0; // выше диагонали
            }
        }
    }

    // Вывод массива
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
