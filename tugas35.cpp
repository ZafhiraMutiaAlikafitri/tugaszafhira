#include <iostream>
#include<string.h>
#include<conio.h>
using namespace std;

/*menghitung gaji pokok*/
int hitungGajiPk(int jamKerja) {
    return jamKerja * 2000;
}

/*menghitung uang lembur*/
int hitungUangLmbur(int jamKerja) {
    if (jamKerja > 7)
        return (jamKerja - 7) * 1.5 * 2000;
    return 0;
}

/*menghitung uang makan*/
int hitungUangMkn(int jamKerja) {
    if (jamKerja >= 10)
        return 2500;
    else if (jamKerja >= 8)
        return 1500;
    return 0;
}

/*menghitung uang jasa lembur*/
int hitungUangJasaLembur(int jamKerja) {
    if (jamKerja >= 9)
        return 3000;
    return 0;
}

/*menghitung tolga yang diterima*/
int hitungGajiTotal(int jamKerja) {
    int gajiPokok = hitungGajiPk(jamKerja);
    int uangLembur = hitungUangLmbur(jamKerja);
    int uangMakan = hitungUangMkn(jamKerja);
    int uangJasaLembur = hitungUangJasaLembur(jamKerja);

    return gajiPokok + uangLembur + uangMakan + uangJasaLembur;
}

int main() {
    int jamKerja;

    cout << "Masukkan jumlah jam kerja: ";
    cin >> jamKerja;

    int gajiPokok = hitungGajiPk(jamKerja);
    int uangLembur = hitungUangLmbur(jamKerja);
    int uangMakan = hitungUangMkn(jamKerja);
    int uangJasaLembur = hitungUangJasaLembur(jamKerja);
    int totalGaji = hitungGajiTotal(jamKerja);

    cout << "Gaji Pokok       : Rp " << gajiPokok << endl;
    cout << "Uang Lembur      : Rp " << uangLembur << endl;
    cout << "Uang Makan       : Rp " << uangMakan << endl;
    cout << "Uang Jasa Lembur : Rp " << uangJasaLembur << endl;
    cout << "Total Gaji       : Rp " << totalGaji << endl;

    return 0;
}
