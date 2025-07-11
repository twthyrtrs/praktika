#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;


    float a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    float c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    if (a>b && a>c) {
        cout << a << endl;
    }
    else if (b>a && b>c) {
        cout << b << endl;
    }
    else {
        cout << c << endl;
    }

    return 0;
}