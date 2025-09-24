#include <iostream>
using namespace std;
int main() {
    int x;
    
    cout << "masukan angka" << ":";
    cin >> x;
    
    if(x<=1 || x%2==0) {cout << " bukan prima"; }
    else cout << "mungkin bilangan prima";

    return 0;
}