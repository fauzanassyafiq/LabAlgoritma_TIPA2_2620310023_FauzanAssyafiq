#include<iostream>
using namespace std;

int main()
{
    int x,pembagi,a,pilihan;
    
    do {
        cout <<"========= Selamat datang ========="<<endl;
        cout <<"1. Tentukan bilangan genap/ganjil"<<endl;
        cout <<"2. Tentukan bilangan prima"<<endl;
        cout <<"3. Hentikan program"<<endl;
        cout <<endl;
        
        cout << "Pilih menu: ";
        cin >> pilihan;
        cout << endl;

        if (pilihan == 1) {
            cout <<"========= Menu Bilangan ganjil/genap ========="<<endl;
            cout <<"Masukan Bilangan: ";
            cin >>a;
            
            if (a%2==0){
                cout << a << " Bilangan genap" << endl;
            } else {
                cout << a << " Bilangan ganjil" << endl;
            }
            
        } else if (pilihan == 2) {
            cout <<"========= Menu Bilangan prima ========="<<endl;
            cout << "Masukan angka: ";
            cin >> x;
            
            pembagi = 0;
            
            for (int i = 1; i <= x; i++) {
                if (x % i == 0) {
                    pembagi = pembagi + 1;
                }
            }

            if (pembagi == 2) {
                cout << x << " bilangan prima" << endl;
            } else {
                cout << x << " bukan bilangan prima" << endl;
            }
            
        } else if (pilihan == 3) {
            cout << "Terima kasih" << endl;
            
        } else {}
        
        cout << endl;

    } while (pilihan != 3);

    return 0;
}