#include <iostream>
using namespace std;

int main() {
    int k, m, n;
    cin >> k >> m >> n;

    int time_per_cutlet = 2 * m; // Время для поджаривания одной котлеты с обеих сторон
    int total_time = ((n + k - 1) / k) * time_per_cutlet; // Общее время для всех котлет

    cout << total_time << endl;

    return 0;
}


