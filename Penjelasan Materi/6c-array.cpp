#include <iostream>
using namespace std;

int main() {
    int arr[5] = {3, 7, 12, 4, 9};
    // for (int i = 0; i < 5; i++) {
    //     cout << arr[i] << endl;
    // }

    for (int i : arr) {
        cout << i << endl;
    }
}