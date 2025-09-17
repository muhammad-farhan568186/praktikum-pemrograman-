#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int matriks[3][3];

    
    for (int i = 0; i < 3; i++) {
        cout << "Masukan data matriks baris " << i+1 << ": ";
        for (int j = 0; j < 3; j++) {
            cin >> matriks[i][j];
        }
    }

    
    cout << "Data yang anda masukan:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << setw(7) << matriks[i][j];
        }
        cout << endl;
    }

    return 0;
}