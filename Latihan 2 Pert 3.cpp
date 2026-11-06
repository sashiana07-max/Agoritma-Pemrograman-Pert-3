#include <iostream>
using namespace std;

int main() 
{
    // Deklarasi variabel
    char nama[30];
    float nilai_keaktifan, nilai_tugas, nilai_ujian;
    float murni_keaktifan, murni_tugas, murni_ujian, nilai_akhir;

    // Layar Masukan
    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "Nama Siswa      : "; cin.getline(nama, 30);
    cout << "Nilai Keaktifan : "; cin >> nilai_keaktifan;
    cout << "Nilai Tugas     : "; cin >> nilai_tugas;
    cout << "Nilai Ujian     : "; cin >> nilai_ujian;

    // Proses Perhitungan Nilai Murni
    murni_keaktifan = nilai_keaktifan * 0.20; // 20%
    murni_tugas     = nilai_tugas * 0.30;     // 30%
    murni_ujian     = nilai_ujian * 0.50;     // 50%
    
    // Total Nilai Akhir
    nilai_akhir = murni_keaktifan + murni_tugas + murni_ujian;

    // Layar Keluaran
    cout << "\n--------------------------------------------------" << endl;
    cout << "Siswa yang bernama " << nama << endl;
    cout << "Dengan nilai presentase yang dihasilkan:" << endl;
    cout << "Nilai Keaktifan * 20% : " << murni_keaktifan << endl;
    cout << "Nilai Tugas * 30%     : " << murni_tugas << endl;
    cout << "Nilai Ujian * 50%     : " << murni_ujian << endl;
    cout << "Jadi Siswa yang bernama " << nama 
         << " Memperoleh nilai akhir sebesar " << nilai_akhir << endl;

    return 0;
}
