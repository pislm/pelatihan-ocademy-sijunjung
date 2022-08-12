#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total = 0;
    for (int i = 0; i < n; i++) {
        int angka;
        cin >> angka;
        total += angka;
    }
    int ratarata = total / n;
    cout << ratarata;
    return 0;
}