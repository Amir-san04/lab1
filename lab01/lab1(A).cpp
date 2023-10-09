#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double a, b;

    cout << "Введите длину первого катета (a): ";
    cin >> a;

    cout << "Введите длину второго катета (b): ";
    cin >> b;

    double c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "Гипотенуза треугольника: " << c << endl;

    return 0;
}
