#include <iostream>
using namespace std;

// Fungsi tukar dengan pass by value
void tukarByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    // Nilai a dan b hanya berubah di dalam fungsi ini, tidak memengaruhi variabel asli
}

// Fungsi tukar dengan pass by reference (atau "pass by variable")
void tukarByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    // Nilai a dan b asli ikut berubah karena kita menggunakan referensi
}

int main() {
    int a, b;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    cout << "Sebelum ditukar: a = " << a << ", b = " << b << endl;

    // Panggil fungsi tukarByValue
    tukarByValue(a, b);
    cout << "Setelah tukarByValue : a = " << a << ", b = " << b << endl;

    // Panggil fungsi tukarByReference
    tukarByReference(a, b);
    cout << "Setelah tukarByReference : a = " << a << ", b = " << b << endl;

    return 0;
}