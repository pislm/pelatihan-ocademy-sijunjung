#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int kartu[n];
    for (int i = 0; i < n; i++) {
        cin >> kartu[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        cout << kartu[i] << endl;
    }
}