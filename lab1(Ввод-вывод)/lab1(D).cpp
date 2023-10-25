#include <iostream>

using namespace std;

int main() {
    int N, K;

    cin >> N >> K;

    int r = K % N;

    cout << r << endl;

    return 0;
}