#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int n) {
    int root = sqrt(n);
    return n == root * root;
}

bool isFibonacci(int A) {
    return isPerfectSquare(5 * A * A + 4) || isPerfectSquare(5 * A * A - 4) || A == 0 || A == 1;
}

int findFibonacciIndex(int A) {
    if (A == 0 || A == 1) {
        return A;
    }

    int a = 0, b = 1, c = 1;
    int index = 1;

    while (c < A) {
        c = a + b;
        a = b;
        b = c;
        index++;
    }

    return (c == A) ? index : -1;
}

int main() {
    int A;
    cin >> A;

    if (isFibonacci(A)) {
        int index = findFibonacciIndex(A);
        cout << index << endl;
    }
    else {
        cout << -1 << endl;
    }

    return 0;
}
