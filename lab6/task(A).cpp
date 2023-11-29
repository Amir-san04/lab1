#include <iostream>
using namespace std;

int min(int a, int b, int c, int d) {
    int minimum = a;
    if (b < minimum) minimum = b;
    if (c < minimum) minimum = c;
    if (d < minimum) minimum = d;
    return minimum;
}

int main() {
    int a, b, c, d;
    cout << "";
    cin >> a >> b >> c >> d;

    int result = min(a, b, c, d);

    cout << "" << result << endl;

    return 0;
}
