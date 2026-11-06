#include <iostream>
#include <iomanip> // Diperlukan untuk setprecision jika ingin mengatur format angka
using namespace std;

int main() 
{
    // Deklarasi variabel
    char npm[15], nama[30];
    float nilai1, nilai2, nilai3, rata_rata;

    // Layar Masukkan
    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "NPM           : "; cin >> npm;
    cin.ignore(); // Membersihkan buffer stdin agar cin.getline/gets berjalan lancar jika nama ada spasi
    cout << "Nama          : "; cin.getline(nama, 30);
    cout << "Nilai Tugas I : "; cin >> nilai1;
    cout << "Nilai Tugas II: "; cin >> nilai2;
    cout << "Nilai Tugas III: "; cin >> nilai3;

    // Proses Perhitungan
    rata_rata = (nilai1 + nilai2 + nilai3) / 3.0;

    // Layar Keluaran
    cout << "\n--------------------------------------------------" << endl;
    cout << "NPM " << npm << " Siswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << setprecision(4) << rata_rata 
         << " dari hasil tugas yang diikutinya." << endl;

    return 0;
}
