#include <stdlib.h>

#include <iostream>
using namespace std;

int f(int x, int a, int b) {
    return abs(a * x + b);
}

int main() {
    int a, b, k, x;
    cin >> a >> b >> k >> x;
    int hasil = f(x, a, b);
    if (k > 1) {
        for (int i = 0; i < k - 1; i++) {
            hasil = f(hasil, a, b);
        }
    }
    cout << hasil << endl;
}