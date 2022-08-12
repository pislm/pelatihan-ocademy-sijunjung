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
    for (int i : nilai) {
        total += i;
    }
    int ratarata = total / n;

    int bebekPintar = 0;
    for (int i : nilai) {
        if (i > ratarata) {
            bebekPintar++;
        }
    }

    cout << bebekPintar << endl;
}