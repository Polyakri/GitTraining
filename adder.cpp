#include <iostream>

int main() {
  int a, b;
  std::cout << "Enter two numbers to add: ";
  std::cin >> a >> b;
  int sum = a + b;
  std::cout << "The sum of " << a << " and " << b << " is " << sum << std::endl;
  return 0;
}
