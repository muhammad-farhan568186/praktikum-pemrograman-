#include <iostream>
int main() {
 int a = 100;
 a += 5; // a = a + 5
 std::cout << "a += 5 : " << a << std::endl;
 a -= 3; // a = a - 3
 std::cout << "a -= 3 : " << a << std::endl;
 a *= 2; // a = a * 2
 std::cout << "a *= 2 : " << a << std::endl;
 a /= 4; // a = a / 4
 std::cout << "a /= 4 : " << a << std::endl;
 a %= 3; // a = a % 3
 std::cout << "a %= 3 : " << a << std::endl;
 return 0;
}