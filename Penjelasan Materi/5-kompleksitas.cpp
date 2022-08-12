// Soal : Tentukan apakah x bilangan prima
// Bilangan prima : bilangan yang hanya bisa dibagi 1 dan dirinya sendiri

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    // ide 1 : cek semua bilangan dari 1 sampai x apakah faktor dari x
    // hitung faktor
    // int faktor = 0;
    // for (int i = 1; i <= x; i++) {
    //     if (x % i == 0) faktor++;
    // }
    // if (faktor == 2)
    //     cout << "Prima" << endl;
    // else
    //     cout << "Bukan Prima" << endl;

    // ide 2 : ketemu faktor lain, fix bukan prima
    // bool isPrima = true;  // anggap aja prima dulu
    // for (int i = 2; i < x; i++) {
    //     if (x % i == 0) {
    //         isPrima = false;  // ketemu faktor lain, berarti bukan prima
    //         break;
    //     }
    // }
    // if (isPrima)
    //     cout << "Prima" << endl;
    // else
    //     cout << "Bukan Prima" << endl;

    // ide 3 : Sieve of Eratosthenes
    bool isPrima = true;  // anggap aja prima dulu
    for (int i = 2; i < sqrt(x); i++) {
        if (x % i == 0) {
            isPrima = false;  // ketemu faktor lain, berarti bukan prima
            break;
        }
    }
    if (isPrima)
        cout << "Prima" << endl;
    else
        cout << "Bukan Prima" << endl;
}

// 100 disaat i = 2, habis bagi, fix bukan prima
