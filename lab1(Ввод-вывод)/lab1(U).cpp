#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int result = 2 - (n % m == 0 || m % n == 0);

    cout << result << endl;

    return 0;
}

