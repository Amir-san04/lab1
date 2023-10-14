#include <iostream>
using namespace std;

int main() {
    // Шаг 1: Объявляем переменные для хранения координат
    int queenRow, queenCol, otherRow, otherCol;

    // Шаг 2: Вводим координаты с клавиатуры
    cout << "Введите координаты ферзя (строка столбец): ";
    cin >> queenRow >> queenCol;

    cout << "Введите координаты другой фигуры (строка столбец): ";
    cin >> otherRow >> otherCol;

    // Шаг 3: Проверяем, может ли ферзь атаковать другую фигуру
    if (queenRow == otherRow || queenCol == otherCol ||
        abs(queenRow - otherRow) == abs(queenCol - otherCol)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    // Шаг 4: Завершаем программу
    return 0;
}
