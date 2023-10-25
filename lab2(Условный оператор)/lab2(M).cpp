#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int k;
    cin >> k;

    int n = sqrt(k * 2); // ѕытаемс€ найти наибольшее n, такое что n*(n+1)/2 <= k

    if (n * (n + 1) / 2 == k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
