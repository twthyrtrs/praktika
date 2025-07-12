#include <iostream>
#include <cmath>
using namespace std;

int check_side(int x1, int y1, int x2, int y2) {
    return x2 * y1 - x1 * y2;
}

int Is_in(int x1, int y1, int x2, int y2, int x3, int y3) {
    int a = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    int b = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
    int c = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
    
    if (a + b <= c || a + c <= b || b + c <= a) {
        return -1;
    }
    
    int side1 = check_side(x1, y1, x2, y2);
    int side2 = check_side(x2, y2, x3, y3);
    int side3 = check_side(x3, y3, x1, y1);
    
    if ((side1 >= 0 && side2 >= 0 && side3 >= 0) || 
        (side1 <= 0 && side2 <= 0 && side3 <= 0)) {
        return 1; 
    }
    
    return 0;
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int result = Is_in(x1, y1, x2, y2, x3, y3);
    cout << result; 
    return result;
}