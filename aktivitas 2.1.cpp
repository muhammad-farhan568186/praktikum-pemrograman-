#include<iostream>
#include<string>
int main() {
 int angka;
 float desimal;
 char karakter;
 std::cout << "Masukkan sebuah angka: ";
 std::cin >> angka;
 std::cout << "Masukkan sebuah angka desimal: ";
 std::cin >> desimal;
 std::cout << "Masukkan sebuah karakter: ";
 std::cin >> karakter;
 std::cout << "Angka yang Anda masukkan: " << angka << std::endl;
 std::cout << "Desimal yang Anda masukkan: " << desimal << std::endl;
 std::cout << "Karakter yang Anda masukkan: " << karakter << std::endl;
 
 return 0;
}