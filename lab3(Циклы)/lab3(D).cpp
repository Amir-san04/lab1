#include <iostream>
using namespace std;

// Функция для вычисления факториала
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n, k;
    cin >> n >> k;

    int result = factorial(n) / (factorial(k) * factorial(n - k));

    cout << result << endl;

    return 0;
}
