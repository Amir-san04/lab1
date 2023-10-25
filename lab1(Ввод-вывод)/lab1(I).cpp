#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    int digit1 = number / 100;  // Первая цифра
    int digit2 = (number / 10) % 10;  // Вторая цифра
    int digit3 = number % 10;  // Третья цифра

    int sum = digit1 + digit2 + digit3;

    cout << sum << endl;

    return 0;
}
