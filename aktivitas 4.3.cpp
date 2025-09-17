#include <iostream>
int main() {
 bool hasil;
 hasil = (10 > 5) && (5 < 10);
 std::cout << "10 > 5 AND 5 < 10 : " << hasil << std::endl;
 hasil = (10 > 5) || (5 > 10);
 std::cout << "10 > 5 OR 5 > 10 : " << hasil << std::endl;
 hasil = !(10 > 5);
std::cout << "NOT (10 > 5) : " << hasil << std::endl;
 return 0;
}