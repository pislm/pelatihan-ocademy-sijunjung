#include <iostream>
using namespace std;

int main() {
    string a = "halo dunia";
    // namaVar.substr(mulai, panjang)
    a = a.substr(5, 4);

    cout << a << endl;
}