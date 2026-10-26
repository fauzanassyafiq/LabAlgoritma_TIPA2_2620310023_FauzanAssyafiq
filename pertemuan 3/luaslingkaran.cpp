#include <iostream>
using namespace std;

int main() 
{
    float phi = 3.14; 
    float jari_jari, luas;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jari_jari;

    luas = phi * jari_jari * jari_jari;

    cout << "Luas Lingkaran adalah: " << luas << endl;

    return 0;
}