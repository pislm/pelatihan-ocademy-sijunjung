#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nilai[n];
    for (int i = 0; i < n; i++) {
        cin >> nilai[i];
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += nilai[i];
    }
    int ratarata = total / n;

    int bebekPintar = 0;
    for (int i = 0; i < n; i++) {
        if (nilai[i] > ratarata) {
            bebekPintar++;
        }
    }

    cout << bebekPintar << endl;
}