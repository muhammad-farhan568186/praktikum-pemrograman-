#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    // Input nilai A dan B
    cout << "Masukkan nilai A: ";
    cin >> A;
    cout << "Masukkan nilai B: ";
    cin >> B;

    cout << "\nSebelum ditukar: " << endl;
    cout << "A = " << A << ", B = " << B << endl;

    // Proses tukar menggunakan variabel C
    C = A; // simpan A ke C
    A = B; // pindahkan B ke A
    B = C; // pindahkan C (isi A semula) ke B

    cout << "\nSesudah ditukar: " << endl;
    cout << "A = " << A << ", B = " << B << endl;

    return 0;
}