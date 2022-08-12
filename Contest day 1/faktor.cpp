#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    cin >> x;
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            cout << i << endl;
        }
    }
}
