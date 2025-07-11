#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    for (int num = n1; num <= n2; num++) {
        cout << num << ": ";
        for(int i = 2; i <= num; i++) {
            if(num % i == 0) {
                cout << i << " ";
            }
        }
        cout << endl; 
    }

    return 0;
}
