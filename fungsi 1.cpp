#include <iostream>
#include <iomanip> 
using namespace std;


double celciusKeFahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32.0;
}

double celciusKeKelvin(double c) {
    return c + 273.15;
}

int main() {
    int jumlah;
    cout << "Masukkan jumlah data suhu: ";
    cin >> jumlah;

    double celcius[jumlah], fahrenheit[jumlah], kelvin[jumlah];

    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan suhu ke-" << i + 1 << " (Celcius): ";
        cin >> celcius[i];
        fahrenheit[i] = celciusKeFahrenheit(celcius[i]);
        kelvin[i] = celciusKeKelvin(celcius[i]);
    }

    cout << fixed << setprecision(2);
    cout << "\nCelcius  Fahrenheit  Kelvin" << endl;
    cout << "-------------------------------------" << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << setw(7) << celcius[i]
             << setw(12) << fahrenheit[i]
             << setw(10) << kelvin[i] << endl;
    }

    return 0;
}