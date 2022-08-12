#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 3 != 0)
            cout << i << endl;
        else
            continue;
    }
}