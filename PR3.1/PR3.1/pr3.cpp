#include <iostream>
#include <cmath>
using namespace std;


int main() {
    double x, y;
    cout << "x: ";
    cin >> x;

    double f;
    if (x <= 0)
        f = log(fabs(sin(x))) + pow(x, 7);
    if (x > 0 && x <= 3)
        f = 1.0 / tan(fabs(x + 1) / 2);
    if (x > 3)
        f = 3 * x - pow(x, 5);

    y = 1 + 9 * x + f;
    cout << "1) y = " << y << endl;

    if (x <= 0)
        f = log(fabs(sin(x))) + pow(x, 7);
    else if (x > 0 && x <= 3)
        f = 1.0 / tan(fabs(x + 1) / 2);
    else
        f = 3 * x - pow(x, 5);

    y = 1 + 9 * x + f;
    cout << "2) y = " << y << endl;

    return 0;
}
