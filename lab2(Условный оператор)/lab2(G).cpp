#include <iostream>
using namespace std;

int main() {
    int rookRow, rookCol, otherRow, otherCol;

    cout << "¬ведите координаты ладьи (строка столбец): ";
    cin >> rookRow >> rookCol;

    cout << "¬ведите координаты другой фигуры (строка столбец): ";
    cin >> otherRow >> otherCol;

    if (rookRow == otherRow || rookCol == otherCol) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
