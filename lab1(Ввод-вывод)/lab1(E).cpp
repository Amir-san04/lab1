#include <iostream>
using namespace std;

int main() {
    int v, t;

    // Чтение значения v
    cout << "Введите скорость (в км/ч): ";
    cin >> v;

    // Чтение значения t
    cout << "Введите время (в часах): ";
    cin >> t;

    // Вычисление расстояния
    int s = v * t;

    // Вычисление позиции Васи
    int position = s % 109;

    // Проверка и коррекция отрицательной позиции
    if (position < 0) {
        position = 109 + position;
    }

    // Вывод результата
    cout << "Вася остановится на отметке: " << position << endl;

    return 0;
}
