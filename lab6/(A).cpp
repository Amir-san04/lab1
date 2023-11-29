#include <iostream>
#include <cctype> // Для использования функции isdigit
using namespace std;

int countDigits(const string& str) {
    int count = 0;
    for (char ch : str) {
        if (isdigit(ch)) {
            count++;
        }
    }
    return count;
}

int main() {
    string input;

    cout << "";
    getline(cin, input);

    int digitCount = countDigits(input);

    cout << "" << digitCount << endl;

    return 0;
}
