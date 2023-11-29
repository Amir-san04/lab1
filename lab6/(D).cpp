#include <iostream>
#include <vector>
using namespace std;

void generateChains(int N, int K, vector<int>& chain) {
    if (N == 0) {
        for (int i : chain) {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 1; i <= K; ++i) {
        chain.push_back(i);
        generateChains(N - 1, K, chain);
        chain.pop_back();
    }
}

int main() {
    int N, K;

    cout << " ";
    cin >> N >> K;

    if (N <= 0 || K <= 0 || N > 6 || K > 6) {
        cout << "Некорректный ввод." << endl;
        return 1;
    }

    vector<int> chain;
    generateChains(N, K, chain);

    return 0;
}
