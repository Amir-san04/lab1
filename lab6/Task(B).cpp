#include <iostream>
#include <cmath>
using namespace std;

double power(double a, int n) {
    return pow(a, n);
}

int main() {
    double a;
    int n;

    cout << "";
    cin >> a >> n;

    double result = power(a, n);

    cout << "" << result << endl;

    return 0;
}
