#include <iostream>
using namespace std;

void sapa(string nama) {
    cout << "Halo " << nama << endl;
    cout << "hai" << endl;
}

void sapaXKali(string nama, int kali) {
    for (int i = 0; i < kali; i++) {
        cout << "Halo " << nama << endl;
    }
}

int luas(int p, int l) {
    int hasil = p * l;
    return hasil;
}

void gambar(int x) {
    for (int i = 0; i < x; i++) {
        cout << "*";
    }
    cout << endl;
}

string gambarr(int x) {
    string hasil = "";
    for (int i = 0; i < x; i++) {
        hasil += "*";
    }
    return hasil;
}

int main() {
    sapaXKali("hafizh", 5);
}