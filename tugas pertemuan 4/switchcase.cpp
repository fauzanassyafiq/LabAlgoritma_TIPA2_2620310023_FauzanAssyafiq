#include<iostream>
using namespace std;

int main()
{
    string nama;
    double nilai1,nilai2,nilai3,rata_rata;

    cout << "program nilai rata rata" <<endl;
    cout << "nama siswa: ";
    getline (cin,nama);
    cout << "nilai pertandingan 1: ";
    cin >> nilai1;
    cout << "nilai pertandingan 2: ";
    cin >> nilai2;
    cout << "nilai pertandingan 3: ";
    cin >> nilai3;

    rata_rata= (nilai1 + nilai2 +nilai3)/3.0;
    cout << "siswa yang bernama "<< nama <<endl;
    cout << "memperoleh nilai rata rata "<< rata_rata <<" dari hasil perlombaan yang diikutinya "<<endl;
     
    if (rata_rata >= 85) {
    cout << "maka mendapatkan hadiah computer core i5" << endl;
    } else if (rata_rata >= 70) {
    cout << "maka mendapatkan hadiah uang sebesar rp. 2.500.000" << endl;
    } else {
    cout << "maka anda mendapatkan hadiah liburan" << endl;
    }

}