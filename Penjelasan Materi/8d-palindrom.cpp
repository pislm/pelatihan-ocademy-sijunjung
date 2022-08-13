#include <iostream>
using namespace std;

int main() {
    // sebuah program untuk mengecek palindrom atau bukan
    string s = "abccba";
    // cin >> s;

    bool palindrom = true;
    int panjang = s.length();
    for (int i = 0; i < panjang / 2; i++) {
        char depan = s[i];
        char belakang = s[panjang - 1 - i];
        if (depan != belakang) {
            palindrom = false;
        }
    }

    if (palindrom) {
        cout << "palindrom" << endl;
    } else
        cout << "bukan palindrom" << endl;
}
