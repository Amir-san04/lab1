#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;

    cout << "";
    cin >> x1 >> y1 >> x2 >> y2;

    double result = distance(x1, y1, x2, y2);

    cout << "" << result << endl;

    return 0;
}
