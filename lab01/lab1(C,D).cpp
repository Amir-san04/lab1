#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // ��������� ��� ���������� ��� ���������� ���������� (N) � ����� (K).
    int N, K;

    // ������ ������������ ������ ���������� ���������� � �����.
    cout << "������� ���������� ����������: ";
    cin >> N;

    cout << "������� ���������� �����: ";
    cin >> K;

    // ��������� ������� ����� ������� ��������� � ������� � �������.
    int apples_per_student = K / N;
    int remaining_apples = K % N;

    // ������� ����������.
    cout << "������� ��������� ���������� " << apples_per_student << " �����." << endl;
    cout << "� ������� ��������� " << remaining_apples << " �����." << endl;

    return 0;
}