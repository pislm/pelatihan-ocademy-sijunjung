#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    while (s.find(t) != std::string::npos) {  // selama t masih ada didalam s
        int posisi = s.find(t);
        s.erase(posisi, t.length());
    }
    cout << s << endl;
}