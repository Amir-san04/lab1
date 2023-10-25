#include <iostream>

using namespace std;

int main() {
    int v, t;

    cin >> v >> t;

    int position = (v * t) % 109;

    if (position < 0) {
        position = 109 + position;
    }

    cout << position << endl;

    return 0;
}
