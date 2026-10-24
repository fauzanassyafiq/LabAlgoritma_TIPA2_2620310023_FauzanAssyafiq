#include<iostream>
using namespace std;

int main()
{
    int x, pembagi = 0;

    cout << "Masukan angka: ";
    cin >> x;

    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            pembagi = pembagi + 1;
        }
    }

    if (pembagi == 2) {
        cout << "bilangan prima" << endl;
    } else {
        cout << "bukan bilangan prima" << endl;
    }

    return 0;
}