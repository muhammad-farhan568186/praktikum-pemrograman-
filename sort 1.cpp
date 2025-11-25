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
cout << "masukan angka";
cin >> g;
vector <int> a (g);

cout << "masukan angka";
for(int i=0;i<g;i++) { cin >> a[i];
}

bubble_sort (a.data() , g);
for(int i=0;i<g-1;i++) { cout << a[i] <<"," << " ";
}

cout << a[g-1];
return 0;
}