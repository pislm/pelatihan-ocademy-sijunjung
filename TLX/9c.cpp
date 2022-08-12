#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int banyak[1005];

    for (int i = 0; i < 1005; i++) {
        banyak[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        int angka;
        cin >> angka;
        banyak[angka]++;
    }

    int jumlahTerbanyak = 0;
    int angkaTerbanyak = 0;
    for (int i = 0; i < 1005; i++) {
        if (banyak[i] > jumlahTerbanyak && i > angkaTerbanyak) {
            angkaTerbanyak = i;
            jumlahTerbanyak = banyak[i];
        }
    }
    cout << angkaTerbanyak << endl;
}