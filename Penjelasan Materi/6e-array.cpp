#include <iostream>
using namespace std;

int main() {
    int arr[2][5] = {
        {3, 1, 5, 7, 3},
        {1, 5, 7, 1, 0}};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}