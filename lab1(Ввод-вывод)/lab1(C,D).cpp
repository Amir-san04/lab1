#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // ќбъ€вл€ем две переменные дл€ количества школьников (N) и €блок (K).
    int N, K;

    // ѕросим пользовател€ ввести количество школьников и €блок.
    cout << "¬ведите количество школьников: ";
    cin >> N;

    cout << "¬ведите количество €блок: ";
    cin >> K;

    // ¬ычисл€ем сколько €блок каждому школьнику и остаток в корзине.
    int apples_per_student = K / N;
    int remaining_apples = K % N;

    // ¬ыводим результаты.
    cout << " аждому школьнику достанетс€ " << apples_per_student << " €блок." << endl;
    cout << "¬ корзине останетс€ " << remaining_apples << " €блок." << endl;

    return 0;
}