#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Введите трехзначное число: ";
    cin >> number;

    // Извлекаем цифры
    int hundreds = number / 100;
    int tens = (number % 100) / 10;
    int ones = number % 10;

    // Вычисляем сумму цифр
    int sum = hundreds + tens + ones;

    cout << "Сумма цифр: " << sum << endl;

    return 0;
}
