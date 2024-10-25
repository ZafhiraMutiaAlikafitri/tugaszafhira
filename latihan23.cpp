#include <iostream>
#include <iomanip>
using namespace std;

struct Jurusan {
    string kode;
    string nama;
    int pembayaranAwal;
    int jumlahCicilan;
    int besarCicilan;
};


// Fungsi untuk menampilkan tabel jurusan
void tampilkanTabelJurusan(Jurusan jurusan[], int n) {
    cout << "+----+------------------------+----------------+---------------+---------------+" << endl;
    cout << "| No | Nama Jurusan            | Pembayaran Awal| Jumlah Cicilan| Besar Cicilan  |" << endl;
    cout << "+----+------------------------+----------------+---------------+---------------+" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "| " << setw(2) << i + 1 << " | "
             << setw(22) << jurusan[i].nama << " | Rp "
             << setw(12) << jurusan[i].pembayaranAwal << " | "
             << setw(13) << jurusan[i].jumlahCicilan << " | Rp "
             << setw(11) << jurusan[i].besarCicilan << " |" << endl;
    }
    cout << "+----+------------------------+----------------+---------------+---------------+" << endl;
}

int main() {
    // Daftar jurusan
    Jurusan jurusan[] = {
        {"SI", "Sistem Informasi", 2100000, 7, 300000},
        {"TI", "Teknik Informatika", 2500000, 7, 300000},
        {"KA", "Komputer Akuntansi", 1750000, 6, 300000},
        {"MI", "Manajemen Informatika", 1500000, 6, 250000}
    };

    // Jumlah jurusan
    int jumlahJurusan = 4;

    // Tampilkan tabel jurusan
    tampilkanTabelJurusan(jurusan, jumlahJurusan);

    return 0;
}
