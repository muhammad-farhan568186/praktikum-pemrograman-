#include <iostream>
#include <iomanip>
int main() {
 int num1 = 2000, num2 = 39800, num3 = 489688;
 std::cout << std::right;
 std::cout << std::setw(10) << num1 << std::endl;
 std::cout << std::setw(10) << num2 << std::endl;
 std::cout << std::setw(10) << num3 << std::endl;
 return 0;
}