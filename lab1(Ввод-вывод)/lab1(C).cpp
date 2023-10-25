#include <iostream>

using namespace std;

int main() {
    int N, K;

    cin >> N >> K;

    int apples_per_student = K / N;

    cout << apples_per_student << endl;

    return 0;
}