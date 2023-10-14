#include <iostream>
#include <cmath> // Подключаем библиотеку для использования функции abs
using namespace std;

int main() {
    int knightRow, knightCol, otherRow, otherCol;
    cin >> knightRow >> knightCol >> otherRow >> otherCol;

    // Проверяем, если разница между номерами строк и столбцов соответствует правилам хода коня
    if (abs(knightRow - otherRow) == 2 && abs(knightCol - otherCol) == 1 ||
        abs(knightRow - otherRow) == 1 && abs(knightCol - otherCol) == 2) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
