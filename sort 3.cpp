#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(int data[], int s) {
// kondisi awal:
// sublarik urut tidak memiliki anggota
// semua elemen larik adalah anggota sublarik tidak urut
for (int i = 0; i < s - 1; i++) {
for (int j = s - 1; j > i; j--) {
if (data[j] < data[j - 1]) {
swap(data[j], data[j - 1]);
}
}
} // akhir satu putaran
}


int main() {

int g;
int a[100];
int b[100];
int l, R;

cout << "masukan jumlah";
cin >> g;


cout << "masukan angka";
for(int i=0;i<g;i++) { cin >> a[i];
}

cout << "masukan indeks awal";
cin >> R;

cout << "masukan indeks akhir";
cin >> l;

for(int i=R-1;i<l;i++) {b[i] = a[i];  }



bubble_sort (b , l);

for(int i=R-1;i<l;i++) {
cout << b[i] <<"," << " ";

}




return 0;
}

