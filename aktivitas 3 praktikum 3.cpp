#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "masukan angka dengan rentang 1 sampai 200 :";
    cin >>x;
    if (x<=200 && x>=1) {if(x==2 || x==3 || x==5 || x==7 || x==11 || x==13) {cout << "bilangan prima";}
    else if(x%2==0 || x%3==0 || x%5==0 || x%7==0 || x%11==0 || x%13==0 ) {cout << "bukan bilangan prima";}
    else cout << "bilangan prima";
    }
    else cout << "masukan angka lain";
    
return 0;
}