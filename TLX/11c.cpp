#include <iostream>
using namespace std;

int main() {
    string s;
    int x;
    cin >> s >> x;

    for (int i = 0; i < s.length(); i++) {
        char ambil = s[i];
        int angka = ambil + 2;
        if (angka > 122) {
            angka = 96 + (angka % 122);
        }
        char sesudah = angka;
        s[i] = sesudah;
    }

    cout << s << endl;
}