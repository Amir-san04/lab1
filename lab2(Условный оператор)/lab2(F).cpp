#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int max_number = a;

    if (b > max_number) {
        max_number = b;
    }

    if (c > max_number) {
        max_number = c;
    }

    cout << max_number << endl;

    return 0;
}
