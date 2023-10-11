#include <iostream>
using namespace std;

int main() {
    // Объявляем переменные для чисел n и m
    int n, m;

    // Вводим значения n и m
    cout << "Введите два натуральных числа: ";
    cin >> n >> m;

    // Проверяем условие деления нацело
    int result = (n % m == 0 || m % n == 0) ? 1 : 2;

    // Выводим результат
    cout << "Результат: " << result << endl;

    return 0;
}
