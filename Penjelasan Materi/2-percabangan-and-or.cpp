#include <iostream>
using namespace std;

int main() {
    int angka = -12;
    if (angka > 0 && angka % 2 == 0)
        cout << "Positif genap" << endl;
    else if (angka > 0 && angka % 2 != 0)
        cout << "Positif ganjil" << endl;
    else if (angka < 0 && angka % 2 == 0)
        cout << "Negatif genap" << endl;
    else if (angka < 0 && angka % 2 != 0)
        cout << "Negatif ganjil" << endl;
}