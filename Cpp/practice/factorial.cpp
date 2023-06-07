#include <iostream>
#include <string>
using std::string;

long factorial(int n) {
  int fact = 1;
  for (int i = 1; i <= n; i++) {
    fact *= i;
  }
  return fact;
}

long trailingZeros(int n) {
  // count the trailing zeros, if the rightmost digit is different to zero, stop
  // counting.
  int count = 0;
  while (n % 10 == 0) {
    count++;
    n /= 10;
  }
  return count;
}

int main() {
  int n;
  std::cin >> n;
  std::cout << trailingZeros(factorial(n)) << "\n";
  return 0;
}
