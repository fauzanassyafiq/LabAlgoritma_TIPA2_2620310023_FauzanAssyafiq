#include <iostream> // Memasukkan library untuk input/output (cout)
using namespace std; // Agar tidak perlu menulis std:: sebelum cout
//Menggunakan semua fungsi/class/file pada memori namespace.std

int main() { // Fungsi utama tempat program mulai dijalankan
    //Inisialisasi variabel

    int x=50; // Membuat variabel x bertipe integer dan mengisi nilainya dengan 50

    int a,b,c,d,e; // Mendeklarasikan 5 variabel integer (a,b,c,d,e) sebagai wadah


    a=x>5; // Mengecek: Apakah x (50) lebih besar dari 5? Jika YA, nilai a = 1 (Benar)
    // Jika x>5 atau x<10 maka nilainya Benar atau Salah (1) atau (0)
    b=x<100; // Mengecek: Apakah x (50) lebih kecil dari 100? Jika YA, nilai b = 1 (Benar)
    // Jika x<100 maka nilainya Benar atau Salah (1) atau (0)
    c=a&&b; // Logika AND: Apakah a (1) DAN b (1) bernilai benar? Jika YA, nilai c = 1
    // Jika a dan b bernilai benar sama (1)(1)
    d=a||b; // Logika OR: Apakah a (1) ATAU b (1) bernilai benar? Jika YA, nilai d = 1
    // Jika a atau b salah satunya bernilai benar (1)(0) atau (0)(1)
    e=!(c); // Logika NOT: Membalikkan nilai c. Karena c=1, maka e menjadi 0 (Salah)
    // Dimana nilainya kebalikan dari c

    //Output berupa 1(Benar) dan 0(Salah)
    cout<<"Nilai a=x>5+5= "<<a<<endl; // Menampilkan hasil perhitungan variabel a
    cout<<"Nilai b=x>100= "<<b<<endl; // Menampilkan hasil perhitungan variabel b
    cout<<"Nilai c=a && b= "<<c<<endl; // Menampilkan hasil perhitungan variabel c
    cout<<"Nilai d=a || b= "<<d<<endl; // Menampilkan hasil perhitungan variabel d
    cout<<"Nilai e=!(c)= "<<e<<endl; // Menampilkan hasil perhitungan variabel e
    //Fungsi diatas merupakan perintah untuk menampilkan teks dan hasilnya
    
    cout << "\nTekan Enter untuk keluar...";
    cin.get(); // Mengganti getchar() agar tidak error di VS Code
    return 0;
} // Akhir dari fungsi yang dijalankan
