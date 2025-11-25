#include <iostream>
using namespace std;

void bubble_sort(int data[], int s) {
    for (int i = 0; i < s - 1; i++) {
        for (int j = s - 1; j > i; j--) {
            if (data[j] < data[j - 1]) {
                swap(data[j], data[j - 1]);
            }
        }
    }
}

int main() {
    int g;
    int a[100];

    cout << "masukan angka: ";
    cin >> g;

    cout << "masukan angka: ";
    for(int i = 0; i < g; i++) {
        cin >> a[i];
    }

    bubble_sort(a, g);

    for(int i = 0; i < g; i++) {
        if(a[i] % 2 != 0)
            cout << a[i] << ", ";
    }

    bool angka = true;
    for(int i = 0; i < g; i++) {
        if(a[i] % 2 == 0) {
            if(!angka) cout << ", ";
            cout << a[i];
            angka = false;
        }
    }

    return 0;
}