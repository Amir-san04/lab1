#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* arr = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int last = arr[N - 1];

    for (int i = N - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}
