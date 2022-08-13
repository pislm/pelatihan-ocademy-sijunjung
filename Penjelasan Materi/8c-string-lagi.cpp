#include <iostream>
using namespace std;

string potong(string s, int mulai, int panjang) {
    string hasil = "";
    for (int i = mulai; i < mulai + panjang; i++) {
        hasil += s[i];
    }
    return hasil;
}

string potongg(string s, int mulai, int akhir) {
    string hasil = "";
    for (int i = mulai; i <= akhir; i++) {
        hasil += s[i];
    }
    return hasil;
}

int main() {
    string a = "Halodunia";
    cout << potong(a, 3, 5) << endl;
    cout << potongg(a, 3, 5) << endl;
}