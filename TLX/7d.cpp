#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int angka = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << angka;
            angka = (angka + 1) % 10;
        }
        cout << endl;
    }
}

// 8 % 3 = 3 * 2 + 2
// 13 % 5 = 5 * 2 + 3
// 2 % 5 = 5 * 0 + 2