#include <iostream>
using namespace std;

int main() {
    int k, m, n;
    cin >> k >> m >> n;

    int time_required = ((n + k - 1) / k) * m; // Вычисляем необходимое общее время

    cout << time_required << endl;

    return 0;
}


