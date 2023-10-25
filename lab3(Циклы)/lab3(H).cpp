#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0;
    for (int i = 0; i <= N; i++) {
        sum += pow(2, i);
    }

    cout << sum << endl;

    return 0;
}
