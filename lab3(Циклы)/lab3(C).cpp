#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int power_of_two = 1;

    while (power_of_two <= N) {
        cout << power_of_two << " ";
        power_of_two *= 2;
    }

    return 0;
}
