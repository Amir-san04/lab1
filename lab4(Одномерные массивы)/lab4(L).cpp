#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* heights = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    int PeteHeight;
    cin >> PeteHeight;

    int position = 1;

    while (position <= N && heights[position - 1] >= PeteHeight) {
        position++;
    }

    cout << position << endl;

    delete[] heights;

    return 0;
}
