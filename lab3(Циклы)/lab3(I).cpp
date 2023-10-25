#include <iostream>

using namespace std;

int main() {
    int A;
    cin >> A;

    int prev = 0, curr = 1, next = 1;
    int n = 1;

    while (next <= A) {
        if (next == A) {
            cout << n << endl;
            return 0;
        }
        n++;
        prev = curr;
        curr = next;
        next = prev + curr;
    }

    cout << -1 << endl;

    return 0;
}
