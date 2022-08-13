#include <iostream>
using namespace std;

int faktoriall(int x) {
    int hasil = 1;
    for (int i = 1; i <= x; i++) {
        hasil *= i;
    }
    return hasil;
}

int faktorial(int x) {
    if (x == 1) return 1;  // base case
    return x * faktorial(x - 1);
}

int fibo(int x) {
    if (x == 1)  // base case
        return 0;
    if (x == 2)  // base case
        return 1;
    return fibo(x - 1) + fibo(x - 2);
}

int main() {
    cout << faktorial(5) << endl;
    cout << fibo(11) << endl;
}

// 5! = 5 x 4 x 3 x 2 x 1
// 4! = 4  x 3 x 2 x 1
// 5! = 5 x 4! = 5 * 24 = 120
// 4! = 4 * 3! = 4 * 6 = 24
// 3! = 3 * 2! = 3 * 2 = 6
// 2! = 2 * 1! = 2 * 1 = 2
// 1! = 1

// f(x) = x * f(x-1)