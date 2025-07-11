#include <iostream>
using namespace std;

int main() {
    int day = 1, tab = 1;
    int sum = 0;
    while (tab <= 20) {
        sum += tab;
        cout << "day: " << day << ", tab: " << tab << ", sum: " << sum << endl;
        tab++;
        day++;
    }

    return 0;
}