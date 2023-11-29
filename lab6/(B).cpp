#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << " ";
    cin >> num1 >> num2;

    int result = gcd(num1, num2);

    cout << "" << result << endl;

    return 0;
}
