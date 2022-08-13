#include <iostream>
using namespace std;

bool cekPalindrom(string s) {
    if (s.length() <= 1) return true;
    char palingDepan = s[0];
    char palingBelakang = s[s.length() - 1];
    if (palingDepan != palingBelakang) return false;
    string hapusDepanBelakang = s.substr(1, s.length() - 2);
    return cekPalindrom(hapusDepanBelakang);
}

int main() {
    string s;
    cin >> s;
    cout << cekPalindrom(s) << endl;
}

// "e"
//     "abcdedcba"