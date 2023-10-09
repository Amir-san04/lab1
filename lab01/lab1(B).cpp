#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int next_num = num + 1;
    int prev_num = num - 1;

    cout << "The next number for the number " << num << " is " << next_num << "." << endl;
    cout << "The previous number for the number " << num << " is " << prev_num << "." << endl;

    return 0;
}
