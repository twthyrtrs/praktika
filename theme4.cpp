#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    cin >> a;
    float sum1 = 0.0f, sum2 = 0.0f, sum3 = 0.0f, sum4 = 0.0f;
    
    // n = 5 
    for(int n = 1; n <= 5; n++) {
        sum1 += (1.0f / (pow(a, n)));
    }
    
    // n = 10
    for(int n = 1; n <= 10; n++) {
        sum2 += (1.0f / (pow(a, n)));
    }
    
    // n = 15
    for(int n = 1; n <= 15; n++) {
        sum3 += (1.0f / (pow(a, n)));
    }
    
    // n = 20
    for(int n = 1; n <= 20; n++) {
        sum4 += (1.0f / (pow(a, n)));
    }

    cout << sum1 << " " << sum2 << " " << sum3 << " " << sum4;
    return 0;
}
