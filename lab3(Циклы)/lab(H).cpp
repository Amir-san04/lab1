#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a1 = 1;
    int r = 2;

    int sum = (a1 * (1 - pow(r, n + 1))) / (1 - r);

    cout << sum << endl;

    return 0;
}
