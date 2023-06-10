// fibonacci sequence
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int a, b, c, sum = 0;
  a = 1;
  b = 2;
  c = 0;
  while (b <= 4000000) {
    c = a + b;
    if (b % 2 == 0)
      sum += b;
    a = b;
    b = c;
  }
  cout << sum;
  return 0;
}
