#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    double sum = 0.0;
    double factorial = 1.0;

    for (int i = 0; i <= N; ++i) {
        if (i > 0)
            factorial *= i;
        sum += 1.0 / factorial;
    }

    cout << fixed << setprecision(5) << sum << endl;

    return 0;
}

