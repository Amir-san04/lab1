#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* arr = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N / 2; i++) {
        swap(arr[i], arr[N - i - 1]);
    }

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}
