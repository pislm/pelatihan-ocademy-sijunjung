#include <iostream>
using namespace std;

int main() {
    int angka = -12;
    if (angka > 0) {
        if (angka % 2 == 0) {
            cout << "Positif Genap\n";
        } else {
            cout << "Positif Ganjil\n";
        }
    } else if (angka < 0) {
        if (angka % 2 == 0) {
            cout << "Negatif Genap\n";
        } else {
            cout << "Negatif Ganjil\n";
        }
    }
}