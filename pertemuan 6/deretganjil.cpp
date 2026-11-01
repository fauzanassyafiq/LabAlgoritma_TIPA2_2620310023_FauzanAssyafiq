#include <iostream>
using namespace std;

int main() 
{
    int a = 0;

    for (int i = 1; i <= 19; i += 2) {
        a += i;
        cout << i;
        if (i <19 ){
            cout << " + ";
        }
    }

    cout << " = " << a << endl;

    return 0;
}