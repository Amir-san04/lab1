#include <iostream>
using namespace std;

int NumberOfZeroes(int n) {
    int count = 0;

    while (n > 0) {
        if (n % 10 == 0) {
            count++;
        }
        n /= 10;
    }

    return count;
}

int main() {
    int N;
    cin >> N;

    int result = NumberOfZeroes(N);

    cout << result << endl;

    return 0;
}
