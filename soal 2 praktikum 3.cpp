#include <iostream>
using namespace std;
int main() {


    int x=0,a=0,b=0;


    cout << "masukan angka untuk memilih operasi 1:+, 2:-,3:*,4:/  :";
    cin >> x;

    switch (x) {
    case 1:
        cout << "masukan dua angka yang ingin di operasikan dengan spasi sebagaii pemisah:";
        cin >> a >> b;


        cout << "hasil" << "=" << a+b;
        break;

    case 2:
        cout << "masukan dua angka yang ingin di operasikan dengan spasi sebagaii pemisah:";
        cin >> a >> b;


        cout << "hasil" << "=" << a-b;
        break;


    case 3:
        cout << "masukan dua angka yang ingin di operasikan dengan spasi sebagaii pemisah:";
        cin >> a >> b;


        cout << "hasil" << "=" << a*b;
        break;


    case 4:
        cout << "masukan dua angka yang ingin di operasikan dengan spasi sebagaii pemisah:";

        cin >> a >> b;
        if (a==0 || b==0) {

            cout << "hasil" << "=" << "0";
        }
        else cout << "=" << a/b;

        break;
    }

    return 0;

}