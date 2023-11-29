#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> fibCache;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    if (fibCache.find(n) != fibCache.end()) {
        return fibCache[n];
    }

    fibCache[n] = fibonacci(n - 1) + fibonacci(n - 2);

    return fibCache[n];
}

int main() {
    int N;

    cout << " ";
    cin >> N;

    if (N < 0 || N > 30) {
        cout << "Некорректный ввод." << endl;
        return 1;
    }

    int result = fibonacci(N);

    cout << " " << result << endl;

    return 0;
}
