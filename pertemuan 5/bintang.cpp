#include <iostream>
using namespace std;

int main() {
    int i, j, a;

    cout << "Input Tinggi Segitiga: ";
    cin >> i;

    for (a = 1; a <= i; a++) {
        for (j = 1; j <= a; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}   