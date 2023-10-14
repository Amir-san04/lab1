#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N > 0) {
        cout << N % 2;
        N /= 2;
    }

    return 0;
}
