#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int k;
    cin >> k;

    // Ќайдем квадратный корень от k
    double n = sqrt(k);

    // ≈сли корень - целое число, то можно выставить фишки
    if (n == int(n)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
