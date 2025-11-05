#include <iostream>
#include <iomanip>
using namespace std;

float hitungRataRata(int nilai[], int jumlah) {
    int total = 0;
    for (int i = 0; i < jumlah; i++) {
        total += nilai[i];
    }
    return (float)total / jumlah;
}

void tampilkanHasil(float rata) {
    cout << fixed << setprecision(2);
    cout << "Rata-rata: " << rata << endl;
    if (rata >= 70)
        cout << "Status : LULUS" << endl;
    else
        cout << "Status : TIDAK LULUS" << endl;
}

int main() {
    int jumlahNilai;
    cout << "Masukkan jumlah nilai: ";
    cin >> jumlahNilai;

    int nilai[jumlahNilai];
    for (int i = 0; i < jumlahNilai; i++) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    float rata = hitungRataRata(nilai, jumlahNilai);
    tampilkanHasil(rata);

    return 0;
}