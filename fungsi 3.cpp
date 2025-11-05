##include <iostream>
#include <iomanip>
using namespace std;

int totalHadir = 0;

void updateTotalHadir(int hadir) {
    totalHadir += hadir;
}

float hitungRasio(int totalMahasiswa, int totalPertemuan) {
    int totalMaksimal = totalMahasiswa * totalPertemuan;
    float rasio = (float) totalHadir / totalMaksimal * 100;
    return rasio;
}

void tampilkanHasil(int totalMahasiswa, int totalPertemuan) {
    float rasio = hitungRasio(totalMahasiswa, totalPertemuan);
    cout << "Total kehadiran kelas : " << totalHadir 
         << " dari " << totalMahasiswa * totalPertemuan << endl;
    cout << fixed << setprecision(2);
    cout << "Persentase kehadiran : " << rasio << " %" << endl;
}

int main() {
    int jumlahMahasiswa, totalPertemuan, hadir;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;
    cout << "Masukkan total pertemuan: ";
    cin >> totalPertemuan;

    for (int i = 1; i <= jumlahMahasiswa; i++) {
        cout << "Kehadiran mahasiswa ke-" << i << ": ";
        cin >> hadir;
        updateTotalHadir(hadir);
    }

    tampilkanHasil(jumlahMahasiswa, totalPertemuan);

    return 0;
}