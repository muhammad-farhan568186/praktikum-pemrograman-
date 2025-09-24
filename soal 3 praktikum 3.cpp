#include <iostream>
#include <string>
using namespace std;

int main() {
    string username;
    int pin;

    cout << "Masukkan username: ";
    cin >> username;

    cout << "Masukkan PIN (0-9999): ";
    cin >> pin;

    if (username == "ugo") {
        if (pin >= 0 && pin <= 9999) {
            cout << "Akses diterima" << endl;
        } else {
            cout << "PIN invalid" << endl;
        }
    } else {
        cout << "User tidak dikenal" << endl;
    }

    return 0;
}